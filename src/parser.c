#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOLLAR = 1,
  anon_sym_BSLASH_DOLLAR = 2,
  aux_sym_text_token1 = 3,
  anon_sym_py = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym__code_content_token1 = 7,
  sym_source = 8,
  sym_text = 9,
  sym__px_cmd = 10,
  sym__px_py_cmd = 11,
  sym__px_expr = 12,
  sym_code = 13,
  aux_sym__code_content = 14,
  aux_sym_source_repeat1 = 15,
  aux_sym_text_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_py] = "py",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__code_content_token1] = "_code_content_token1",
  [sym_source] = "source",
  [sym_text] = "text",
  [sym__px_cmd] = "_px_cmd",
  [sym__px_py_cmd] = "_px_py_cmd",
  [sym__px_expr] = "_px_expr",
  [sym_code] = "code",
  [aux_sym__code_content] = "_code_content",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_py] = anon_sym_py,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__code_content_token1] = aux_sym__code_content_token1,
  [sym_source] = sym_source,
  [sym_text] = sym_text,
  [sym__px_cmd] = sym__px_cmd,
  [sym__px_py_cmd] = sym__px_py_cmd,
  [sym__px_expr] = sym__px_expr,
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
  [anon_sym_DOLLAR] = {
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [sym__px_expr] = {
    .visible = false,
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
  [16] = 4,
  [17] = 3,
  [18] = 12,
  [19] = 19,
  [20] = 6,
  [21] = 19,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_py);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__code_content_token1);
      if (lookahead == '(') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(1),
    [anon_sym_py] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym_text] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(7), 2,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
    STATE(5), 2,
      sym_text,
      aux_sym_source_repeat1,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      aux_sym__code_content_token1,
    STATE(3), 1,
      aux_sym__code_content,
    ACTIONS(13), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [36] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      aux_sym__code_content_token1,
    STATE(3), 1,
      aux_sym__code_content,
    ACTIONS(23), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [54] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(34), 2,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
    STATE(5), 2,
      sym_text,
      aux_sym_source_repeat1,
  [72] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 5,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
      anon_sym_LPAREN,
      aux_sym__code_content_token1,
  [83] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(7), 1,
      aux_sym_text_repeat1,
    ACTIONS(45), 2,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [97] = 3,
    ACTIONS(48), 1,
      anon_sym_py,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    STATE(13), 3,
      sym__px_cmd,
      sym__px_py_cmd,
      sym__px_expr,
  [109] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_text_repeat1,
    ACTIONS(54), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [121] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      aux_sym__code_content_token1,
    STATE(4), 1,
      aux_sym__code_content,
    STATE(11), 1,
      sym_code,
  [134] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [143] = 4,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      aux_sym__code_content_token1,
    STATE(17), 1,
      aux_sym__code_content,
  [156] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [165] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 3,
      anon_sym_DOLLAR,
      anon_sym_BSLASH_DOLLAR,
      aux_sym_text_token1,
  [174] = 4,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      aux_sym__code_content_token1,
    STATE(16), 1,
      aux_sym__code_content,
    STATE(23), 1,
      sym_code,
  [187] = 4,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      aux_sym__code_content_token1,
    STATE(17), 1,
      aux_sym__code_content,
  [200] = 4,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      aux_sym__code_content_token1,
    STATE(17), 1,
      aux_sym__code_content,
  [213] = 4,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      aux_sym__code_content_token1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym__code_content,
  [226] = 3,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      aux_sym__code_content_token1,
    STATE(12), 1,
      aux_sym__code_content,
  [236] = 1,
    ACTIONS(39), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__code_content_token1,
  [242] = 3,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      aux_sym__code_content_token1,
    STATE(18), 1,
      aux_sym__code_content,
  [252] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [256] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 226,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 252,
  [SMALL_STATE(23)] = 256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_content, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_content, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_content, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_content, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__px_py_cmd, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__px_py_cmd, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__px_expr, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__px_expr, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_content, 2), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pyexpander(void) {
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
