#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT_BANG = 1,
  anon_sym_DOCTYPE = 2,
  anon_sym_html = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_LT_SLASH = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  aux_sym__expression_value_token1 = 10,
  anon_sym_EQ = 11,
  sym_attribute_value = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_quoted_attribute_value_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_quoted_attribute_value_token2 = 16,
  anon_sym_LT_PERCENT = 17,
  anon_sym_LT_PERCENT_EQ = 18,
  anon_sym_LT_PERCENT_PERCENT = 19,
  anon_sym_LT_PERCENT_PERCENT_EQ = 20,
  anon_sym_PERCENT_GT = 21,
  aux_sym_partial_expression_value_token1 = 22,
  anon_sym_do = 23,
  anon_sym_DASH_GT = 24,
  anon_sym_POUND = 25,
  anon_sym_LT_PERCENT_POUND = 26,
  anon_sym_DOT = 27,
  anon_sym_DOT2 = 28,
  aux_sym_module_token1 = 29,
  sym_function = 30,
  sym__code = 31,
  sym_tag_name = 32,
  sym_attribute_name = 33,
  sym_text = 34,
  sym_fragment = 35,
  sym__node = 36,
  sym_doctype = 37,
  sym_tag = 38,
  sym_component = 39,
  sym_start_tag = 40,
  sym_end_tag = 41,
  sym_self_closing_tag = 42,
  sym_start_component = 43,
  sym_end_component = 44,
  sym_self_closing_component = 45,
  sym_expression = 46,
  sym__expression_value = 47,
  sym_attribute = 48,
  sym_quoted_attribute_value = 49,
  sym_directive = 50,
  sym_expression_value = 51,
  sym_partial_expression_value = 52,
  sym_comment = 53,
  sym_component_name = 54,
  sym_module = 55,
  aux_sym_fragment_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_expression_repeat1 = 58,
  aux_sym_expression_value_repeat1 = 59,
  aux_sym_module_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_html] = "html",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [anon_sym_EQ] = "=",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [aux_sym_partial_expression_value_token1] = "partial_expression_value_token1",
  [anon_sym_do] = "do",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_POUND] = "#",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT2] = ".",
  [aux_sym_module_token1] = "module_token1",
  [sym_function] = "function",
  [sym__code] = "_code",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_doctype] = "doctype",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_directive] = "directive",
  [sym_expression_value] = "expression_value",
  [sym_partial_expression_value] = "partial_expression_value",
  [sym_comment] = "comment",
  [sym_component_name] = "component_name",
  [sym_module] = "module",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [aux_sym_partial_expression_value_token1] = aux_sym_partial_expression_value_token1,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [aux_sym_module_token1] = aux_sym_module_token1,
  [sym_function] = sym_function,
  [sym__code] = sym__code,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_doctype] = sym_doctype,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_directive] = sym_directive,
  [sym_expression_value] = sym_expression_value,
  [sym_partial_expression_value] = sym_partial_expression_value,
  [sym_comment] = sym_comment,
  [sym_component_name] = sym_component_name,
  [sym_module] = sym_module,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_partial_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_module_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_value] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    sym_expression_value,
  0,
};

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_module_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? (c >= '-' && c <= '/')
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= '\'')))
    : (c <= '-' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '-' || '/' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 28:
      if (!aux_sym_module_token1_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(94);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_module_token1);
      if (!aux_sym_module_token1_character_set_1(lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_function);
      if (!aux_sym_module_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(85);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(33);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(81);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(82);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(86);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(84);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(56);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(34);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(88);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(87);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(59);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(89);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 25},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [aux_sym_partial_expression_value_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(83),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(11),
    [sym_start_component] = STATE(4),
    [sym_self_closing_component] = STATE(8),
    [sym_directive] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(19), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [48] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(22), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [96] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(3), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [144] = 12,
    ACTIONS(27), 1,
      anon_sym_LT_BANG,
    ACTIONS(30), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(42), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(36), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [190] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(18), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [238] = 12,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [283] = 2,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [298] = 2,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [313] = 2,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [328] = 2,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [343] = 2,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [358] = 2,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [373] = 2,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [388] = 2,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [403] = 2,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [418] = 2,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [433] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [448] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [463] = 2,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [478] = 2,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [493] = 2,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [508] = 2,
    ACTIONS(111), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(109), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [522] = 2,
    ACTIONS(115), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(113), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [536] = 2,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(117), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [550] = 2,
    ACTIONS(123), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(121), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [564] = 5,
    ACTIONS(125), 1,
      anon_sym_GT,
    ACTIONS(127), 1,
      anon_sym_SLASH_GT,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    STATE(35), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [582] = 5,
    ACTIONS(133), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(137), 1,
      sym__code,
    STATE(41), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(135), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(76), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [600] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT2,
    ACTIONS(144), 1,
      sym_attribute_name,
    STATE(29), 1,
      aux_sym_module_repeat1,
    ACTIONS(139), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [616] = 3,
    STATE(33), 1,
      aux_sym_module_repeat1,
    ACTIONS(148), 2,
      anon_sym_DOT2,
      sym_attribute_name,
    ACTIONS(146), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [630] = 4,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_attribute_name,
    ACTIONS(150), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [646] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(158), 1,
      anon_sym_GT,
    ACTIONS(160), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [664] = 3,
    STATE(29), 1,
      aux_sym_module_repeat1,
    ACTIONS(164), 2,
      anon_sym_DOT2,
      sym_attribute_name,
    ACTIONS(162), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [678] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(168), 1,
      anon_sym_SLASH_GT,
    STATE(32), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [696] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(170), 1,
      anon_sym_GT,
    ACTIONS(172), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [714] = 4,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_DOT2,
    ACTIONS(180), 1,
      sym_attribute_name,
    ACTIONS(174), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [729] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      sym_attribute_value,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(49), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [746] = 2,
    ACTIONS(144), 2,
      anon_sym_DOT2,
      sym_attribute_name,
    ACTIONS(139), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [757] = 5,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      aux_sym__expression_value_token1,
    STATE(45), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [773] = 2,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(194), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [783] = 4,
    ACTIONS(198), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(202), 1,
      sym__code,
    STATE(43), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(200), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [797] = 5,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      aux_sym__expression_value_token1,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [813] = 3,
    ACTIONS(214), 1,
      sym__code,
    STATE(43), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(212), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [825] = 5,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      aux_sym_module_token1,
    ACTIONS(221), 1,
      sym_tag_name,
    STATE(34), 1,
      sym_component_name,
    STATE(36), 1,
      sym_module,
  [841] = 5,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      aux_sym__expression_value_token1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [857] = 1,
    ACTIONS(225), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [864] = 1,
    ACTIONS(227), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [871] = 1,
    ACTIONS(229), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [878] = 1,
    ACTIONS(231), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [885] = 1,
    ACTIONS(233), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [892] = 1,
    ACTIONS(235), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [899] = 4,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      aux_sym_module_token1,
    STATE(36), 1,
      sym_module,
    STATE(79), 1,
      sym_component_name,
  [912] = 4,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      aux_sym__expression_value_token1,
    STATE(88), 1,
      sym__expression_value,
  [925] = 4,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      aux_sym__expression_value_token1,
    STATE(74), 1,
      sym__expression_value,
  [938] = 1,
    ACTIONS(247), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [945] = 3,
    ACTIONS(249), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(251), 1,
      sym__code,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [955] = 2,
    ACTIONS(255), 1,
      aux_sym__expression_value_token1,
    ACTIONS(253), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [963] = 3,
    ACTIONS(212), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(257), 1,
      sym__code,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [973] = 3,
    ACTIONS(260), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(262), 1,
      sym__code,
    STATE(63), 1,
      aux_sym_expression_value_repeat1,
  [983] = 3,
    ACTIONS(251), 1,
      sym__code,
    ACTIONS(260), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [993] = 2,
    ACTIONS(266), 1,
      aux_sym__expression_value_token1,
    ACTIONS(264), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1001] = 3,
    ACTIONS(251), 1,
      sym__code,
    ACTIONS(268), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [1011] = 3,
    ACTIONS(251), 1,
      sym__code,
    ACTIONS(270), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [1021] = 3,
    ACTIONS(270), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(272), 1,
      sym__code,
    STATE(62), 1,
      aux_sym_expression_value_repeat1,
  [1031] = 3,
    ACTIONS(274), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(276), 1,
      sym__code,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [1041] = 2,
    ACTIONS(280), 1,
      aux_sym__expression_value_token1,
    ACTIONS(278), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1049] = 2,
    ACTIONS(282), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(284), 1,
      anon_sym_POUND,
  [1056] = 2,
    ACTIONS(286), 1,
      sym__code,
    STATE(56), 1,
      aux_sym_expression_value_repeat1,
  [1063] = 2,
    ACTIONS(288), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(290), 1,
      anon_sym_POUND,
  [1070] = 2,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_quoted_attribute_value_token2,
  [1077] = 2,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      aux_sym_quoted_attribute_value_token1,
  [1084] = 1,
    ACTIONS(298), 1,
      aux_sym_module_token1,
  [1088] = 1,
    ACTIONS(300), 1,
      anon_sym_GT,
  [1092] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [1096] = 1,
    ACTIONS(304), 1,
      sym_function,
  [1100] = 1,
    ACTIONS(306), 1,
      anon_sym_PERCENT_GT,
  [1104] = 1,
    ACTIONS(308), 1,
      sym_tag_name,
  [1108] = 1,
    ACTIONS(310), 1,
      anon_sym_GT,
  [1112] = 1,
    ACTIONS(312), 1,
      anon_sym_GT,
  [1116] = 1,
    ACTIONS(314), 1,
      anon_sym_html,
  [1120] = 1,
    ACTIONS(316), 1,
      anon_sym_SQUOTE,
  [1124] = 1,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
  [1128] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [1132] = 1,
    ACTIONS(320), 1,
      sym_function,
  [1136] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [1140] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [1144] = 1,
    ACTIONS(322), 1,
      anon_sym_DOCTYPE,
  [1148] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 298,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 493,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 536,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 564,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 600,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 646,
  [SMALL_STATE(33)] = 664,
  [SMALL_STATE(34)] = 678,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 714,
  [SMALL_STATE(37)] = 729,
  [SMALL_STATE(38)] = 746,
  [SMALL_STATE(39)] = 757,
  [SMALL_STATE(40)] = 773,
  [SMALL_STATE(41)] = 783,
  [SMALL_STATE(42)] = 797,
  [SMALL_STATE(43)] = 813,
  [SMALL_STATE(44)] = 825,
  [SMALL_STATE(45)] = 841,
  [SMALL_STATE(46)] = 857,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 871,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 885,
  [SMALL_STATE(51)] = 892,
  [SMALL_STATE(52)] = 899,
  [SMALL_STATE(53)] = 912,
  [SMALL_STATE(54)] = 925,
  [SMALL_STATE(55)] = 938,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 955,
  [SMALL_STATE(58)] = 963,
  [SMALL_STATE(59)] = 973,
  [SMALL_STATE(60)] = 983,
  [SMALL_STATE(61)] = 993,
  [SMALL_STATE(62)] = 1001,
  [SMALL_STATE(63)] = 1011,
  [SMALL_STATE(64)] = 1021,
  [SMALL_STATE(65)] = 1031,
  [SMALL_STATE(66)] = 1041,
  [SMALL_STATE(67)] = 1049,
  [SMALL_STATE(68)] = 1056,
  [SMALL_STATE(69)] = 1063,
  [SMALL_STATE(70)] = 1070,
  [SMALL_STATE(71)] = 1077,
  [SMALL_STATE(72)] = 1084,
  [SMALL_STATE(73)] = 1088,
  [SMALL_STATE(74)] = 1092,
  [SMALL_STATE(75)] = 1096,
  [SMALL_STATE(76)] = 1100,
  [SMALL_STATE(77)] = 1104,
  [SMALL_STATE(78)] = 1108,
  [SMALL_STATE(79)] = 1112,
  [SMALL_STATE(80)] = 1116,
  [SMALL_STATE(81)] = 1120,
  [SMALL_STATE(82)] = 1124,
  [SMALL_STATE(83)] = 1128,
  [SMALL_STATE(84)] = 1132,
  [SMALL_STATE(85)] = 1136,
  [SMALL_STATE(86)] = 1140,
  [SMALL_STATE(87)] = 1144,
  [SMALL_STATE(88)] = 1148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(87),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(44),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(28),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(28),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(72),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(39),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(54),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(57),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(43),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(58),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_heex(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
