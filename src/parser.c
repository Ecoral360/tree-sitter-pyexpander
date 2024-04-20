#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 291
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 3
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 38

enum ts_symbol_identifiers {
  sym_kw_ident = 1,
  aux_sym_source_token1 = 2,
  aux_sym_text_token1 = 3,
  sym_dollar = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_safemode = 6,
  anon_sym___file__ = 7,
  anon_sym_py = 8,
  anon_sym_begin = 9,
  anon_sym_end = 10,
  anon_sym_extend = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_include = 15,
  anon_sym_include_begin = 16,
  anon_sym_default = 17,
  anon_sym_for = 18,
  anon_sym_for_begin = 19,
  anon_sym_endfor = 20,
  anon_sym_while = 21,
  anon_sym_while_begin = 22,
  anon_sym_endwhile = 23,
  anon_sym_if = 24,
  anon_sym_elif = 25,
  anon_sym_else = 26,
  anon_sym_endif = 27,
  anon_sym_in = 28,
  aux_sym_for_code_token1 = 29,
  anon_sym_EQ = 30,
  aux_sym_default_code_token1 = 31,
  sym_ident = 32,
  sym_comment = 33,
  sym_shabang_pyexpander = 34,
  sym_source = 35,
  sym__content = 36,
  sym_text = 37,
  sym_px = 38,
  sym__px_cmd = 39,
  sym__custom_cmd = 40,
  sym_py_cmd = 41,
  sym_begin_cmd = 42,
  sym_extend_cmd = 43,
  sym_include_cmd = 44,
  sym_default_cmd = 45,
  sym_for_cmd = 46,
  sym_while_cmd = 47,
  sym_if_cmd = 48,
  sym_code = 49,
  sym_for_code = 50,
  sym_default_code = 51,
  sym__code_content = 52,
  sym__code_content_2 = 53,
  aux_sym_source_repeat1 = 54,
  aux_sym_text_repeat1 = 55,
  aux_sym_extend_cmd_repeat1 = 56,
  aux_sym_if_cmd_repeat1 = 57,
  aux_sym_for_code_repeat1 = 58,
  aux_sym_default_code_repeat1 = 59,
  aux_sym_default_code_repeat2 = 60,
  alias_sym_body = 61,
  alias_sym_code_content = 62,
  alias_sym_custom_cmd = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_kw_ident] = "kw_ident",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_text_token1] = "text_token1",
  [sym_dollar] = "dollar",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_safemode] = "$safemode",
  [anon_sym___file__] = "$__file__",
  [anon_sym_py] = "$py",
  [anon_sym_begin] = "$begin",
  [anon_sym_end] = "$end",
  [anon_sym_extend] = "$extend",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_include] = "$include",
  [anon_sym_include_begin] = "$include_begin",
  [anon_sym_default] = "$default",
  [anon_sym_for] = "$for",
  [anon_sym_for_begin] = "$for_begin",
  [anon_sym_endfor] = "$endfor",
  [anon_sym_while] = "$while",
  [anon_sym_while_begin] = "$while_begin",
  [anon_sym_endwhile] = "$endwhile",
  [anon_sym_if] = "$if",
  [anon_sym_elif] = "$elif",
  [anon_sym_else] = "$else",
  [anon_sym_endif] = "$endif",
  [anon_sym_in] = "in",
  [aux_sym_for_code_token1] = "for_code_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_default_code_token1] = "default_code_token1",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym_shabang_pyexpander] = "shabang_pyexpander",
  [sym_source] = "source",
  [sym__content] = "_content",
  [sym_text] = "text",
  [sym_px] = "px",
  [sym__px_cmd] = "_px_cmd",
  [sym__custom_cmd] = "_custom_cmd",
  [sym_py_cmd] = "py_cmd",
  [sym_begin_cmd] = "begin_cmd",
  [sym_extend_cmd] = "extend_cmd",
  [sym_include_cmd] = "include_cmd",
  [sym_default_cmd] = "default_cmd",
  [sym_for_cmd] = "for_cmd",
  [sym_while_cmd] = "while_cmd",
  [sym_if_cmd] = "if_cmd",
  [sym_code] = "code",
  [sym_for_code] = "for_code",
  [sym_default_code] = "default_code",
  [sym__code_content] = "_code_content",
  [sym__code_content_2] = "_code_content_2",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_extend_cmd_repeat1] = "extend_cmd_repeat1",
  [aux_sym_if_cmd_repeat1] = "if_cmd_repeat1",
  [aux_sym_for_code_repeat1] = "for_code_repeat1",
  [aux_sym_default_code_repeat1] = "default_code_repeat1",
  [aux_sym_default_code_repeat2] = "default_code_repeat2",
  [alias_sym_body] = "body",
  [alias_sym_code_content] = "code_content",
  [alias_sym_custom_cmd] = "custom_cmd",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_kw_ident] = sym_kw_ident,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_dollar] = sym_dollar,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_safemode] = anon_sym_safemode,
  [anon_sym___file__] = anon_sym___file__,
  [anon_sym_py] = anon_sym_py,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_include_begin] = anon_sym_include_begin,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_for_begin] = anon_sym_for_begin,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_while_begin] = anon_sym_while_begin,
  [anon_sym_endwhile] = anon_sym_endwhile,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_in] = anon_sym_in,
  [aux_sym_for_code_token1] = aux_sym_for_code_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_default_code_token1] = aux_sym_default_code_token1,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym_shabang_pyexpander] = sym_shabang_pyexpander,
  [sym_source] = sym_source,
  [sym__content] = sym__content,
  [sym_text] = sym_text,
  [sym_px] = sym_px,
  [sym__px_cmd] = sym__px_cmd,
  [sym__custom_cmd] = sym__custom_cmd,
  [sym_py_cmd] = sym_py_cmd,
  [sym_begin_cmd] = sym_begin_cmd,
  [sym_extend_cmd] = sym_extend_cmd,
  [sym_include_cmd] = sym_include_cmd,
  [sym_default_cmd] = sym_default_cmd,
  [sym_for_cmd] = sym_for_cmd,
  [sym_while_cmd] = sym_while_cmd,
  [sym_if_cmd] = sym_if_cmd,
  [sym_code] = sym_code,
  [sym_for_code] = sym_for_code,
  [sym_default_code] = sym_default_code,
  [sym__code_content] = sym__code_content,
  [sym__code_content_2] = sym__code_content_2,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_extend_cmd_repeat1] = aux_sym_extend_cmd_repeat1,
  [aux_sym_if_cmd_repeat1] = aux_sym_if_cmd_repeat1,
  [aux_sym_for_code_repeat1] = aux_sym_for_code_repeat1,
  [aux_sym_default_code_repeat1] = aux_sym_default_code_repeat1,
  [aux_sym_default_code_repeat2] = aux_sym_default_code_repeat2,
  [alias_sym_body] = alias_sym_body,
  [alias_sym_code_content] = alias_sym_code_content,
  [alias_sym_custom_cmd] = alias_sym_custom_cmd,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_kw_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dollar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safemode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___file__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_py] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_shabang_pyexpander] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_px] = {
    .visible = true,
    .named = true,
  },
  [sym__px_cmd] = {
    .visible = false,
    .named = true,
  },
  [sym__custom_cmd] = {
    .visible = false,
    .named = true,
  },
  [sym_py_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_extend_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_include_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_default_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_while_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_if_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_for_code] = {
    .visible = true,
    .named = true,
  },
  [sym_default_code] = {
    .visible = true,
    .named = true,
  },
  [sym__code_content] = {
    .visible = false,
    .named = true,
  },
  [sym__code_content_2] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extend_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_cmd_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_default_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_default_code_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_custom_cmd] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_elif_cmd = 1,
  field_else_cmd = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_elif_cmd] = "elif_cmd",
  [field_else_cmd] = "else_cmd",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [17] = {.index = 0, .length = 2},
  [22] = {.index = 2, .length = 3},
  [24] = {.index = 5, .length = 1},
  [26] = {.index = 6, .length = 4},
  [27] = {.index = 10, .length = 2},
  [28] = {.index = 12, .length = 1},
  [30] = {.index = 13, .length = 3},
  [31] = {.index = 16, .length = 2},
  [32] = {.index = 18, .length = 3},
  [34] = {.index = 21, .length = 3},
  [35] = {.index = 24, .length = 3},
  [36] = {.index = 27, .length = 4},
  [37] = {.index = 31, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_elif_cmd, 0, .inherited = true},
    {field_elif_cmd, 1, .inherited = true},
  [2] =
    {field_elif_cmd, 0},
    {field_elif_cmd, 1},
    {field_elif_cmd, 2},
  [5] =
    {field_elif_cmd, 3, .inherited = true},
  [6] =
    {field_elif_cmd, 0},
    {field_elif_cmd, 1},
    {field_elif_cmd, 2},
    {field_elif_cmd, 3},
  [10] =
    {field_else_cmd, 3},
    {field_else_cmd, 4},
  [12] =
    {field_elif_cmd, 4, .inherited = true},
  [13] =
    {field_else_cmd, 3},
    {field_else_cmd, 4},
    {field_else_cmd, 5},
  [16] =
    {field_else_cmd, 4},
    {field_else_cmd, 5},
  [18] =
    {field_elif_cmd, 3, .inherited = true},
    {field_else_cmd, 4},
    {field_else_cmd, 5},
  [21] =
    {field_else_cmd, 4},
    {field_else_cmd, 5},
    {field_else_cmd, 6},
  [24] =
    {field_elif_cmd, 4, .inherited = true},
    {field_else_cmd, 5},
    {field_else_cmd, 6},
  [27] =
    {field_elif_cmd, 3, .inherited = true},
    {field_else_cmd, 4},
    {field_else_cmd, 5},
    {field_else_cmd, 6},
  [31] =
    {field_elif_cmd, 4, .inherited = true},
    {field_else_cmd, 5},
    {field_else_cmd, 6},
    {field_else_cmd, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_safemode,
  },
  [2] = {
    [0] = anon_sym___file__,
  },
  [3] = {
    [1] = alias_sym_custom_cmd,
  },
  [4] = {
    [0] = anon_sym_py,
  },
  [5] = {
    [0] = anon_sym_include,
  },
  [6] = {
    [0] = anon_sym_include_begin,
  },
  [7] = {
    [0] = anon_sym_default,
  },
  [8] = {
    [0] = anon_sym_begin,
    [2] = anon_sym_end,
    [3] = anon_sym_end,
  },
  [9] = {
    [1] = alias_sym_code_content,
  },
  [10] = {
    [0] = anon_sym_begin,
    [2] = alias_sym_body,
    [3] = anon_sym_end,
  },
  [11] = {
    [0] = anon_sym_extend,
  },
  [12] = {
    [0] = anon_sym_for,
    [3] = anon_sym_endfor,
    [4] = anon_sym_endfor,
  },
  [13] = {
    [0] = anon_sym_for_begin,
    [3] = anon_sym_endfor,
    [4] = anon_sym_endfor,
  },
  [14] = {
    [0] = anon_sym_while,
    [3] = anon_sym_endwhile,
    [4] = anon_sym_endwhile,
  },
  [15] = {
    [0] = anon_sym_while_begin,
    [3] = anon_sym_endwhile,
    [4] = anon_sym_endwhile,
  },
  [16] = {
    [0] = anon_sym_if,
    [3] = anon_sym_endif,
    [4] = anon_sym_endif,
  },
  [18] = {
    [0] = anon_sym_for,
    [3] = alias_sym_body,
    [4] = anon_sym_endfor,
  },
  [19] = {
    [0] = anon_sym_for_begin,
    [3] = alias_sym_body,
    [4] = anon_sym_endfor,
  },
  [20] = {
    [0] = anon_sym_while,
    [3] = alias_sym_body,
    [4] = anon_sym_endwhile,
  },
  [21] = {
    [0] = anon_sym_while_begin,
    [3] = alias_sym_body,
    [4] = anon_sym_endwhile,
  },
  [22] = {
    [0] = anon_sym_elif,
  },
  [23] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [4] = anon_sym_endif,
    [5] = anon_sym_endif,
  },
  [24] = {
    [0] = anon_sym_if,
    [4] = anon_sym_endif,
    [5] = anon_sym_endif,
  },
  [25] = {
    [3] = alias_sym_code_content,
  },
  [26] = {
    [0] = anon_sym_elif,
    [3] = alias_sym_body,
  },
  [27] = {
    [0] = anon_sym_if,
    [3] = anon_sym_else,
    [4] = anon_sym_else,
    [5] = anon_sym_endif,
    [6] = anon_sym_endif,
  },
  [28] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [5] = anon_sym_endif,
    [6] = anon_sym_endif,
  },
  [29] = {
    [4] = alias_sym_code_content,
  },
  [30] = {
    [0] = anon_sym_if,
    [3] = anon_sym_else,
    [4] = anon_sym_else,
    [5] = alias_sym_body,
    [6] = anon_sym_endif,
    [7] = anon_sym_endif,
  },
  [31] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [4] = anon_sym_else,
    [5] = anon_sym_else,
    [6] = anon_sym_endif,
    [7] = anon_sym_endif,
  },
  [32] = {
    [0] = anon_sym_if,
    [4] = anon_sym_else,
    [5] = anon_sym_else,
    [6] = anon_sym_endif,
    [7] = anon_sym_endif,
  },
  [33] = {
    [5] = alias_sym_code_content,
  },
  [34] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [4] = anon_sym_else,
    [5] = anon_sym_else,
    [6] = alias_sym_body,
    [7] = anon_sym_endif,
    [8] = anon_sym_endif,
  },
  [35] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [5] = anon_sym_else,
    [7] = anon_sym_endif,
    [8] = anon_sym_endif,
  },
  [36] = {
    [0] = anon_sym_if,
    [4] = anon_sym_else,
    [5] = anon_sym_else,
    [6] = alias_sym_body,
    [7] = anon_sym_endif,
    [8] = anon_sym_endif,
  },
  [37] = {
    [0] = anon_sym_if,
    [3] = alias_sym_body,
    [5] = anon_sym_else,
    [7] = alias_sym_body,
    [8] = anon_sym_endif,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_source_repeat1, 2,
    aux_sym_source_repeat1,
    alias_sym_body,
  aux_sym_for_code_repeat1, 2,
    aux_sym_for_code_repeat1,
    alias_sym_code_content,
  aux_sym_default_code_repeat1, 2,
    aux_sym_default_code_repeat1,
    alias_sym_code_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 18,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 19,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 30,
  [46] = 29,
  [47] = 27,
  [48] = 26,
  [49] = 49,
  [50] = 36,
  [51] = 51,
  [52] = 52,
  [53] = 21,
  [54] = 54,
  [55] = 44,
  [56] = 56,
  [57] = 43,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 25,
  [62] = 62,
  [63] = 24,
  [64] = 64,
  [65] = 23,
  [66] = 66,
  [67] = 28,
  [68] = 68,
  [69] = 59,
  [70] = 42,
  [71] = 68,
  [72] = 66,
  [73] = 73,
  [74] = 64,
  [75] = 62,
  [76] = 73,
  [77] = 60,
  [78] = 41,
  [79] = 40,
  [80] = 52,
  [81] = 16,
  [82] = 49,
  [83] = 58,
  [84] = 38,
  [85] = 56,
  [86] = 33,
  [87] = 54,
  [88] = 37,
  [89] = 20,
  [90] = 14,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 93,
  [96] = 96,
  [97] = 96,
  [98] = 94,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 102,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 105,
  [119] = 119,
  [120] = 107,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 114,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 127,
  [170] = 167,
  [171] = 121,
  [172] = 123,
  [173] = 125,
  [174] = 126,
  [175] = 175,
  [176] = 128,
  [177] = 129,
  [178] = 178,
  [179] = 130,
  [180] = 131,
  [181] = 133,
  [182] = 134,
  [183] = 142,
  [184] = 143,
  [185] = 144,
  [186] = 146,
  [187] = 148,
  [188] = 119,
  [189] = 149,
  [190] = 150,
  [191] = 155,
  [192] = 156,
  [193] = 158,
  [194] = 164,
  [195] = 154,
  [196] = 140,
  [197] = 139,
  [198] = 138,
  [199] = 137,
  [200] = 135,
  [201] = 159,
  [202] = 122,
  [203] = 124,
  [204] = 204,
  [205] = 136,
  [206] = 141,
  [207] = 145,
  [208] = 147,
  [209] = 152,
  [210] = 153,
  [211] = 157,
  [212] = 160,
  [213] = 162,
  [214] = 163,
  [215] = 165,
  [216] = 166,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 218,
  [225] = 220,
  [226] = 221,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 217,
  [231] = 231,
  [232] = 232,
  [233] = 204,
  [234] = 175,
  [235] = 232,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 168,
  [242] = 178,
  [243] = 243,
  [244] = 244,
  [245] = 227,
  [246] = 246,
  [247] = 247,
  [248] = 244,
  [249] = 246,
  [250] = 222,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 254,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 251,
  [264] = 261,
  [265] = 259,
  [266] = 266,
  [267] = 266,
  [268] = 252,
  [269] = 269,
  [270] = 260,
  [271] = 262,
  [272] = 272,
  [273] = 258,
  [274] = 272,
  [275] = 256,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 277,
  [285] = 280,
  [286] = 276,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 289,
};

