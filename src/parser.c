#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  sym_module = 28,
  sym_function = 29,
  sym__code = 30,
  sym_tag_name = 31,
  sym_attribute_name = 32,
  sym_text = 33,
  sym_fragment = 34,
  sym__node = 35,
  sym_doctype = 36,
  sym_tag = 37,
  sym_component = 38,
  sym_start_tag = 39,
  sym_end_tag = 40,
  sym_self_closing_tag = 41,
  sym_start_component = 42,
  sym_end_component = 43,
  sym_self_closing_component = 44,
  sym_expression = 45,
  sym__expression_value = 46,
  sym_attribute = 47,
  sym_quoted_attribute_value = 48,
  sym_directive = 49,
  sym_expression_value = 50,
  sym_partial_expression_value = 51,
  sym_comment = 52,
  sym_component_name = 53,
  aux_sym_fragment_repeat1 = 54,
  aux_sym_start_tag_repeat1 = 55,
  aux_sym_expression_repeat1 = 56,
  aux_sym_expression_value_repeat1 = 57,
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
  [sym_module] = "module",
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
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
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
  [sym_module] = sym_module,
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
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
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
  [sym_module] = {
    .visible = true,
    .named = true,
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

static inline bool sym_module_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'Y') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(26);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(81);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(30);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(77);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(78);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(82);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(80);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(53);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(31);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(84);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(83);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(56);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(85);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
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
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(79),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(11),
    [sym_start_component] = STATE(4),
    [sym_self_closing_component] = STATE(12),
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
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
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
    STATE(9), 1,
      sym_end_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
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
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(21), 1,
      sym_end_component,
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
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
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
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(4), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(19), 1,
      sym_end_tag,
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
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
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
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [582] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(133), 1,
      anon_sym_GT,
    ACTIONS(135), 1,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [600] = 5,
    ACTIONS(137), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(141), 1,
      sym__code,
    STATE(38), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(139), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(69), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [618] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(143), 1,
      anon_sym_GT,
    ACTIONS(145), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [636] = 4,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym_attribute_name,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [652] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_SLASH_GT,
    STATE(30), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [670] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      sym_attribute_value,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(43), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [687] = 3,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      sym_attribute_name,
    ACTIONS(165), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [699] = 5,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      aux_sym__expression_value_token1,
    STATE(37), 1,
      aux_sym_expression_repeat1,
    STATE(54), 1,
      sym__expression_value,
  [715] = 2,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(177), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [725] = 5,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      aux_sym__expression_value_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_expression_repeat1,
    STATE(54), 1,
      sym__expression_value,
  [741] = 4,
    ACTIONS(183), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(187), 1,
      sym__code,
    STATE(40), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(185), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [755] = 5,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      aux_sym__expression_value_token1,
    STATE(39), 1,
      aux_sym_expression_repeat1,
    STATE(54), 1,
      sym__expression_value,
  [771] = 3,
    ACTIONS(199), 1,
      sym__code,
    STATE(40), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(197), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [783] = 4,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      aux_sym__expression_value_token1,
    STATE(83), 1,
      sym__expression_value,
  [796] = 1,
    ACTIONS(208), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [803] = 1,
    ACTIONS(210), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [810] = 1,
    ACTIONS(212), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [817] = 1,
    ACTIONS(214), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [824] = 1,
    ACTIONS(216), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [831] = 4,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym_module,
    ACTIONS(222), 1,
      sym_tag_name,
    STATE(32), 1,
      sym_component_name,
  [844] = 1,
    ACTIONS(224), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [851] = 4,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      aux_sym__expression_value_token1,
    STATE(70), 1,
      sym__expression_value,
  [864] = 1,
    ACTIONS(230), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [871] = 3,
    ACTIONS(232), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(234), 1,
      sym__code,
    STATE(62), 1,
      aux_sym_expression_value_repeat1,
  [881] = 3,
    ACTIONS(236), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(238), 1,
      sym__code,
    STATE(56), 1,
      aux_sym_expression_value_repeat1,
  [891] = 3,
    ACTIONS(197), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(240), 1,
      sym__code,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [901] = 2,
    ACTIONS(245), 1,
      aux_sym__expression_value_token1,
    ACTIONS(243), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [909] = 2,
    ACTIONS(249), 1,
      aux_sym__expression_value_token1,
    ACTIONS(247), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [917] = 3,
    ACTIONS(251), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(253), 1,
      sym__code,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [927] = 3,
    ACTIONS(232), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(253), 1,
      sym__code,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [937] = 3,
    ACTIONS(255), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(257), 1,
      sym__code,
    STATE(57), 1,
      aux_sym_expression_value_repeat1,
  [947] = 2,
    ACTIONS(261), 1,
      aux_sym__expression_value_token1,
    ACTIONS(259), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [955] = 3,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym_module,
    STATE(80), 1,
      sym_component_name,
  [965] = 3,
    ACTIONS(253), 1,
      sym__code,
    ACTIONS(263), 1,
      anon_sym_PERCENT_GT,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [975] = 3,
    ACTIONS(236), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(253), 1,
      sym__code,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [985] = 2,
    ACTIONS(265), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(267), 1,
      anon_sym_POUND,
  [992] = 2,
    ACTIONS(269), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(271), 1,
      anon_sym_POUND,
  [999] = 2,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      aux_sym_quoted_attribute_value_token1,
  [1006] = 2,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_quoted_attribute_value_token2,
  [1013] = 2,
    ACTIONS(279), 1,
      sym__code,
    STATE(61), 1,
      aux_sym_expression_value_repeat1,
  [1020] = 1,
    ACTIONS(281), 1,
      sym_tag_name,
  [1024] = 1,
    ACTIONS(283), 1,
      anon_sym_PERCENT_GT,
  [1028] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [1032] = 1,
    ACTIONS(287), 1,
      anon_sym_GT,
  [1036] = 1,
    ACTIONS(289), 1,
      anon_sym_GT,
  [1040] = 1,
    ACTIONS(291), 1,
      sym_function,
  [1044] = 1,
    ACTIONS(293), 1,
      sym_function,
  [1048] = 1,
    ACTIONS(295), 1,
      anon_sym_DOCTYPE,
  [1052] = 1,
    ACTIONS(297), 1,
      anon_sym_html,
  [1056] = 1,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
  [1060] = 1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
  [1064] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1068] = 1,
    ACTIONS(303), 1,
      anon_sym_GT,
  [1072] = 1,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
  [1076] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1080] = 1,
    ACTIONS(305), 1,
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
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 699,
  [SMALL_STATE(36)] = 715,
  [SMALL_STATE(37)] = 725,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 755,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 783,
  [SMALL_STATE(42)] = 796,
  [SMALL_STATE(43)] = 803,
  [SMALL_STATE(44)] = 810,
  [SMALL_STATE(45)] = 817,
  [SMALL_STATE(46)] = 824,
  [SMALL_STATE(47)] = 831,
  [SMALL_STATE(48)] = 844,
  [SMALL_STATE(49)] = 851,
  [SMALL_STATE(50)] = 864,
  [SMALL_STATE(51)] = 871,
  [SMALL_STATE(52)] = 881,
  [SMALL_STATE(53)] = 891,
  [SMALL_STATE(54)] = 901,
  [SMALL_STATE(55)] = 909,
  [SMALL_STATE(56)] = 917,
  [SMALL_STATE(57)] = 927,
  [SMALL_STATE(58)] = 937,
  [SMALL_STATE(59)] = 947,
  [SMALL_STATE(60)] = 955,
  [SMALL_STATE(61)] = 965,
  [SMALL_STATE(62)] = 975,
  [SMALL_STATE(63)] = 985,
  [SMALL_STATE(64)] = 992,
  [SMALL_STATE(65)] = 999,
  [SMALL_STATE(66)] = 1006,
  [SMALL_STATE(67)] = 1013,
  [SMALL_STATE(68)] = 1020,
  [SMALL_STATE(69)] = 1024,
  [SMALL_STATE(70)] = 1028,
  [SMALL_STATE(71)] = 1032,
  [SMALL_STATE(72)] = 1036,
  [SMALL_STATE(73)] = 1040,
  [SMALL_STATE(74)] = 1044,
  [SMALL_STATE(75)] = 1048,
  [SMALL_STATE(76)] = 1052,
  [SMALL_STATE(77)] = 1056,
  [SMALL_STATE(78)] = 1060,
  [SMALL_STATE(79)] = 1064,
  [SMALL_STATE(80)] = 1068,
  [SMALL_STATE(81)] = 1072,
  [SMALL_STATE(82)] = 1076,
  [SMALL_STATE(83)] = 1080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(75),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(47),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(67),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(35),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(49),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(54),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(40),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(53),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
