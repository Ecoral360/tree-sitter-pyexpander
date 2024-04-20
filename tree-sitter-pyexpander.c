#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <tree_sitter/api.h>

// These functions are each implemented in their own repo.
const TSLanguage *tree_sitter_pyexpander(void);
const TSLanguage *tree_sitter_python(void);

int main(int argc, const char **argv) {
  const char *text = argv[1];
  unsigned len = strlen(text);

  // Parse the entire text as pyexpander.
  TSParser *parser = ts_parser_new();
  ts_parser_set_language(parser, tree_sitter_pyexpander());
  TSTree *px_tree = ts_parser_parse_string(parser, NULL, text, len);
  TSNode pyexpander_root_node = ts_tree_root_node(px_tree);

  // In the pyexpander syntax tree, find the ranges of the `text` nodes,
  // which represent the underlying plain text, and the `code` nodes, which
  // represent the interpolated python.
  TSRange txt_ranges[10];
  TSRange python_ranges[10];
  unsigned txt_range_count = 0;
  unsigned python_range_count = 0;
  unsigned child_count = ts_node_child_count(pyexpander_root_node);

  for (unsigned i = 0; i < child_count; i++) {
    TSNode node = ts_node_child(pyexpander_root_node, i);
    if (strcmp(ts_node_type(node), "text") == 0) {
      txt_ranges[txt_range_count++] = (TSRange) {
        ts_node_start_point(node),
        ts_node_end_point(node),
        ts_node_start_byte(node),
        ts_node_end_byte(node),
      };
    } else {
      TSNode code_node = ts_node_named_child(node, 0);
      python_ranges[python_range_count++] = (TSRange) {
        ts_node_start_point(code_node),
        ts_node_end_point(code_node),
        ts_node_start_byte(code_node),
        ts_node_end_byte(code_node),
      };
    }
  }

  // Use the Python ranges to parse the Python.
  ts_parser_set_language(parser, tree_sitter_python());
  ts_parser_set_included_ranges(parser, python_ranges, python_range_count);
  TSTree *python_tree = ts_parser_parse_string(parser, NULL, text, len);
  TSNode python_root_node = ts_tree_root_node(python_tree);

  // Print all three trees.
  char *pyexpander_sexp = ts_node_string(pyexpander_root_node);
  char *python_sexp = ts_node_string(python_root_node);
  printf("Pyexpander: %s\n", pyexpander_sexp);
  printf("Python: %s\n", python_sexp);
  return 0;
}