static TSCharacterRange sym_ident_character_set_1[] = {
  {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37b, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe32},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb2},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139},
  {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25},
  {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6},
  {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf},
  {0x31f0, 0x31ff}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e},
  {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9},
  {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb},
  {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef},
  {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1},
  {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06},
  {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d},
  {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b},
  {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xff9d}, {0xffa0, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a00}, {0x10a10, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35},
  {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91},
  {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d23}, {0x10e80, 0x10ea9}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27},
  {0x10f30, 0x10f45}, {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11003, 0x11037}, {0x11071, 0x11072}, {0x11075, 0x11075}, {0x11083, 0x110af},
  {0x110d0, 0x110e8}, {0x11103, 0x11126}, {0x11144, 0x11144}, {0x11147, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11183, 0x111b2}, {0x111c1, 0x111c4},
  {0x111da, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x1122b}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d},
  {0x1129f, 0x112a8}, {0x112b0, 0x112de}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339},
  {0x1133d, 0x1133d}, {0x11350, 0x11350}, {0x1135d, 0x11361}, {0x11400, 0x11434}, {0x11447, 0x1144a}, {0x1145f, 0x11461}, {0x11480, 0x114af}, {0x114c4, 0x114c5},
  {0x114c7, 0x114c7}, {0x11580, 0x115ae}, {0x115d8, 0x115db}, {0x11600, 0x1162f}, {0x11644, 0x11644}, {0x11680, 0x116aa}, {0x116b8, 0x116b8}, {0x11700, 0x1171a},
  {0x11740, 0x11746}, {0x11800, 0x1182b}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x1192f},
  {0x1193f, 0x1193f}, {0x11941, 0x11941}, {0x119a0, 0x119a7}, {0x119aa, 0x119d0}, {0x119e1, 0x119e1}, {0x119e3, 0x119e3}, {0x11a00, 0x11a00}, {0x11a0b, 0x11a32},
  {0x11a3a, 0x11a3a}, {0x11a50, 0x11a50}, {0x11a5c, 0x11a89}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c2e}, {0x11c40, 0x11c40},
  {0x11c72, 0x11c8f}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d30}, {0x11d46, 0x11d46}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d89},
  {0x11d98, 0x11d98}, {0x11ee0, 0x11ef2}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342e},
  {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77},
  {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f50, 0x16f50}, {0x16f93, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x17000, 0x187f7},
  {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b150, 0x1b152}, {0x1b164, 0x1b167},
  {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f},
  {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a},
  {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5},
  {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788},
  {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad},
  {0x1e2c0, 0x1e2eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943}, {0x1e94b, 0x1e94b},
  {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39},
  {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54},
  {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a},
  {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9},
  {0x1eeab, 0x1eebb}, {0x20000, 0x2a6df}, {0x2a700, 0x2b738}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a},
};

