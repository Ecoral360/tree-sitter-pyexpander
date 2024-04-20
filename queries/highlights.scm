(source
 (shabang_pyexpander) @constructor)

"$safemode" @constant.builtin

[
 "$__file__"
] @variable.builtin

[
 "$"
 "$py"
 "$for"
 "$for_begin"
 "$endfor"
 "$while"
 "$while_begin"
 "$endwhile"
 "$if"
 "$elif"
 "$else"
 "$endif"
 "$default"
 "$begin"
 "$end"
 "$extend"
] @keyword

(custom_cmd) @property

(extend_cmd ["(" ")"] @keyword)
(extend_cmd (ident) @property)

(default_code "=" @operator)
(default_code (ident) @variable)
(default_code ["(" ")"] @keyword)

(for_code "in" @operator)
(for_code (ident) @variable)
(for_code ["(" ")"] @keyword)

(code [ "(" ")" ] @keyword)

(text (dollar) @constant)

(comment) @comment
