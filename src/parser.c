#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_LBRACE = 4,
  sym_block_end = 5,
  anon_sym_LBRACK = 6,
  aux_sym_tag_token1 = 7,
  anon_sym_RBRACK = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  sym_name = 12,
  sym_arg = 13,
  anon_sym_BANG = 14,
  aux_sym_qubit_target_token1 = 15,
  anon_sym_rec_LBRACK_DASH = 16,
  anon_sym_sweep_LBRACK_DASH = 17,
  aux_sym_pauli_target_token1 = 18,
  sym_combiner_target = 19,
  sym_circuit = 20,
  sym__line = 21,
  sym_comment = 22,
  sym_instruction = 23,
  sym_block_start = 24,
  sym_tag = 25,
  sym_parens_arguments = 26,
  sym_targets = 27,
  sym__targ = 28,
  sym_qubit_target = 29,
  sym_measurement_record_target = 30,
  sym_sweep_bit_target = 31,
  sym_pauli_target = 32,
  aux_sym_circuit_repeat1 = 33,
  aux_sym_tag_repeat1 = 34,
  aux_sym_parens_arguments_repeat1 = 35,
  aux_sym_targets_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [sym_block_end] = "block_end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_tag_token1] = "tag_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_name] = "name",
  [sym_arg] = "arg",
  [anon_sym_BANG] = "!",
  [aux_sym_qubit_target_token1] = "qubit_target_token1",
  [anon_sym_rec_LBRACK_DASH] = "rec[-",
  [anon_sym_sweep_LBRACK_DASH] = "sweep[-",
  [aux_sym_pauli_target_token1] = "pauli_target_token1",
  [sym_combiner_target] = "combiner_target",
  [sym_circuit] = "circuit",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_block_start] = "block_start",
  [sym_tag] = "tag",
  [sym_parens_arguments] = "parens_arguments",
  [sym_targets] = "targets",
  [sym__targ] = "_targ",
  [sym_qubit_target] = "qubit_target",
  [sym_measurement_record_target] = "measurement_record_target",
  [sym_sweep_bit_target] = "sweep_bit_target",
  [sym_pauli_target] = "pauli_target",
  [aux_sym_circuit_repeat1] = "circuit_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_parens_arguments_repeat1] = "parens_arguments_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_block_end] = sym_block_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_name] = sym_name,
  [sym_arg] = sym_arg,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_qubit_target_token1] = aux_sym_qubit_target_token1,
  [anon_sym_rec_LBRACK_DASH] = anon_sym_rec_LBRACK_DASH,
  [anon_sym_sweep_LBRACK_DASH] = anon_sym_sweep_LBRACK_DASH,
  [aux_sym_pauli_target_token1] = aux_sym_pauli_target_token1,
  [sym_combiner_target] = sym_combiner_target,
  [sym_circuit] = sym_circuit,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_block_start] = sym_block_start,
  [sym_tag] = sym_tag,
  [sym_parens_arguments] = sym_parens_arguments,
  [sym_targets] = sym_targets,
  [sym__targ] = sym__targ,
  [sym_qubit_target] = sym_qubit_target,
  [sym_measurement_record_target] = sym_measurement_record_target,
  [sym_sweep_bit_target] = sym_sweep_bit_target,
  [sym_pauli_target] = sym_pauli_target,
  [aux_sym_circuit_repeat1] = aux_sym_circuit_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_parens_arguments_repeat1] = aux_sym_parens_arguments_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qubit_target_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rec_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sweep_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pauli_target_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_combiner_target] = {
    .visible = true,
    .named = true,
  },
  [sym_circuit] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_parens_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_targets] = {
    .visible = true,
    .named = true,
  },
  [sym__targ] = {
    .visible = false,
    .named = true,
  },
  [sym_qubit_target] = {
    .visible = true,
    .named = true,
  },
  [sym_measurement_record_target] = {
    .visible = true,
    .named = true,
  },
  [sym_sweep_bit_target] = {
    .visible = true,
    .named = true,
  },
  [sym_pauli_target] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_circuit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parens_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targets_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_parens_agruments = 2,
  field_tag = 3,
  field_targets = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parens_agruments] = "parens_agruments",
  [field_tag] = "tag",
  [field_targets] = "targets",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_tag, 1},
  [3] =
    {field_name, 0},
    {field_parens_agruments, 1},
  [5] =
    {field_name, 0},
    {field_targets, 1},
  [7] =
    {field_name, 0},
    {field_parens_agruments, 2},
    {field_tag, 1},
  [10] =
    {field_name, 0},
    {field_tag, 1},
    {field_targets, 2},
  [13] =
    {field_name, 0},
    {field_parens_agruments, 1},
    {field_targets, 2},
  [16] =
    {field_name, 0},
    {field_parens_agruments, 2},
    {field_tag, 1},
    {field_targets, 3},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '!', 34,
        '#', 19,
        '(', 28,
        ')', 30,
        '*', 39,
        ',', 29,
        '[', 24,
        ']', 27,
        '{', 22,
        '}', 23,
      );
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'W') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 18,
        '!', 34,
        '#', 19,
        '(', 28,
        '*', 39,
        '[', 24,
        'r', 8,
        's', 12,
        '{', 22,
      );
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 13:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_block_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_arg);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_arg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_qubit_target_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_rec_LBRACK_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_sweep_LBRACK_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_pauli_target_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_combiner_target);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_block_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_arg] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_qubit_target_token1] = ACTIONS(1),
    [aux_sym_pauli_target_token1] = ACTIONS(1),
    [sym_combiner_target] = ACTIONS(1),
  },
  [1] = {
    [sym_circuit] = STATE(38),
    [sym__line] = STATE(11),
    [sym_comment] = STATE(39),
    [sym_instruction] = STATE(22),
    [sym_block_start] = STATE(31),
    [aux_sym_circuit_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_block_end] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym_parens_arguments] = STATE(4),
    [sym_targets] = STATE(32),
    [sym__targ] = STATE(6),
    [sym_qubit_target] = STATE(6),
    [sym_measurement_record_target] = STATE(6),
    [sym_sweep_bit_target] = STATE(6),
    [sym_pauli_target] = STATE(6),
    [aux_sym_targets_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [aux_sym_qubit_target_token1] = ACTIONS(23),
    [anon_sym_rec_LBRACK_DASH] = ACTIONS(25),
    [anon_sym_sweep_LBRACK_DASH] = ACTIONS(27),
    [aux_sym_pauli_target_token1] = ACTIONS(29),
    [sym_combiner_target] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(25), 1,
      anon_sym_rec_LBRACK_DASH,
    ACTIONS(27), 1,
      anon_sym_sweep_LBRACK_DASH,
    ACTIONS(29), 1,
      aux_sym_pauli_target_token1,
    ACTIONS(31), 1,
      sym_combiner_target,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym_parens_arguments,
    STATE(25), 1,
      sym_targets,
    ACTIONS(35), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
    STATE(6), 6,
      sym__targ,
      sym_qubit_target,
      sym_measurement_record_target,
      sym_sweep_bit_target,
      sym_pauli_target,
      aux_sym_targets_repeat1,
  [43] = 10,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(25), 1,
      anon_sym_rec_LBRACK_DASH,
    ACTIONS(27), 1,
      anon_sym_sweep_LBRACK_DASH,
    ACTIONS(29), 1,
      aux_sym_pauli_target_token1,
    ACTIONS(31), 1,
      sym_combiner_target,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_targets,
    ACTIONS(39), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
    STATE(6), 6,
      sym__targ,
      sym_qubit_target,
      sym_measurement_record_target,
      sym_sweep_bit_target,
      sym_pauli_target,
      aux_sym_targets_repeat1,
  [80] = 10,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(25), 1,
      anon_sym_rec_LBRACK_DASH,
    ACTIONS(27), 1,
      anon_sym_sweep_LBRACK_DASH,
    ACTIONS(29), 1,
      aux_sym_pauli_target_token1,
    ACTIONS(31), 1,
      sym_combiner_target,
    ACTIONS(41), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_targets,
    ACTIONS(43), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
    STATE(6), 6,
      sym__targ,
      sym_qubit_target,
      sym_measurement_record_target,
      sym_sweep_bit_target,
      sym_pauli_target,
      aux_sym_targets_repeat1,
  [117] = 9,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(25), 1,
      anon_sym_rec_LBRACK_DASH,
    ACTIONS(27), 1,
      anon_sym_sweep_LBRACK_DASH,
    ACTIONS(29), 1,
      aux_sym_pauli_target_token1,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(49), 1,
      sym_combiner_target,
    ACTIONS(47), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
    STATE(7), 6,
      sym__targ,
      sym_qubit_target,
      sym_measurement_record_target,
      sym_sweep_bit_target,
      sym_pauli_target,
      aux_sym_targets_repeat1,
  [151] = 9,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(58), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(61), 1,
      anon_sym_rec_LBRACK_DASH,
    ACTIONS(64), 1,
      anon_sym_sweep_LBRACK_DASH,
    ACTIONS(67), 1,
      aux_sym_pauli_target_token1,
    ACTIONS(70), 1,
      sym_combiner_target,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
    STATE(7), 6,
      sym__targ,
      sym_qubit_target,
      sym_measurement_record_target,
      sym_sweep_bit_target,
      sym_pauli_target,
      aux_sym_targets_repeat1,
  [185] = 9,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_block_end,
    ACTIONS(84), 1,
      sym_name,
    STATE(22), 1,
      sym_instruction,
    STATE(31), 1,
      sym_block_start,
    STATE(39), 1,
      sym_comment,
    STATE(8), 2,
      sym__line,
      aux_sym_circuit_repeat1,
  [214] = 2,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 9,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [229] = 2,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 9,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [244] = 9,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_block_end,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_instruction,
    STATE(31), 1,
      sym_block_start,
    STATE(39), 1,
      sym_comment,
    STATE(8), 2,
      sym__line,
      aux_sym_circuit_repeat1,
  [273] = 2,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [287] = 2,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(105), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [301] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(109), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [315] = 2,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [329] = 2,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [343] = 2,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(121), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [357] = 2,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [371] = 2,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 8,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_BANG,
      aux_sym_qubit_target_token1,
      anon_sym_rec_LBRACK_DASH,
      anon_sym_sweep_LBRACK_DASH,
      aux_sym_pauli_target_token1,
      sym_combiner_target,
  [385] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(133), 3,
      anon_sym_POUND,
      sym_block_end,
      sym_name,
  [395] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(137), 3,
      anon_sym_POUND,
      sym_block_end,
      sym_name,
  [405] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_comment,
  [418] = 3,
    ACTIONS(143), 1,
      aux_sym_tag_token1,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_tag_repeat1,
  [428] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_parens_arguments_repeat1,
  [438] = 2,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
  [446] = 2,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
  [454] = 3,
    ACTIONS(159), 1,
      aux_sym_tag_token1,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_tag_repeat1,
  [464] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_parens_arguments_repeat1,
  [474] = 3,
    ACTIONS(165), 1,
      aux_sym_tag_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_tag_repeat1,
  [484] = 2,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
  [492] = 3,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_comment,
  [502] = 2,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 2,
      anon_sym_POUND,
      anon_sym_LBRACE,
  [510] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_parens_arguments_repeat1,
  [520] = 2,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      anon_sym_POUND,
  [527] = 2,
    ACTIONS(187), 1,
      aux_sym_qubit_target_token1,
    ACTIONS(189), 1,
      aux_sym_pauli_target_token1,
  [534] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [539] = 1,
    ACTIONS(191), 1,
      anon_sym_LF,
  [543] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [547] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [551] = 1,
    ACTIONS(195), 1,
      anon_sym_LF,
  [555] = 1,
    ACTIONS(197), 1,
      aux_sym_qubit_target_token1,
  [559] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
  [563] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
  [567] = 1,
    ACTIONS(203), 1,
      aux_sym_qubit_target_token1,
  [571] = 1,
    ACTIONS(205), 1,
      aux_sym_qubit_target_token1,
  [575] = 1,
    ACTIONS(207), 1,
      sym_arg,
  [579] = 1,
    ACTIONS(209), 1,
      aux_sym_comment_token1,
  [583] = 1,
    ACTIONS(211), 1,
      aux_sym_qubit_target_token1,
  [587] = 1,
    ACTIONS(213), 1,
      sym_arg,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 185,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 229,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 371,
  [SMALL_STATE(20)] = 385,
  [SMALL_STATE(21)] = 395,
  [SMALL_STATE(22)] = 405,
  [SMALL_STATE(23)] = 418,
  [SMALL_STATE(24)] = 428,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 474,
  [SMALL_STATE(30)] = 484,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 539,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 547,
  [SMALL_STATE(40)] = 551,
  [SMALL_STATE(41)] = 555,
  [SMALL_STATE(42)] = 559,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 567,
  [SMALL_STATE(45)] = 571,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 579,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_circuit, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_targets, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_circuit_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_circuit_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_circuit_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_circuit_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_circuit_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_circuit, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_target, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_target, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens_arguments, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens_arguments, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qubit_target, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qubit_target, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_target, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pauli_target, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parens_arguments, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parens_arguments, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pauli_target, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pauli_target, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_measurement_record_target, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_measurement_record_target, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sweep_bit_target, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sweep_bit_target, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 8),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 8),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 4),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parens_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parens_arguments_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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

TS_PUBLIC const TSLanguage *tree_sitter_stim(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
