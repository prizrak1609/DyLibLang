#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 6
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  anon_sym_load = 1,
  anon_sym_as = 2,
  anon_sym_unload = 3,
  anon_sym_COLON = 4,
  anon_sym_EQ = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOT = 9,
  sym_number = 10,
  anon_sym_int = 11,
  anon_sym_void = 12,
  anon_sym_char = 13,
  anon_sym_float = 14,
  anon_sym_double = 15,
  anon_sym_short = 16,
  anon_sym_long = 17,
  anon_sym_unsigned = 18,
  anon_sym_signed = 19,
  anon_sym_bool = 20,
  anon_sym_size_t = 21,
  anon_sym_ptrdiff_t = 22,
  anon_sym_wchar_t = 23,
  anon_sym_int8_t = 24,
  anon_sym_int16_t = 25,
  anon_sym_int32_t = 26,
  anon_sym_int64_t = 27,
  anon_sym_uint8_t = 28,
  anon_sym_uint16_t = 29,
  anon_sym_uint32_t = 30,
  anon_sym_uint64_t = 31,
  anon_sym_std = 32,
  anon_sym_COLON_COLON = 33,
  sym_identifier = 34,
  sym_library_identifier = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym_statement = 38,
  sym_load_statement = 39,
  sym_unload_statement = 40,
  sym_variable_declaration = 41,
  sym_function_call = 42,
  sym_function_reference = 43,
  sym_cpp_type = 44,
  sym_function_type = 45,
  sym__alias_identifier = 46,
  sym__variable_identifier = 47,
  sym__function_identifier = 48,
  sym__symbol_identifier = 49,
  sym__cpp_type = 50,
  sym__argument_type = 51,
  sym__argument_declaration = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_function_call_repeat1 = 54,
  aux_sym_function_type_repeat1 = 55,
  alias_sym_alias_identifier = 56,
  alias_sym_argument_declaration = 57,
  alias_sym_argument_type = 58,
  alias_sym_function_identifier = 59,
  alias_sym_symbol_identifier = 60,
  alias_sym_variable_identifier = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_load] = "load",
  [anon_sym_as] = "as",
  [anon_sym_unload] = "unload",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [sym_number] = "number",
  [anon_sym_int] = "int",
  [anon_sym_void] = "void",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_short] = "short",
  [anon_sym_long] = "long",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_signed] = "signed",
  [anon_sym_bool] = "bool",
  [anon_sym_size_t] = "size_t",
  [anon_sym_ptrdiff_t] = "ptrdiff_t",
  [anon_sym_wchar_t] = "wchar_t",
  [anon_sym_int8_t] = "int8_t",
  [anon_sym_int16_t] = "int16_t",
  [anon_sym_int32_t] = "int32_t",
  [anon_sym_int64_t] = "int64_t",
  [anon_sym_uint8_t] = "uint8_t",
  [anon_sym_uint16_t] = "uint16_t",
  [anon_sym_uint32_t] = "uint32_t",
  [anon_sym_uint64_t] = "uint64_t",
  [anon_sym_std] = "std",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_library_identifier] = "library_identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_load_statement] = "load_statement",
  [sym_unload_statement] = "unload_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_call] = "function_call",
  [sym_function_reference] = "function_reference",
  [sym_cpp_type] = "cpp_type",
  [sym_function_type] = "function_type",
  [sym__alias_identifier] = "_alias_identifier",
  [sym__variable_identifier] = "_variable_identifier",
  [sym__function_identifier] = "_function_identifier",
  [sym__symbol_identifier] = "_symbol_identifier",
  [sym__cpp_type] = "_cpp_type",
  [sym__argument_type] = "_argument_type",
  [sym__argument_declaration] = "_argument_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
  [alias_sym_alias_identifier] = "alias_identifier",
  [alias_sym_argument_declaration] = "argument_declaration",
  [alias_sym_argument_type] = "argument_type",
  [alias_sym_function_identifier] = "function_identifier",
  [alias_sym_symbol_identifier] = "symbol_identifier",
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_unload] = anon_sym_unload,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_number] = sym_number,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_size_t] = anon_sym_size_t,
  [anon_sym_ptrdiff_t] = anon_sym_ptrdiff_t,
  [anon_sym_wchar_t] = anon_sym_wchar_t,
  [anon_sym_int8_t] = anon_sym_int8_t,
  [anon_sym_int16_t] = anon_sym_int16_t,
  [anon_sym_int32_t] = anon_sym_int32_t,
  [anon_sym_int64_t] = anon_sym_int64_t,
  [anon_sym_uint8_t] = anon_sym_uint8_t,
  [anon_sym_uint16_t] = anon_sym_uint16_t,
  [anon_sym_uint32_t] = anon_sym_uint32_t,
  [anon_sym_uint64_t] = anon_sym_uint64_t,
  [anon_sym_std] = anon_sym_std,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_library_identifier] = sym_library_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_load_statement] = sym_load_statement,
  [sym_unload_statement] = sym_unload_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_call] = sym_function_call,
  [sym_function_reference] = sym_function_reference,
  [sym_cpp_type] = sym_cpp_type,
  [sym_function_type] = sym_function_type,
  [sym__alias_identifier] = sym__alias_identifier,
  [sym__variable_identifier] = sym__variable_identifier,
  [sym__function_identifier] = sym__function_identifier,
  [sym__symbol_identifier] = sym__symbol_identifier,
  [sym__cpp_type] = sym__cpp_type,
  [sym__argument_type] = sym__argument_type,
  [sym__argument_declaration] = sym__argument_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
  [alias_sym_alias_identifier] = alias_sym_alias_identifier,
  [alias_sym_argument_declaration] = alias_sym_argument_declaration,
  [alias_sym_argument_type] = alias_sym_argument_type,
  [alias_sym_function_identifier] = alias_sym_function_identifier,
  [alias_sym_symbol_identifier] = alias_sym_symbol_identifier,
  [alias_sym_variable_identifier] = alias_sym_variable_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptrdiff_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wchar_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_library_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_load_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unload_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_cpp_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym__alias_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__function_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__cpp_type] = {
    .visible = false,
    .named = true,
  },
  [sym__argument_type] = {
    .visible = false,
    .named = true,
  },
  [sym__argument_declaration] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_declaration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_argument_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_symbol_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_argument = 2,
  field_function_name = 3,
  field_library = 4,
  field_name = 5,
  field_return_type = 6,
  field_symbol = 7,
  field_type = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_function_name] = "function_name",
  [field_library] = "library",
  [field_name] = "name",
  [field_return_type] = "return_type",
  [field_symbol] = "symbol",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 2},
  [8] = {.index = 4, .length = 2},
  [9] = {.index = 6, .length = 3},
  [10] = {.index = 9, .length = 1},
  [13] = {.index = 10, .length = 1},
  [14] = {.index = 11, .length = 3},
  [15] = {.index = 14, .length = 2},
  [16] = {.index = 16, .length = 2},
  [18] = {.index = 18, .length = 2},
  [19] = {.index = 20, .length = 1},
  [20] = {.index = 21, .length = 3},
  [21] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_library, 1},
  [1] =
    {field_function_name, 0},
  [2] =
    {field_alias, 3},
    {field_library, 1},
  [4] =
    {field_argument, 2},
    {field_function_name, 0},
  [6] =
    {field_name, 0},
    {field_type, 2},
    {field_value, 4},
  [9] =
    {field_return_type, 0},
  [10] =
    {field_argument, 1},
  [11] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_function_name, 0},
  [14] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [16] =
    {field_return_type, 0},
    {field_type, 2},
  [18] =
    {field_function_name, 0},
    {field_symbol, 2},
  [20] =
    {field_type, 1},
  [21] =
    {field_return_type, 0},
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [24] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_variable_identifier,
  },
  [2] = {
    [0] = alias_sym_function_identifier,
  },
  [5] = {
    [0] = alias_sym_argument_declaration,
  },
  [6] = {
    [0] = alias_sym_alias_identifier,
  },
  [11] = {
    [0] = alias_sym_argument_type,
  },
  [12] = {
    [0] = sym_cpp_type,
  },
  [17] = {
    [0] = alias_sym_symbol_identifier,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '(', 100,
        ')', 102,
        ',', 101,
        '.', 103,
        '/', 3,
        ':', 98,
        '=', 99,
        'a', 223,
        'b', 218,
        'c', 193,
        'd', 210,
        'f', 202,
        'i', 205,
        'l', 211,
        'p', 224,
        's', 194,
        'u', 199,
        'v', 212,
        'w', 176,
        '+', 89,
        '-', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ')', 102,
        '/', 3,
        ':', 14,
        'b', 66,
        'c', 45,
        'd', 60,
        'f', 54,
        'i', 56,
        'l', 63,
        'p', 72,
        's', 46,
        'u', 51,
        'v', 61,
        'w', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(244);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead == 'z') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 91:
      if (eof) ADVANCE(93);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_load);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_unload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(150);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == '6') ADVANCE(154);
      if (lookahead == '8') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(15);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ptrdiff_t);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ptrdiff_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_int8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_int16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_int32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_int64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_std);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_std);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(157);
      if (lookahead == '3') ADVANCE(153);
      if (lookahead == '6') ADVANCE(155);
      if (lookahead == '8') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == 'z') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(241);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_library_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 91},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 91},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 91},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_unload] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
    [anon_sym_ptrdiff_t] = ACTIONS(1),
    [anon_sym_wchar_t] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int32_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_uint8_t] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_uint32_t] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [anon_sym_std] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_statement] = STATE(5),
    [sym_load_statement] = STATE(17),
    [sym_unload_statement] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym__variable_identifier] = STATE(43),
    [sym__function_identifier] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_load] = ACTIONS(7),
    [anon_sym_unload] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_int,
    ACTIONS(19), 1,
      anon_sym_std,
    STATE(29), 1,
      sym__argument_type,
    STATE(27), 2,
      sym_cpp_type,
      sym_function_type,
    ACTIONS(17), 20,
      anon_sym_void,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_signed,
      anon_sym_bool,
      anon_sym_size_t,
      anon_sym_ptrdiff_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_int,
    ACTIONS(19), 1,
      anon_sym_std,
    STATE(41), 1,
      sym__argument_type,
    STATE(27), 2,
      sym_cpp_type,
      sym_function_type,
    ACTIONS(17), 20,
      anon_sym_void,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_signed,
      anon_sym_bool,
      anon_sym_size_t,
      anon_sym_ptrdiff_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
  [81] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_std,
    ACTIONS(21), 1,
      anon_sym_int,
    STATE(33), 2,
      sym_cpp_type,
      sym_function_type,
    ACTIONS(23), 20,
      anon_sym_void,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      anon_sym_short,
      anon_sym_long,
      anon_sym_unsigned,
      anon_sym_signed,
      anon_sym_bool,
      anon_sym_size_t,
      anon_sym_ptrdiff_t,
      anon_sym_wchar_t,
      anon_sym_int8_t,
      anon_sym_int16_t,
      anon_sym_int32_t,
      anon_sym_int64_t,
      anon_sym_uint8_t,
      anon_sym_uint16_t,
      anon_sym_uint32_t,
      anon_sym_uint64_t,
  [117] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_load,
    ACTIONS(9), 1,
      anon_sym_unload,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__variable_identifier,
    STATE(45), 1,
      sym__function_identifier,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 4,
      sym_load_statement,
      sym_unload_statement,
      sym_variable_declaration,
      sym_function_call,
  [149] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_load,
    ACTIONS(32), 1,
      anon_sym_unload,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(43), 1,
      sym__variable_identifier,
    STATE(45), 1,
      sym__function_identifier,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 4,
      sym_load_statement,
      sym_unload_statement,
      sym_variable_declaration,
      sym_function_call,
  [181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    ACTIONS(40), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_as,
    ACTIONS(46), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_number,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(34), 1,
      sym__function_identifier,
    STATE(16), 2,
      sym_function_call,
      sym_function_reference,
  [229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 3,
      anon_sym_load,
      anon_sym_unload,
      sym_identifier,
  [399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_function_call_repeat1,
  [412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_function_call_repeat1,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(30), 1,
      sym__argument_declaration,
  [449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_function_type_repeat1,
  [462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_function_call_repeat1,
  [475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_function_type_repeat1,
  [488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_function_type_repeat1,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_EQ,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_DOT,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(14), 1,
      sym__alias_identifier,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(24), 1,
      sym__symbol_identifier,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(20), 1,
      sym__cpp_type,
  [577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(36), 1,
      sym__argument_declaration,
  [595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
  [609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_library_identifier,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_library_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 197,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 229,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 275,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 333,
  [SMALL_STATE(20)] = 343,
  [SMALL_STATE(21)] = 353,
  [SMALL_STATE(22)] = 365,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 425,
  [SMALL_STATE(28)] = 436,
  [SMALL_STATE(29)] = 449,
  [SMALL_STATE(30)] = 462,
  [SMALL_STATE(31)] = 475,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 501,
  [SMALL_STATE(34)] = 511,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 529,
  [SMALL_STATE(37)] = 537,
  [SMALL_STATE(38)] = 547,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 567,
  [SMALL_STATE(41)] = 577,
  [SMALL_STATE(42)] = 585,
  [SMALL_STATE(43)] = 595,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 609,
  [SMALL_STATE(46)] = 616,
  [SMALL_STATE(47)] = 623,
  [SMALL_STATE(48)] = 630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 9),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_identifier, 1, 0, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 2, 0, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 2, 0, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 14),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 14),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, 0, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, 0, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 4, 0, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 4, 0, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cpp_type, 1, 0, 12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cpp_type, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unload_statement, 2, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unload_statement, 2, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 16),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_identifier, 1, 0, 17),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol_identifier, 1, 0, 17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_reference, 3, 0, 18),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_reference, 3, 0, 18),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 15), SHIFT_REPEAT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_type, 1, 0, 11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, 0, 21), SHIFT_REPEAT(3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, 0, 21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument_declaration, 1, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_identifier, 1, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2, 0, 19),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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

TS_PUBLIC const TSLanguage *tree_sitter_dyliblang(void) {
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
