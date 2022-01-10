(doctype) @constant

; HEEx attributes are highlighted as HTML attributes
(attribute_name) @attribute
[
  (attribute_value)
  (quoted_attribute_value)
] @string

; HEEx tags are highlighted as HTML
(tag_name) @tag

[
  "/>"
  "<!"
  "<"
  "</"
  ">"
] @punctuation.bracket

[
  "<%"
  "<%#"
  "<%%="
  "<%="
  "%>"
  "{"
  "}"
] @keyword

"=" @operator
"." @punctuation.delimiter

(comment) @comment

(ERROR) @error
