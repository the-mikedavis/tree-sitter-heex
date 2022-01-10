; directives are standalone tags like '<%= @x %>'
;
; partial_expression_values are elixir code that is part of an expression that
; spans multiple directive nodes, so they must be combined. For example:
;     <%= if true do %>
;       <p>hello, tree-sitter!</p>
;     <% end %>
((directive (partial_expression_value) @injection.content)
 (#set! injection.language "elixir")
 (#set! injection.include-children)
 (#set! injection.combined))

; Regular expression_values do not need to be combined
([
   ; expressions live within HTML tags, like:
   ;     <link href={ Routes.static_path(..) } />
   ; or are stand-alone directives that do not need to be combined
   ;     <%= csrf_meta_tag()  %>
   (expression_value)
   ; e.g. <MyApp.modal key=value />
   (component_name)
 ] @injection.content
 (#set! injection.language "elixir"))

((expression (expression_value) @injection.content)
 (#set! injection.language "elixir"))
