#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
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
  sym__module_token = 28,
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
  sym_module = 54,
  sym__joined_module_tokens = 55,
  aux_sym_fragment_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_expression_repeat1 = 58,
  aux_sym_expression_value_repeat1 = 59,
  aux_sym__joined_module_tokens_repeat1 = 60,
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
  [sym__module_token] = "_module_token",
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
  [sym__joined_module_tokens] = "_joined_module_tokens",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
  [aux_sym__joined_module_tokens_repeat1] = "_joined_module_tokens_repeat1",
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
  [sym__module_token] = sym__module_token,
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
  [sym__joined_module_tokens] = sym__joined_module_tokens,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
  [aux_sym__joined_module_tokens_repeat1] = aux_sym__joined_module_tokens_repeat1,
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
  [sym__module_token] = {
    .visible = false,
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__joined_module_tokens] = {
    .visible = false,
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
  [aux_sym__joined_module_tokens_repeat1] = {
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

static inline bool sym__module_token_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(51);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(29);
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
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__module_token);
      if (!sym__module_token_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_function);
      if (!sym__module_token_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(80);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(29);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(76);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(77);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(81);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(79);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(52);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(30);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(83);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(82);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(55);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(84);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 0},
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
    [sym_fragment] = STATE(84),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(10),
    [sym_start_component] = STATE(5),
    [sym_self_closing_component] = STATE(11),
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
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(20), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 7,
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
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(22), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [96] = 12,
    ACTIONS(25), 1,
      anon_sym_LT_BANG,
    ACTIONS(28), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(40), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(34), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [142] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(21), 1,
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
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 7,
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
    STATE(30), 3,
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
    STATE(30), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [600] = 5,
    ACTIONS(137), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(141), 1,
      sym__code,
    STATE(44), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(139), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(77), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [618] = 4,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_attribute_name,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(30), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [634] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(151), 1,
      anon_sym_GT,
    ACTIONS(153), 1,
      anon_sym_SLASH_GT,
    STATE(28), 3,
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
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [670] = 4,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      sym_attribute_name,
    STATE(35), 1,
      aux_sym__joined_module_tokens_repeat1,
    ACTIONS(159), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [685] = 6,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      sym__module_token,
    ACTIONS(170), 1,
      sym_tag_name,
    STATE(32), 1,
      sym_component_name,
    STATE(38), 1,
      sym__joined_module_tokens,
    STATE(39), 1,
      sym_module,
  [704] = 3,
    ACTIONS(174), 1,
      sym_attribute_name,
    STATE(37), 1,
      aux_sym__joined_module_tokens_repeat1,
    ACTIONS(172), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [717] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_attribute_value,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(55), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [734] = 4,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(187), 1,
      sym_attribute_name,
    STATE(37), 1,
      aux_sym__joined_module_tokens_repeat1,
    ACTIONS(182), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [749] = 2,
    ACTIONS(164), 1,
      sym_attribute_name,
    ACTIONS(159), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [759] = 3,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      sym_attribute_name,
    ACTIONS(189), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [771] = 5,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      aux_sym__expression_value_token1,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    STATE(58), 1,
      sym__expression_value,
  [787] = 2,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(201), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [797] = 5,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      aux_sym__expression_value_token1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_expression_repeat1,
    STATE(58), 1,
      sym__expression_value,
  [813] = 5,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      sym__module_token,
    STATE(38), 1,
      sym__joined_module_tokens,
    STATE(39), 1,
      sym_module,
    STATE(75), 1,
      sym_component_name,
  [829] = 4,
    ACTIONS(207), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(211), 1,
      sym__code,
    STATE(46), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(209), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [843] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(218), 1,
      aux_sym__expression_value_token1,
    STATE(45), 1,
      aux_sym_expression_repeat1,
    STATE(58), 1,
      sym__expression_value,
  [859] = 3,
    ACTIONS(223), 1,
      sym__code,
    STATE(46), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(221), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [871] = 2,
    ACTIONS(187), 1,
      sym_attribute_name,
    ACTIONS(182), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [881] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      aux_sym__expression_value_token1,
    STATE(89), 1,
      sym__expression_value,
  [894] = 1,
    ACTIONS(232), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [901] = 1,
    ACTIONS(234), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [908] = 1,
    ACTIONS(236), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [915] = 1,
    ACTIONS(238), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [922] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      aux_sym__expression_value_token1,
    STATE(74), 1,
      sym__expression_value,
  [935] = 1,
    ACTIONS(244), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [942] = 1,
    ACTIONS(246), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [949] = 1,
    ACTIONS(248), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [956] = 3,
    ACTIONS(250), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(252), 1,
      sym__code,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [966] = 2,
    ACTIONS(256), 1,
      aux_sym__expression_value_token1,
    ACTIONS(254), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [974] = 3,
    ACTIONS(258), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(260), 1,
      sym__code,
    STATE(64), 1,
      aux_sym_expression_value_repeat1,
  [984] = 3,
    ACTIONS(221), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(262), 1,
      sym__code,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [994] = 3,
    ACTIONS(252), 1,
      sym__code,
    ACTIONS(258), 1,
      anon_sym_PERCENT_GT,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [1004] = 2,
    ACTIONS(267), 1,
      aux_sym__expression_value_token1,
    ACTIONS(265), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1012] = 3,
    ACTIONS(252), 1,
      sym__code,
    ACTIONS(269), 1,
      anon_sym_PERCENT_GT,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [1022] = 3,
    ACTIONS(252), 1,
      sym__code,
    ACTIONS(271), 1,
      anon_sym_PERCENT_GT,
    STATE(60), 1,
      aux_sym_expression_value_repeat1,
  [1032] = 3,
    ACTIONS(271), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(273), 1,
      sym__code,
    STATE(63), 1,
      aux_sym_expression_value_repeat1,
  [1042] = 3,
    ACTIONS(275), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(277), 1,
      sym__code,
    STATE(61), 1,
      aux_sym_expression_value_repeat1,
  [1052] = 2,
    ACTIONS(281), 1,
      aux_sym__expression_value_token1,
    ACTIONS(279), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1060] = 2,
    ACTIONS(283), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(285), 1,
      anon_sym_POUND,
  [1067] = 2,
    ACTIONS(287), 1,
      sym__code,
    STATE(57), 1,
      aux_sym_expression_value_repeat1,
  [1074] = 2,
    ACTIONS(289), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(291), 1,
      anon_sym_POUND,
  [1081] = 2,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_quoted_attribute_value_token2,
  [1088] = 2,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      aux_sym_quoted_attribute_value_token1,
  [1095] = 1,
    ACTIONS(299), 1,
      sym__module_token,
  [1099] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [1103] = 1,
    ACTIONS(303), 1,
      anon_sym_GT,
  [1107] = 1,
    ACTIONS(305), 1,
      sym_function,
  [1111] = 1,
    ACTIONS(307), 1,
      anon_sym_PERCENT_GT,
  [1115] = 1,
    ACTIONS(309), 1,
      sym_tag_name,
  [1119] = 1,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1123] = 1,
    ACTIONS(313), 1,
      anon_sym_GT,
  [1127] = 1,
    ACTIONS(315), 1,
      anon_sym_html,
  [1131] = 1,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
  [1135] = 1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
  [1139] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [1143] = 1,
    ACTIONS(321), 1,
      sym_function,
  [1147] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [1151] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1155] = 1,
    ACTIONS(323), 1,
      anon_sym_DOCTYPE,
  [1159] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 142,
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
  [SMALL_STATE(31)] = 634,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 685,
  [SMALL_STATE(35)] = 704,
  [SMALL_STATE(36)] = 717,
  [SMALL_STATE(37)] = 734,
  [SMALL_STATE(38)] = 749,
  [SMALL_STATE(39)] = 759,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 797,
  [SMALL_STATE(43)] = 813,
  [SMALL_STATE(44)] = 829,
  [SMALL_STATE(45)] = 843,
  [SMALL_STATE(46)] = 859,
  [SMALL_STATE(47)] = 871,
  [SMALL_STATE(48)] = 881,
  [SMALL_STATE(49)] = 894,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 908,
  [SMALL_STATE(52)] = 915,
  [SMALL_STATE(53)] = 922,
  [SMALL_STATE(54)] = 935,
  [SMALL_STATE(55)] = 942,
  [SMALL_STATE(56)] = 949,
  [SMALL_STATE(57)] = 956,
  [SMALL_STATE(58)] = 966,
  [SMALL_STATE(59)] = 974,
  [SMALL_STATE(60)] = 984,
  [SMALL_STATE(61)] = 994,
  [SMALL_STATE(62)] = 1004,
  [SMALL_STATE(63)] = 1012,
  [SMALL_STATE(64)] = 1022,
  [SMALL_STATE(65)] = 1032,
  [SMALL_STATE(66)] = 1042,
  [SMALL_STATE(67)] = 1052,
  [SMALL_STATE(68)] = 1060,
  [SMALL_STATE(69)] = 1067,
  [SMALL_STATE(70)] = 1074,
  [SMALL_STATE(71)] = 1081,
  [SMALL_STATE(72)] = 1088,
  [SMALL_STATE(73)] = 1095,
  [SMALL_STATE(74)] = 1099,
  [SMALL_STATE(75)] = 1103,
  [SMALL_STATE(76)] = 1107,
  [SMALL_STATE(77)] = 1111,
  [SMALL_STATE(78)] = 1115,
  [SMALL_STATE(79)] = 1119,
  [SMALL_STATE(80)] = 1123,
  [SMALL_STATE(81)] = 1127,
  [SMALL_STATE(82)] = 1131,
  [SMALL_STATE(83)] = 1135,
  [SMALL_STATE(84)] = 1139,
  [SMALL_STATE(85)] = 1143,
  [SMALL_STATE(86)] = 1147,
  [SMALL_STATE(87)] = 1151,
  [SMALL_STATE(88)] = 1155,
  [SMALL_STATE(89)] = 1159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(88),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(69),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(40),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_module, 1), SHIFT(73),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__joined_module_tokens, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__joined_module_tokens, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__joined_module_tokens_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__joined_module_tokens_repeat1, 2), SHIFT_REPEAT(73),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__joined_module_tokens_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(53),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(58),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(46),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(60),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
