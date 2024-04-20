#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOLLAR_POUNDpyexpander = 1,
  anon_sym_BSLASH_DOLLAR = 2,
  aux_sym_text_token1 = 3,
  anon_sym_DOLLAR = 4,
  anon_sym_py = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym__code_content_token1 = 8,
  sym_comment = 9,
  sym_source = 10,
  sym_text = 11,
  sym_px = 12,
  sym__px_cmd = 13,
  sym__px_py_cmd = 14,
  sym_px_expr = 15,
  sym_code = 16,
  aux_sym__code_content = 17,
  aux_sym_source_repeat1 = 18,
  aux_sym_text_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR_POUNDpyexpander] = "$#pyexpander",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_py] = "py",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__code_content_token1] = "_code_content_token1",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_text] = "text",
  [sym_px] = "px",
  [sym__px_cmd] = "_px_cmd",
  [sym__px_py_cmd] = "_px_py_cmd",
  [sym_px_expr] = "px_expr",
  [sym_code] = "code",
  [aux_sym__code_content] = "_code_content",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR_POUNDpyexpander] = anon_sym_DOLLAR_POUNDpyexpander,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_py] = anon_sym_py,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__code_content_token1] = aux_sym__code_content_token1,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_text] = sym_text,
  [sym_px] = sym_px,
  [sym__px_cmd] = sym__px_cmd,
  [sym__px_py_cmd] = sym__px_py_cmd,
  [sym_px_expr] = sym_px_expr,
  [sym_code] = sym_code,
  [aux_sym__code_content] = aux_sym__code_content,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_POUNDpyexpander] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_py] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__code_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
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
  [sym__px_py_cmd] = {
    .visible = false,
    .named = true,
  },
  [sym_px_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__code_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 7,
  [19] = 6,
  [20] = 15,
  [21] = 21,
  [22] = 8,
  [23] = 21,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(1);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR_POUNDpyexpander);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(38);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_py);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(38);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'y') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_POUNDpyexpander] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(25),
    [sym_text] = STATE(4),
    [sym_px] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOLLAR_POUNDpyexpander] = ACTIONS(7),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(9),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(20), 1,
      aux_sym_text_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(26), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(2), 3,
      sym_text,
      sym_px,
      aux_sym_source_repeat1,
  [24] = 7,
    ACTIONS(9), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(5), 3,
      sym_text,
      sym_px,
      aux_sym_source_repeat1,
  [48] = 7,
    ACTIONS(9), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(2), 3,
      sym_text,
      sym_px,
      aux_sym_source_repeat1,
  [72] = 7,
    ACTIONS(9), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(2), 3,
      sym_text,
      sym_px,
      aux_sym_source_repeat1,
  [96] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym__code_content_token1,
    STATE(6), 1,
      aux_sym__code_content,
    ACTIONS(34), 3,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      aux_sym__code_content_token1,
    STATE(6), 1,
      aux_sym__code_content,
    ACTIONS(44), 3,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 5,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      aux_sym__code_content_token1,
  [152] = 4,
    ACTIONS(26), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_text_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(56), 2,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [167] = 6,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(63), 1,
      aux_sym_text_token1,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    STATE(10), 1,
      aux_sym_text_repeat1,
  [186] = 4,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_py,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(13), 3,
      sym__px_cmd,
      sym__px_py_cmd,
      sym_px_expr,
  [201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      aux_sym__code_content_token1,
    STATE(18), 1,
      aux_sym__code_content,
    STATE(24), 1,
      sym_code,
  [217] = 3,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(78), 2,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [229] = 3,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(82), 2,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      aux_sym__code_content_token1,
    STATE(19), 1,
      aux_sym__code_content,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      aux_sym__code_content_token1,
    STATE(7), 1,
      aux_sym__code_content,
    STATE(14), 1,
      sym_code,
  [273] = 3,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_BSLASH_DOLLAR,
    ACTIONS(94), 2,
      aux_sym_text_token1,
      anon_sym_DOLLAR,
  [285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym__code_content_token1,
    STATE(19), 1,
      aux_sym__code_content,
  [301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      aux_sym__code_content_token1,
    STATE(19), 1,
      aux_sym__code_content,
  [317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym__code_content_token1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym__code_content,
  [333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      aux_sym__code_content_token1,
    STATE(15), 1,
      aux_sym__code_content,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      aux_sym__code_content_token1,
    ACTIONS(50), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      aux_sym__code_content_token1,
    STATE(20), 1,
      aux_sym__code_content,
  [370] = 2,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
  [377] = 2,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 229,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_content, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_content, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2, 0, 0), SHIFT_REPEAT(21),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2, 0, 0), SHIFT_REPEAT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_content, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_content, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_px, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_px, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__px_py_cmd, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__px_py_cmd, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_px_expr, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_px_expr, 3, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code_content, 2, 0, 0), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2, 0, 0), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
