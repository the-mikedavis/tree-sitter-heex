#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  sym__code = 27,
  sym_tag_name = 28,
  anon_sym_DOT = 29,
  sym_component_name = 30,
  sym_attribute_name = 31,
  sym_text = 32,
  sym_fragment = 33,
  sym__node = 34,
  sym_doctype = 35,
  sym_tag = 36,
  sym_component = 37,
  sym_start_tag = 38,
  sym_end_tag = 39,
  sym_self_closing_tag = 40,
  sym_start_component = 41,
  sym_end_component = 42,
  sym_self_closing_component = 43,
  sym_expression = 44,
  sym__expression_value = 45,
  sym_attribute = 46,
  sym_quoted_attribute_value = 47,
  sym_directive = 48,
  sym_expression_value = 49,
  sym_partial_expression_value = 50,
  sym_comment = 51,
  sym__component_name = 52,
  aux_sym_fragment_repeat1 = 53,
  aux_sym_start_tag_repeat1 = 54,
  aux_sym_expression_repeat1 = 55,
  aux_sym_expression_value_repeat1 = 56,
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
  [sym__code] = "_code",
  [sym_tag_name] = "tag_name",
  [anon_sym_DOT] = ".",
  [sym_component_name] = "component_name",
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
  [sym__component_name] = "_component_name",
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
  [sym__code] = sym__code,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_component_name] = sym_component_name,
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
  [sym__component_name] = sym__component_name,
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
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_component_name] = {
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
  [sym__component_name] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '-' || '/' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '-' || '/' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(14);
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
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
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
          lookahead != '%') ADVANCE(72);
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
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
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
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [aux_sym_partial_expression_value_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(77),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(11),
    [sym_start_component] = STATE(5),
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
  [0] = 12,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(22), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(34), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(28), 2,
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
  [46] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(5), 1,
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
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [94] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
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
  [142] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(20), 1,
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
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(18), 1,
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
  [238] = 12,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
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
    STATE(2), 7,
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
  [564] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      sym_attribute_name,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [580] = 5,
    ACTIONS(133), 1,
      anon_sym_GT,
    ACTIONS(135), 1,
      anon_sym_SLASH_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_attribute_name,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [598] = 5,
    ACTIONS(141), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(145), 1,
      sym__code,
    STATE(38), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(143), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(67), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [616] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      anon_sym_GT,
    ACTIONS(149), 1,
      anon_sym_SLASH_GT,
    STATE(32), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [634] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_attribute_name,
    ACTIONS(151), 1,
      anon_sym_GT,
    ACTIONS(153), 1,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [652] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      sym_attribute_name,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [670] = 5,
    ACTIONS(137), 1,
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
  [687] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      aux_sym__expression_value_token1,
    STATE(34), 1,
      aux_sym_expression_repeat1,
    STATE(51), 1,
      sym__expression_value,
  [703] = 2,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(173), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [713] = 5,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      aux_sym__expression_value_token1,
    STATE(39), 1,
      aux_sym_expression_repeat1,
    STATE(51), 1,
      sym__expression_value,
  [729] = 3,
    ACTIONS(185), 1,
      sym__code,
    STATE(37), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(183), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [741] = 4,
    ACTIONS(188), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(192), 1,
      sym__code,
    STATE(37), 1,
      aux_sym_expression_value_repeat1,
    ACTIONS(190), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [755] = 5,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      aux_sym__expression_value_token1,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_expression_repeat1,
    STATE(51), 1,
      sym__expression_value,
  [771] = 1,
    ACTIONS(196), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [778] = 1,
    ACTIONS(198), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [785] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      aux_sym__expression_value_token1,
    STATE(80), 1,
      sym__expression_value,
  [798] = 1,
    ACTIONS(206), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [805] = 1,
    ACTIONS(208), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [812] = 1,
    ACTIONS(210), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [819] = 4,
    ACTIONS(212), 1,
      sym_tag_name,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      sym_component_name,
    STATE(28), 1,
      sym__component_name,
  [832] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      aux_sym__expression_value_token1,
    STATE(69), 1,
      sym__expression_value,
  [845] = 1,
    ACTIONS(222), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [852] = 3,
    ACTIONS(224), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(226), 1,
      sym__code,
    STATE(59), 1,
      aux_sym_expression_value_repeat1,
  [862] = 2,
    ACTIONS(230), 1,
      aux_sym__expression_value_token1,
    ACTIONS(228), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [870] = 2,
    ACTIONS(234), 1,
      aux_sym__expression_value_token1,
    ACTIONS(232), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [878] = 3,
    ACTIONS(183), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(236), 1,
      sym__code,
    STATE(52), 1,
      aux_sym_expression_value_repeat1,
  [888] = 3,
    ACTIONS(239), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(241), 1,
      sym__code,
    STATE(52), 1,
      aux_sym_expression_value_repeat1,
  [898] = 3,
    ACTIONS(243), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(245), 1,
      sym__code,
    STATE(55), 1,
      aux_sym_expression_value_repeat1,
  [908] = 3,
    ACTIONS(224), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(241), 1,
      sym__code,
    STATE(52), 1,
      aux_sym_expression_value_repeat1,
  [918] = 2,
    ACTIONS(249), 1,
      aux_sym__expression_value_token1,
    ACTIONS(247), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [926] = 3,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      sym_component_name,
    STATE(72), 1,
      sym__component_name,
  [936] = 3,
    ACTIONS(241), 1,
      sym__code,
    ACTIONS(253), 1,
      anon_sym_PERCENT_GT,
    STATE(52), 1,
      aux_sym_expression_value_repeat1,
  [946] = 3,
    ACTIONS(241), 1,
      sym__code,
    ACTIONS(255), 1,
      anon_sym_PERCENT_GT,
    STATE(52), 1,
      aux_sym_expression_value_repeat1,
  [956] = 3,
    ACTIONS(255), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(257), 1,
      sym__code,
    STATE(53), 1,
      aux_sym_expression_value_repeat1,
  [966] = 2,
    ACTIONS(259), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(261), 1,
      anon_sym_POUND,
  [973] = 2,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_quoted_attribute_value_token1,
  [980] = 2,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_quoted_attribute_value_token2,
  [987] = 2,
    ACTIONS(269), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(271), 1,
      anon_sym_POUND,
  [994] = 2,
    ACTIONS(273), 1,
      sym__code,
    STATE(58), 1,
      aux_sym_expression_value_repeat1,
  [1001] = 1,
    ACTIONS(275), 1,
      sym_tag_name,
  [1005] = 1,
    ACTIONS(277), 1,
      anon_sym_PERCENT_GT,
  [1009] = 1,
    ACTIONS(279), 1,
      anon_sym_GT,
  [1013] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [1017] = 1,
    ACTIONS(283), 1,
      anon_sym_DOCTYPE,
  [1021] = 1,
    ACTIONS(285), 1,
      sym_component_name,
  [1025] = 1,
    ACTIONS(287), 1,
      anon_sym_GT,
  [1029] = 1,
    ACTIONS(289), 1,
      anon_sym_GT,
  [1033] = 1,
    ACTIONS(291), 1,
      anon_sym_html,
  [1037] = 1,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
  [1041] = 1,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
  [1045] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [1049] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1053] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1057] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 94,
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
  [SMALL_STATE(28)] = 580,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 634,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 670,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 703,
  [SMALL_STATE(36)] = 713,
  [SMALL_STATE(37)] = 729,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 755,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 778,
  [SMALL_STATE(42)] = 785,
  [SMALL_STATE(43)] = 798,
  [SMALL_STATE(44)] = 805,
  [SMALL_STATE(45)] = 812,
  [SMALL_STATE(46)] = 819,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 845,
  [SMALL_STATE(49)] = 852,
  [SMALL_STATE(50)] = 862,
  [SMALL_STATE(51)] = 870,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 888,
  [SMALL_STATE(54)] = 898,
  [SMALL_STATE(55)] = 908,
  [SMALL_STATE(56)] = 918,
  [SMALL_STATE(57)] = 926,
  [SMALL_STATE(58)] = 936,
  [SMALL_STATE(59)] = 946,
  [SMALL_STATE(60)] = 956,
  [SMALL_STATE(61)] = 966,
  [SMALL_STATE(62)] = 973,
  [SMALL_STATE(63)] = 980,
  [SMALL_STATE(64)] = 987,
  [SMALL_STATE(65)] = 994,
  [SMALL_STATE(66)] = 1001,
  [SMALL_STATE(67)] = 1005,
  [SMALL_STATE(68)] = 1009,
  [SMALL_STATE(69)] = 1013,
  [SMALL_STATE(70)] = 1017,
  [SMALL_STATE(71)] = 1021,
  [SMALL_STATE(72)] = 1025,
  [SMALL_STATE(73)] = 1029,
  [SMALL_STATE(74)] = 1033,
  [SMALL_STATE(75)] = 1037,
  [SMALL_STATE(76)] = 1041,
  [SMALL_STATE(77)] = 1045,
  [SMALL_STATE(78)] = 1049,
  [SMALL_STATE(79)] = 1053,
  [SMALL_STATE(80)] = 1057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(70),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(46),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(65),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
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
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
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
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(47),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(51),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(37),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_name, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(52),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