static TSCharacterRange sym_ident_character_set_2[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xb7, 0xb7}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x300, 0x374},
  {0x376, 0x377}, {0x37b, 0x37d}, {0x37f, 0x37f}, {0x386, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x483, 0x487}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x591, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2},
  {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dc},
  {0x6df, 0x6e8}, {0x6ea, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x74a}, {0x74d, 0x7b1}, {0x7c0, 0x7f5}, {0x7fa, 0x7fa}, {0x7fd, 0x7fd},
  {0x800, 0x82d}, {0x840, 0x85b}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x898, 0x8e1}, {0x8e3, 0x963}, {0x966, 0x96f},
  {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bc, 0x9c4},
  {0x9c7, 0x9c8}, {0x9cb, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1}, {0x9fc, 0x9fc}, {0x9fe, 0x9fe},
  {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa3c, 0xa3c}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4d}, {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa75},
  {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabc, 0xac5},
  {0xac7, 0xac9}, {0xacb, 0xacd}, {0xad0, 0xad0}, {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xaff}, {0xb01, 0xb03}, {0xb05, 0xb0c},
  {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3c, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4d},
  {0xb55, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f}, {0xb71, 0xb71}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2},
  {0xbc6, 0xbc8}, {0xbca, 0xbcd}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7}, {0xbe6, 0xbef}, {0xc00, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28},
  {0xc2a, 0xc39}, {0xc3c, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4d}, {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63},
  {0xc66, 0xc6f}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbc, 0xcc4},
  {0xcc6, 0xcc8}, {0xcca, 0xccd}, {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd00, 0xd0c},
  {0xd0e, 0xd10}, {0xd12, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4e}, {0xd54, 0xd57}, {0xd5f, 0xd63}, {0xd66, 0xd6f}, {0xd7a, 0xd7f},
  {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdca, 0xdca}, {0xdcf, 0xdd4},
  {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe4e}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xec8, 0xecd},
  {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf18, 0xf19}, {0xf20, 0xf29}, {0xf35, 0xf35}, {0xf37, 0xf37}, {0xf39, 0xf39},
  {0xf3e, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf84}, {0xf86, 0xf97}, {0xf99, 0xfbc}, {0xfc6, 0xfc6}, {0x1000, 0x1049}, {0x1050, 0x109d},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x135d, 0x135f}, {0x1369, 0x1371}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1715}, {0x171f, 0x1734},
  {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773}, {0x1780, 0x17d3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dd}, {0x17e0, 0x17e9},
  {0x180b, 0x180d}, {0x180f, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x193b},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a60, 0x1a7c},
  {0x1a7f, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1ab0, 0x1abd}, {0x1abf, 0x1ace}, {0x1b00, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b6b, 0x1b73},
  {0x1b80, 0x1bf3}, {0x1c00, 0x1c37}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1cd0, 0x1cd2},
  {0x1cd4, 0x1cfa}, {0x1d00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x203f, 0x2040}, {0x2054, 0x2054}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x20d0, 0x20dc}, {0x20e1, 0x20e1}, {0x20e5, 0x20f0}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115},
  {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d7f, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x3005, 0x3007}, {0x3021, 0x302f}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x3099, 0x309a},
  {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x4dbf},
  {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66f}, {0xa674, 0xa67d}, {0xa67f, 0xa6f1}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa827}, {0xa82c, 0xa82c}, {0xa840, 0xa873},
  {0xa880, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8e0, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92d}, {0xa930, 0xa953}, {0xa960, 0xa97c}, {0xa980, 0xa9c0},
  {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaef}, {0xaaf2, 0xaaf6}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabec, 0xabed}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe00, 0xfe0f},
  {0xfe20, 0xfe2f}, {0xfe33, 0xfe34}, {0xfe4d, 0xfe4f}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b},
  {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff3f, 0xff3f}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x101fd, 0x101fd}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e0, 0x102e0}, {0x10300, 0x1031f},
  {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf},
  {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a38, 0x10a3a}, {0x10a3f, 0x10a3f}, {0x10a60, 0x10a7c},
  {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae6}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48},
  {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27}, {0x10d30, 0x10d39}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c},
  {0x10f27, 0x10f27}, {0x10f30, 0x10f50}, {0x10f70, 0x10f85}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11046}, {0x11066, 0x11075}, {0x1107f, 0x110ba},
  {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x110f0, 0x110f9}, {0x11100, 0x11134}, {0x11136, 0x1113f}, {0x11144, 0x11147}, {0x11150, 0x11173}, {0x11176, 0x11176},
  {0x11180, 0x111c4}, {0x111c9, 0x111cc}, {0x111ce, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x11237}, {0x1123e, 0x1123e}, {0x11280, 0x11286},
  {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112ea}, {0x112f0, 0x112f9}, {0x11300, 0x11303}, {0x11305, 0x1130c},
  {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133b, 0x11344}, {0x11347, 0x11348}, {0x1134b, 0x1134d},
  {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11366, 0x1136c}, {0x11370, 0x11374}, {0x11400, 0x1144a}, {0x11450, 0x11459}, {0x1145e, 0x11461},
  {0x11480, 0x114c5}, {0x114c7, 0x114c7}, {0x114d0, 0x114d9}, {0x11580, 0x115b5}, {0x115b8, 0x115c0}, {0x115d8, 0x115dd}, {0x11600, 0x11640}, {0x11644, 0x11644},
  {0x11650, 0x11659}, {0x11680, 0x116b8}, {0x116c0, 0x116c9}, {0x11700, 0x1171a}, {0x1171d, 0x1172b}, {0x11730, 0x11739}, {0x11740, 0x11746}, {0x11800, 0x1183a},
  {0x118a0, 0x118e9}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935}, {0x11937, 0x11938}, {0x1193b, 0x11943},
  {0x11950, 0x11959}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a3e}, {0x11a47, 0x11a47}, {0x11a50, 0x11a99},
  {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c40}, {0x11c50, 0x11c59}, {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7},
  {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d}, {0x11d3f, 0x11d47}, {0x11d50, 0x11d59},
  {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d98}, {0x11da0, 0x11da9}, {0x11ee0, 0x11ef6}, {0x11fb0, 0x11fb0},
  {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342e}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e},
  {0x16a60, 0x16a69}, {0x16a70, 0x16abe}, {0x16ac0, 0x16ac9}, {0x16ad0, 0x16aed}, {0x16af0, 0x16af4}, {0x16b00, 0x16b36}, {0x16b40, 0x16b43}, {0x16b50, 0x16b59},
  {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe4},
  {0x16ff0, 0x16ff1}, {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122},
  {0x1b150, 0x1b152}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9d, 0x1bc9e},
  {0x1cf00, 0x1cf2d}, {0x1cf30, 0x1cf46}, {0x1d165, 0x1d169}, {0x1d16d, 0x1d172}, {0x1d17b, 0x1d182}, {0x1d185, 0x1d18b}, {0x1d1aa, 0x1d1ad}, {0x1d242, 0x1d244},
  {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb},
  {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544},
  {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734},
  {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1d7ce, 0x1d7ff}, {0x1da00, 0x1da36},
  {0x1da3b, 0x1da6c}, {0x1da75, 0x1da75}, {0x1da84, 0x1da84}, {0x1da9b, 0x1da9f}, {0x1daa1, 0x1daaf}, {0x1df00, 0x1df1e}, {0x1e000, 0x1e006}, {0x1e008, 0x1e018},
  {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e100, 0x1e12c}, {0x1e130, 0x1e13d}, {0x1e140, 0x1e149}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ae},
  {0x1e2c0, 0x1e2f9}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e8d0, 0x1e8d6}, {0x1e900, 0x1e94b},
  {0x1e950, 0x1e959}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37},
  {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52},
  {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64},
  {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3},
  {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1fbf0, 0x1fbf9}, {0x20000, 0x2a6df}, {0x2a700, 0x2b738}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0},
  {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0xe0100, 0xe01ef},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(87);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(83);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\r') SKIP(6);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == ')') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(6);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == '\r') SKIP(7);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == '\r') SKIP(8);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(8);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '\r') SKIP(9);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(9);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '\r') SKIP(10);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '\r') SKIP(11);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(11);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\r') SKIP(24);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(24);
      if (set_contains(sym_ident_character_set_1, 656, lookahead)) ADVANCE(221);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '#') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '(') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_dollar);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(222);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_safemode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_safemode);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym___file__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym___file__);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_py);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_py);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_begin);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_extend);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_') ADVANCE(103);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_include_begin);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_default);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '_') ADVANCE(100);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_for_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_for_begin);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '_') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '_') ADVANCE(102);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_while_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_while_begin);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_endwhile);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_if);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_elif);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_endif);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_in);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_for_code_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_for_code_token1);
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead == '$') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_for_code_token1);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_default_code_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_default_code_token1);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '$') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_default_code_token1);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(149);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(42);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(92);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(215);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(146);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(134);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(136);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(137);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(179);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(50);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(48);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(216);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(170);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(147);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(124);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(125);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(151);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(76);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(186);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(65);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(55);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(40);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(68);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(94);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(144);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(197);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(153);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(154);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(155);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(104);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(73);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(78);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(96);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(122);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(203);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(173);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(162);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(165);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(169);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(171);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(163);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(174);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(191);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(181);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(192);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 's') ADVANCE(121);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(193);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(142);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(194);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(183);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(184);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'x') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(210);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(214);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(123);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(130);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(126);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(205);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(46);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(62);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(67);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(56);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(81);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(107);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(207);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(208);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(114);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(60);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(63);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(58);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(132);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(113);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(178);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(159);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(212);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(44);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (set_contains(sym_ident_character_set_2, 763, lookahead)) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'y') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_shabang_pyexpander);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(233);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 25},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 25},
  [161] = {.lex_state = 25},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 25},
  [164] = {.lex_state = 25},
  [165] = {.lex_state = 25},
  [166] = {.lex_state = 25},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 25},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 25},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 25},
  [177] = {.lex_state = 25},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 25},
  [180] = {.lex_state = 25},
  [181] = {.lex_state = 25},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 25},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 25},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 25},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 25},
  [202] = {.lex_state = 25},
  [203] = {.lex_state = 25},
  [204] = {.lex_state = 24},
  [205] = {.lex_state = 25},
  [206] = {.lex_state = 25},
  [207] = {.lex_state = 25},
  [208] = {.lex_state = 25},
  [209] = {.lex_state = 25},
  [210] = {.lex_state = 25},
  [211] = {.lex_state = 25},
  [212] = {.lex_state = 25},
  [213] = {.lex_state = 25},
  [214] = {.lex_state = 25},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 24},
  [218] = {.lex_state = 24},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 24},
  [222] = {.lex_state = 24},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 24},
  [225] = {.lex_state = 24},
  [226] = {.lex_state = 24},
  [227] = {.lex_state = 24},
  [228] = {.lex_state = 25},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 24},
  [231] = {.lex_state = 25},
  [232] = {.lex_state = 24},
  [233] = {.lex_state = 24},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 24},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 24},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 24},
  [246] = {.lex_state = 24},
  [247] = {.lex_state = 25},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 24},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 24},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 24},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 24},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 24},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 24},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 24},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 24},
  [281] = {.lex_state = 24},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 24},
  [284] = {.lex_state = 24},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 24},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_kw_ident] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [sym_dollar] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_safemode] = ACTIONS(1),
    [anon_sym___file__] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_for_begin] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_while_begin] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_shabang_pyexpander] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(283),
    [sym__content] = STATE(121),
    [sym_text] = STATE(121),
    [sym_px] = STATE(121),
    [sym__px_cmd] = STATE(123),
    [sym__custom_cmd] = STATE(123),
    [sym_py_cmd] = STATE(123),
    [sym_begin_cmd] = STATE(123),
    [sym_extend_cmd] = STATE(123),
    [sym_include_cmd] = STATE(123),
    [sym_default_cmd] = STATE(123),
    [sym_for_cmd] = STATE(123),
    [sym_while_cmd] = STATE(123),
    [sym_if_cmd] = STATE(123),
    [aux_sym_source_repeat1] = STATE(9),
    [aux_sym_text_repeat1] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [sym_dollar] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_shabang_pyexpander] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_elif,
    ACTIONS(45), 1,
      anon_sym_else,
    ACTIONS(47), 1,
      anon_sym_endif,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [64] = 21,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_elif,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [128] = 21,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_elif,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_else,
    ACTIONS(59), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [192] = 21,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_elif,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(63), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [256] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_dollar,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [295] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_dollar,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(75), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(256), 1,
      aux_sym_if_cmd_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [373] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_dollar,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [412] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_dollar,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(77), 1,
      anon_sym_DOLLAR,
    STATE(8), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(272), 1,
      aux_sym_if_cmd_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [490] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(275), 1,
      aux_sym_if_cmd_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [529] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(81), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(274), 1,
      aux_sym_if_cmd_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(88), 1,
      sym_dollar,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    STATE(14), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [607] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_dollar,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(67), 1,
      aux_sym_text_token1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_source_repeat1,
    STATE(107), 1,
      aux_sym_text_repeat1,
    STATE(121), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(123), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [646] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(102), 1,
      anon_sym_DOLLAR,
    STATE(34), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [812] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(104), 1,
      anon_sym_DOLLAR,
    STATE(18), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [848] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(106), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [920] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(110), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1100] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1208] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(126), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1244] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1280] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_end,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1410] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1468] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1526] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(51), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1620] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1678] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1736] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1794] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1852] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [1910] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1946] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [1982] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2018] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(161), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(163), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2090] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2148] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2184] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_end,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2278] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2336] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2394] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2452] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2510] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2568] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2604] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2662] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(188), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2698] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2756] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2792] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2850] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2886] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [2944] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [2980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3052] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3110] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3146] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3204] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3240] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3298] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(218), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3392] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3450] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3508] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3566] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_end,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3624] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [3718] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_endfor,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3776] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3834] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3892] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_end,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [3950] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_endwhile,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [4008] = 19,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_endif,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [4066] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_text_token1,
    ACTIONS(73), 1,
      sym_dollar,
    ACTIONS(244), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [4102] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_text_token1,
    ACTIONS(249), 1,
      sym_dollar,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_source_repeat1,
    STATE(120), 1,
      aux_sym_text_repeat1,
    STATE(171), 3,
      sym__content,
      sym_text,
      sym_px,
    STATE(172), 10,
      sym__px_cmd,
      sym__custom_cmd,
      sym_py_cmd,
      sym_begin_cmd,
      sym_extend_cmd,
      sym_include_cmd,
      sym_default_cmd,
      sym_for_cmd,
      sym_while_cmd,
      sym_if_cmd,
  [4138] = 18,
    ACTIONS(15), 1,
      anon_sym_safemode,
    ACTIONS(17), 1,
      anon_sym___file__,
    ACTIONS(19), 1,
      anon_sym_py,
    ACTIONS(21), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      anon_sym_extend,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_include_begin,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_for,
    ACTIONS(35), 1,
      anon_sym_for_begin,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_while_begin,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(51), 1,
      sym_comment,
    STATE(176), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [4193] = 18,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_safemode,
    ACTIONS(257), 1,
      anon_sym___file__,
    ACTIONS(259), 1,
      anon_sym_py,
    ACTIONS(261), 1,
      anon_sym_begin,
    ACTIONS(263), 1,
      anon_sym_extend,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_include,
    ACTIONS(269), 1,
      anon_sym_include_begin,
    ACTIONS(271), 1,
      anon_sym_default,
    ACTIONS(273), 1,
      anon_sym_for,
    ACTIONS(275), 1,
      anon_sym_for_begin,
    ACTIONS(277), 1,
      anon_sym_while,
    ACTIONS(279), 1,
      anon_sym_while_begin,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(283), 1,
      sym_ident,
    STATE(128), 1,
      sym_code,
    STATE(129), 1,
      sym__code_content,
  [4248] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    STATE(100), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    STATE(222), 1,
      aux_sym_default_code_repeat2,
  [4273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__code_content,
    STATE(143), 1,
      sym_code,
    ACTIONS(295), 3,
      aux_sym_text_token1,
      sym_dollar,
      anon_sym_DOLLAR,
  [4294] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    STATE(250), 1,
      aux_sym_default_code_repeat2,
  [4319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    STATE(246), 1,
      aux_sym_default_code_repeat2,
  [4344] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    STATE(249), 1,
      aux_sym_default_code_repeat2,
  [4369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym__code_content,
    STATE(184), 1,
      sym_code,
    ACTIONS(295), 3,
      aux_sym_text_token1,
      sym_dollar,
      anon_sym_DOLLAR,
  [4387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    STATE(100), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4407] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      aux_sym_default_code_token1,
    STATE(100), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      aux_sym_default_code_token1,
    STATE(99), 1,
      aux_sym_default_code_repeat1,
    STATE(151), 1,
      sym__code_content_2,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4523] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_text_repeat1,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(341), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(350), 1,
      aux_sym_for_code_token1,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4595] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 1,
      aux_sym_text_token1,
    ACTIONS(366), 1,
      sym_dollar,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      aux_sym_text_repeat1,
  [4690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4728] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4747] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      aux_sym_for_code_token1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_for_code_repeat1,
    STATE(243), 1,
      sym__code_content_2,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(381), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym_text_token1,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(341), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(385), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(389), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(393), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(397), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(401), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(405), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(409), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(413), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(417), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(421), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(425), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4924] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_extend_cmd_repeat1,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      anon_sym_in,
  [4938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(434), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(438), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(442), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(446), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(450), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [4998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(454), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(458), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(462), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(466), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(470), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(474), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(478), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(482), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(486), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(490), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(494), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(498), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(502), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_default_code_token1,
  [5164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(508), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(512), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(516), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(520), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(524), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(528), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(532), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(536), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(540), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(542), 1,
      aux_sym_text_token1,
    ACTIONS(545), 1,
      sym_dollar,
    STATE(161), 1,
      aux_sym_text_repeat1,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(550), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(554), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(558), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(562), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(566), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_default_code_token1,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_default_code_token1,
  [5368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_text_token1,
    ACTIONS(409), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_for_code_token1,
  [5388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_text_token1,
    ACTIONS(385), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym_text_token1,
    ACTIONS(393), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_text_token1,
    ACTIONS(401), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      aux_sym_text_token1,
    ACTIONS(405), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5432] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(13), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [5445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      aux_sym_text_token1,
    ACTIONS(413), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_text_token1,
    ACTIONS(417), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5467] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_elif,
    ACTIONS(574), 1,
      anon_sym_else,
    ACTIONS(576), 1,
      anon_sym_endif,
  [5480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_text_token1,
    ACTIONS(421), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_text_token1,
    ACTIONS(425), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_text_token1,
    ACTIONS(434), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_text_token1,
    ACTIONS(438), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_text_token1,
    ACTIONS(470), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_text_token1,
    ACTIONS(474), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      aux_sym_text_token1,
    ACTIONS(478), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_text_token1,
    ACTIONS(486), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_text_token1,
    ACTIONS(494), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_text_token1,
    ACTIONS(381), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_text_token1,
    ACTIONS(498), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_text_token1,
    ACTIONS(502), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_text_token1,
    ACTIONS(520), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym_text_token1,
    ACTIONS(524), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym_text_token1,
    ACTIONS(532), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      aux_sym_text_token1,
    ACTIONS(558), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym_text_token1,
    ACTIONS(516), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_text_token1,
    ACTIONS(462), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym_text_token1,
    ACTIONS(458), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_text_token1,
    ACTIONS(454), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_text_token1,
    ACTIONS(450), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_text_token1,
    ACTIONS(442), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_text_token1,
    ACTIONS(536), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      aux_sym_text_token1,
    ACTIONS(389), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_text_token1,
    ACTIONS(397), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5755] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(26), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_text_token1,
    ACTIONS(446), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_text_token1,
    ACTIONS(466), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_text_token1,
    ACTIONS(482), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_text_token1,
    ACTIONS(490), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_text_token1,
    ACTIONS(508), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_text_token1,
    ACTIONS(512), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_text_token1,
    ACTIONS(528), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_text_token1,
    ACTIONS(540), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      aux_sym_text_token1,
    ACTIONS(550), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      aux_sym_text_token1,
    ACTIONS(554), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      aux_sym_text_token1,
    ACTIONS(562), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      aux_sym_text_token1,
    ACTIONS(566), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [5900] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(27), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [5913] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(177), 1,
      sym__code_content,
    STATE(179), 1,
      sym_code,
  [5926] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
  [5935] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(177), 1,
      sym__code_content,
    STATE(181), 1,
      sym_code,
  [5948] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(177), 1,
      sym__code_content,
    STATE(182), 1,
      sym_code,
  [5961] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_default_code_repeat2,
  [5974] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(39), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [5987] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__code_content,
    STATE(130), 1,
      sym_code,
  [6000] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__code_content,
    STATE(133), 1,
      sym_code,
  [6013] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__code_content,
    STATE(134), 1,
      sym_code,
  [6026] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_extend_cmd_repeat1,
  [6039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_text_token1,
    ACTIONS(588), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6050] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_in,
    STATE(132), 1,
      aux_sym_extend_cmd_repeat1,
  [6063] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(47), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [6076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_text_token1,
    ACTIONS(596), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6087] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_extend_cmd_repeat1,
  [6100] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(48), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [6113] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_comment,
    STATE(11), 1,
      sym_code,
    STATE(177), 1,
      sym__code_content,
  [6126] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_extend_cmd_repeat1,
  [6139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      aux_sym_text_token1,
    ACTIONS(608), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6150] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_default_code_repeat2,
  [6163] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_in,
    STATE(229), 1,
      aux_sym_extend_cmd_repeat1,
  [6176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      aux_sym_text_token1,
    ACTIONS(621), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_text_token1,
    ACTIONS(625), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_for_code_token1,
  [6207] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_elif,
    ACTIONS(627), 1,
      anon_sym_else,
    ACTIONS(629), 1,
      anon_sym_endif,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_for_code_token1,
  [6229] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_elif,
    ACTIONS(633), 1,
      anon_sym_else,
    ACTIONS(635), 1,
      anon_sym_endif,
  [6242] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_extend_cmd_repeat1,
  [6255] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_default_code_repeat2,
  [6268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      aux_sym_text_token1,
    ACTIONS(647), 2,
      sym_dollar,
      anon_sym_DOLLAR,
  [6279] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_elif,
    ACTIONS(649), 1,
      anon_sym_else,
    ACTIONS(651), 1,
      anon_sym_endif,
  [6292] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_default_code_repeat2,
  [6305] = 4,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_default_code_repeat2,
  [6318] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      sym_ident,
  [6328] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_default_code,
  [6338] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym_if_cmd_repeat1,
  [6348] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_ident,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [6358] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_ident,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [6368] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym_if_cmd_repeat1,
  [6378] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_in,
    ACTIONS(676), 1,
      sym_ident,
  [6388] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      sym_ident,
  [6398] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      sym_ident,
  [6408] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_for_code,
  [6418] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_ident,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
  [6428] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_for_code,
  [6438] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      sym_ident,
  [6448] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_ident,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
  [6458] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_ident,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [6468] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      sym_ident,
  [6478] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      sym_ident,
  [6488] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_default_code,
  [6498] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_ident,
    ACTIONS(692), 1,
      anon_sym_in,
  [6508] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_for_code,
  [6518] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_for_code,
  [6528] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym_if_cmd_repeat1,
  [6538] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      sym_ident,
  [6548] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym_if_cmd_repeat1,
  [6558] = 3,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      aux_sym_if_cmd_repeat1,
  [6568] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_ident,
  [6575] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_shabang_pyexpander,
  [6589] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_ident,
  [6596] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_EQ,
  [6603] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_EQ,
  [6610] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_ident,
  [6617] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
  [6624] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [6631] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_EQ,
  [6638] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_ident,
  [6645] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_ident,
  [6652] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_elif,
  [6659] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_ident,
  [6666] = 2,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 412,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 568,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 646,
  [SMALL_STATE(17)] = 704,
  [SMALL_STATE(18)] = 740,
  [SMALL_STATE(19)] = 776,
  [SMALL_STATE(20)] = 812,
  [SMALL_STATE(21)] = 848,
  [SMALL_STATE(22)] = 884,
  [SMALL_STATE(23)] = 920,
  [SMALL_STATE(24)] = 956,
  [SMALL_STATE(25)] = 992,
  [SMALL_STATE(26)] = 1028,
  [SMALL_STATE(27)] = 1064,
  [SMALL_STATE(28)] = 1100,
  [SMALL_STATE(29)] = 1136,
  [SMALL_STATE(30)] = 1172,
  [SMALL_STATE(31)] = 1208,
  [SMALL_STATE(32)] = 1244,
  [SMALL_STATE(33)] = 1280,
  [SMALL_STATE(34)] = 1338,
  [SMALL_STATE(35)] = 1374,
  [SMALL_STATE(36)] = 1410,
  [SMALL_STATE(37)] = 1468,
  [SMALL_STATE(38)] = 1526,
  [SMALL_STATE(39)] = 1584,
  [SMALL_STATE(40)] = 1620,
  [SMALL_STATE(41)] = 1678,
  [SMALL_STATE(42)] = 1736,
  [SMALL_STATE(43)] = 1794,
  [SMALL_STATE(44)] = 1852,
  [SMALL_STATE(45)] = 1910,
  [SMALL_STATE(46)] = 1946,
  [SMALL_STATE(47)] = 1982,
  [SMALL_STATE(48)] = 2018,
  [SMALL_STATE(49)] = 2054,
  [SMALL_STATE(50)] = 2090,
  [SMALL_STATE(51)] = 2148,
  [SMALL_STATE(52)] = 2184,
  [SMALL_STATE(53)] = 2242,
  [SMALL_STATE(54)] = 2278,
  [SMALL_STATE(55)] = 2336,
  [SMALL_STATE(56)] = 2394,
  [SMALL_STATE(57)] = 2452,
  [SMALL_STATE(58)] = 2510,
  [SMALL_STATE(59)] = 2568,
  [SMALL_STATE(60)] = 2604,
  [SMALL_STATE(61)] = 2662,
  [SMALL_STATE(62)] = 2698,
  [SMALL_STATE(63)] = 2756,
  [SMALL_STATE(64)] = 2792,
  [SMALL_STATE(65)] = 2850,
  [SMALL_STATE(66)] = 2886,
  [SMALL_STATE(67)] = 2944,
  [SMALL_STATE(68)] = 2980,
  [SMALL_STATE(69)] = 3016,
  [SMALL_STATE(70)] = 3052,
  [SMALL_STATE(71)] = 3110,
  [SMALL_STATE(72)] = 3146,
  [SMALL_STATE(73)] = 3204,
  [SMALL_STATE(74)] = 3240,
  [SMALL_STATE(75)] = 3298,
  [SMALL_STATE(76)] = 3356,
  [SMALL_STATE(77)] = 3392,
  [SMALL_STATE(78)] = 3450,
  [SMALL_STATE(79)] = 3508,
  [SMALL_STATE(80)] = 3566,
  [SMALL_STATE(81)] = 3624,
  [SMALL_STATE(82)] = 3682,
  [SMALL_STATE(83)] = 3718,
  [SMALL_STATE(84)] = 3776,
  [SMALL_STATE(85)] = 3834,
  [SMALL_STATE(86)] = 3892,
  [SMALL_STATE(87)] = 3950,
  [SMALL_STATE(88)] = 4008,
  [SMALL_STATE(89)] = 4066,
  [SMALL_STATE(90)] = 4102,
  [SMALL_STATE(91)] = 4138,
  [SMALL_STATE(92)] = 4193,
  [SMALL_STATE(93)] = 4248,
  [SMALL_STATE(94)] = 4273,
  [SMALL_STATE(95)] = 4294,
  [SMALL_STATE(96)] = 4319,
  [SMALL_STATE(97)] = 4344,
  [SMALL_STATE(98)] = 4369,
  [SMALL_STATE(99)] = 4387,
  [SMALL_STATE(100)] = 4407,
  [SMALL_STATE(101)] = 4427,
  [SMALL_STATE(102)] = 4447,
  [SMALL_STATE(103)] = 4466,
  [SMALL_STATE(104)] = 4485,
  [SMALL_STATE(105)] = 4504,
  [SMALL_STATE(106)] = 4523,
  [SMALL_STATE(107)] = 4542,
  [SMALL_STATE(108)] = 4557,
  [SMALL_STATE(109)] = 4576,
  [SMALL_STATE(110)] = 4595,
  [SMALL_STATE(111)] = 4614,
  [SMALL_STATE(112)] = 4633,
  [SMALL_STATE(113)] = 4652,
  [SMALL_STATE(114)] = 4671,
  [SMALL_STATE(115)] = 4690,
  [SMALL_STATE(116)] = 4709,
  [SMALL_STATE(117)] = 4728,
  [SMALL_STATE(118)] = 4747,
  [SMALL_STATE(119)] = 4766,
  [SMALL_STATE(120)] = 4778,
  [SMALL_STATE(121)] = 4792,
  [SMALL_STATE(122)] = 4804,
  [SMALL_STATE(123)] = 4816,
  [SMALL_STATE(124)] = 4828,
  [SMALL_STATE(125)] = 4840,
  [SMALL_STATE(126)] = 4852,
  [SMALL_STATE(127)] = 4864,
  [SMALL_STATE(128)] = 4876,
  [SMALL_STATE(129)] = 4888,
  [SMALL_STATE(130)] = 4900,
  [SMALL_STATE(131)] = 4912,
  [SMALL_STATE(132)] = 4924,
  [SMALL_STATE(133)] = 4938,
  [SMALL_STATE(134)] = 4950,
  [SMALL_STATE(135)] = 4962,
  [SMALL_STATE(136)] = 4974,
  [SMALL_STATE(137)] = 4986,
  [SMALL_STATE(138)] = 4998,
  [SMALL_STATE(139)] = 5010,
  [SMALL_STATE(140)] = 5022,
  [SMALL_STATE(141)] = 5034,
  [SMALL_STATE(142)] = 5046,
  [SMALL_STATE(143)] = 5058,
  [SMALL_STATE(144)] = 5070,
  [SMALL_STATE(145)] = 5082,
  [SMALL_STATE(146)] = 5094,
  [SMALL_STATE(147)] = 5106,
  [SMALL_STATE(148)] = 5118,
  [SMALL_STATE(149)] = 5130,
  [SMALL_STATE(150)] = 5142,
  [SMALL_STATE(151)] = 5154,
  [SMALL_STATE(152)] = 5164,
  [SMALL_STATE(153)] = 5176,
  [SMALL_STATE(154)] = 5188,
  [SMALL_STATE(155)] = 5200,
  [SMALL_STATE(156)] = 5212,
  [SMALL_STATE(157)] = 5224,
  [SMALL_STATE(158)] = 5236,
  [SMALL_STATE(159)] = 5248,
  [SMALL_STATE(160)] = 5260,
  [SMALL_STATE(161)] = 5272,
  [SMALL_STATE(162)] = 5288,
  [SMALL_STATE(163)] = 5300,
  [SMALL_STATE(164)] = 5312,
  [SMALL_STATE(165)] = 5324,
  [SMALL_STATE(166)] = 5336,
  [SMALL_STATE(167)] = 5348,
  [SMALL_STATE(168)] = 5358,
  [SMALL_STATE(169)] = 5368,
  [SMALL_STATE(170)] = 5379,
  [SMALL_STATE(171)] = 5388,
  [SMALL_STATE(172)] = 5399,
  [SMALL_STATE(173)] = 5410,
  [SMALL_STATE(174)] = 5421,
  [SMALL_STATE(175)] = 5432,
  [SMALL_STATE(176)] = 5445,
  [SMALL_STATE(177)] = 5456,
  [SMALL_STATE(178)] = 5467,
  [SMALL_STATE(179)] = 5480,
  [SMALL_STATE(180)] = 5491,
  [SMALL_STATE(181)] = 5502,
  [SMALL_STATE(182)] = 5513,
  [SMALL_STATE(183)] = 5524,
  [SMALL_STATE(184)] = 5535,
  [SMALL_STATE(185)] = 5546,
  [SMALL_STATE(186)] = 5557,
  [SMALL_STATE(187)] = 5568,
  [SMALL_STATE(188)] = 5579,
  [SMALL_STATE(189)] = 5590,
  [SMALL_STATE(190)] = 5601,
  [SMALL_STATE(191)] = 5612,
  [SMALL_STATE(192)] = 5623,
  [SMALL_STATE(193)] = 5634,
  [SMALL_STATE(194)] = 5645,
  [SMALL_STATE(195)] = 5656,
  [SMALL_STATE(196)] = 5667,
  [SMALL_STATE(197)] = 5678,
  [SMALL_STATE(198)] = 5689,
  [SMALL_STATE(199)] = 5700,
  [SMALL_STATE(200)] = 5711,
  [SMALL_STATE(201)] = 5722,
  [SMALL_STATE(202)] = 5733,
  [SMALL_STATE(203)] = 5744,
  [SMALL_STATE(204)] = 5755,
  [SMALL_STATE(205)] = 5768,
  [SMALL_STATE(206)] = 5779,
  [SMALL_STATE(207)] = 5790,
  [SMALL_STATE(208)] = 5801,
  [SMALL_STATE(209)] = 5812,
  [SMALL_STATE(210)] = 5823,
  [SMALL_STATE(211)] = 5834,
  [SMALL_STATE(212)] = 5845,
  [SMALL_STATE(213)] = 5856,
  [SMALL_STATE(214)] = 5867,
  [SMALL_STATE(215)] = 5878,
  [SMALL_STATE(216)] = 5889,
  [SMALL_STATE(217)] = 5900,
  [SMALL_STATE(218)] = 5913,
  [SMALL_STATE(219)] = 5926,
  [SMALL_STATE(220)] = 5935,
  [SMALL_STATE(221)] = 5948,
  [SMALL_STATE(222)] = 5961,
  [SMALL_STATE(223)] = 5974,
  [SMALL_STATE(224)] = 5987,
  [SMALL_STATE(225)] = 6000,
  [SMALL_STATE(226)] = 6013,
  [SMALL_STATE(227)] = 6026,
  [SMALL_STATE(228)] = 6039,
  [SMALL_STATE(229)] = 6050,
  [SMALL_STATE(230)] = 6063,
  [SMALL_STATE(231)] = 6076,
  [SMALL_STATE(232)] = 6087,
  [SMALL_STATE(233)] = 6100,
  [SMALL_STATE(234)] = 6113,
  [SMALL_STATE(235)] = 6126,
  [SMALL_STATE(236)] = 6139,
  [SMALL_STATE(237)] = 6150,
  [SMALL_STATE(238)] = 6163,
  [SMALL_STATE(239)] = 6176,
  [SMALL_STATE(240)] = 6187,
  [SMALL_STATE(241)] = 6198,
  [SMALL_STATE(242)] = 6207,
  [SMALL_STATE(243)] = 6220,
  [SMALL_STATE(244)] = 6229,
  [SMALL_STATE(245)] = 6242,
  [SMALL_STATE(246)] = 6255,
  [SMALL_STATE(247)] = 6268,
  [SMALL_STATE(248)] = 6279,
  [SMALL_STATE(249)] = 6292,
  [SMALL_STATE(250)] = 6305,
  [SMALL_STATE(251)] = 6318,
  [SMALL_STATE(252)] = 6328,
  [SMALL_STATE(253)] = 6338,
  [SMALL_STATE(254)] = 6348,
  [SMALL_STATE(255)] = 6358,
  [SMALL_STATE(256)] = 6368,
  [SMALL_STATE(257)] = 6378,
  [SMALL_STATE(258)] = 6388,
  [SMALL_STATE(259)] = 6398,
  [SMALL_STATE(260)] = 6408,
  [SMALL_STATE(261)] = 6418,
  [SMALL_STATE(262)] = 6428,
  [SMALL_STATE(263)] = 6438,
  [SMALL_STATE(264)] = 6448,
  [SMALL_STATE(265)] = 6458,
  [SMALL_STATE(266)] = 6468,
  [SMALL_STATE(267)] = 6478,
  [SMALL_STATE(268)] = 6488,
  [SMALL_STATE(269)] = 6498,
  [SMALL_STATE(270)] = 6508,
  [SMALL_STATE(271)] = 6518,
  [SMALL_STATE(272)] = 6528,
  [SMALL_STATE(273)] = 6538,
  [SMALL_STATE(274)] = 6548,
  [SMALL_STATE(275)] = 6558,
  [SMALL_STATE(276)] = 6568,
  [SMALL_STATE(277)] = 6575,
  [SMALL_STATE(278)] = 6582,
  [SMALL_STATE(279)] = 6589,
  [SMALL_STATE(280)] = 6596,
  [SMALL_STATE(281)] = 6603,
  [SMALL_STATE(282)] = 6610,
  [SMALL_STATE(283)] = 6617,
  [SMALL_STATE(284)] = 6624,
  [SMALL_STATE(285)] = 6631,
  [SMALL_STATE(286)] = 6638,
  [SMALL_STATE(287)] = 6645,
  [SMALL_STATE(288)] = 6652,
  [SMALL_STATE(289)] = 6659,
  [SMALL_STATE(290)] = 6666,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_cmd_repeat1, 3, 0, 22), SHIFT_REPEAT(91),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_cmd_repeat1, 4, 0, 26), SHIFT(91),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_cmd, 2, 0, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__custom_cmd, 2, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_code_repeat2, 4, 0, 25),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_code_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_code_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_default_code_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_code_repeat2, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_code_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_code_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_code_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_cmd, 5, 0, 11),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_cmd, 5, 0, 11),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_cmd, 7, 0, 11),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_cmd, 7, 0, 11),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_px, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_px, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 5, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 5, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__px_cmd, 2, 0, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__px_cmd, 2, 0, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__px_cmd, 2, 0, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__px_cmd, 2, 0, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 5, 0, 25),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 5, 0, 25),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_px, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_px, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_py_cmd, 3, 0, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_py_cmd, 3, 0, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_content, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_content, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extend_cmd_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extend_cmd_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_cmd, 3, 0, 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_cmd, 3, 0, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_cmd, 3, 0, 6),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_cmd, 3, 0, 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 6, 0, 23),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 6, 0, 23),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 7, 0, 27),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 7, 0, 27),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_cmd, 6, 0, 21),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_cmd, 6, 0, 21),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_cmd, 6, 0, 20),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_cmd, 6, 0, 20),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cmd, 6, 0, 19),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_cmd, 6, 0, 19),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cmd, 6, 0, 18),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_cmd, 6, 0, 18),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 7, 0, 28),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 7, 0, 28),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cmd, 3, 0, 7),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_cmd, 3, 0, 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__custom_cmd, 3, 0, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__custom_cmd, 3, 0, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_cmd, 4, 0, 8),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_cmd, 4, 0, 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 6, 0, 25),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 6, 0, 25),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code_content, 3, 0, 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_content, 3, 0, 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 6, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 6, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_cmd, 5, 0, 10),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_cmd, 5, 0, 10),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cmd, 5, 0, 12),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_cmd, 5, 0, 12),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cmd, 5, 0, 13),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_cmd, 5, 0, 13),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_default_code_repeat1, 1, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 8, 0, 30),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 8, 0, 30),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 8, 0, 31),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 8, 0, 31),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 4, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 4, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_cmd, 5, 0, 14),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_cmd, 5, 0, 14),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_cmd, 5, 0, 15),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_cmd, 5, 0, 15),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 8, 0, 32),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 8, 0, 32),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 5, 0, 16),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 5, 0, 16),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 6, 0, 24),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 6, 0, 24),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_code, 7, 0, 25),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_code, 7, 0, 25),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 9, 0, 34),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 9, 0, 34),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 9, 0, 35),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 9, 0, 35),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend_cmd, 6, 0, 11),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend_cmd, 6, 0, 11),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 9, 0, 36),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 9, 0, 36),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cmd, 10, 0, 37),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cmd, 10, 0, 37),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_content_2, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_content_2, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 6, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 6, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 7, 0, 33),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 7, 0, 33),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 6, 0, 29),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 6, 0, 29),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_code_repeat2, 2, 0, 0), SHIFT_REPEAT(287),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_default_code_repeat2, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 5, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 5, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 5, 0, 25),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 5, 0, 25),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_code_repeat1, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_code, 4, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_code, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_cmd_repeat1, 2, 0, 17), SHIFT_REPEAT(288),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [712] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pyexpander(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_kw_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
