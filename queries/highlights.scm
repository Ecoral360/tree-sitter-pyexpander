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
 "$include"
 "$include_begin"
 "$if"
 "$elif"
 "$else"
 "$endif"
 "$default"
 "$begin"
 "$end"
 "$extend"
 "$macro"
 "$endmacro"
] @keyword

(macro_cmd (macro_name) @function.method)
(macro_cmd (macro_arg) @variable.parameter)
(macro_cmd ["(" ")"] @keyword)

(wrap_line) @comment

(custom_cmd (ident) @function.call)
(custom_cmd [ "{" "}" ] @function.call)

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
