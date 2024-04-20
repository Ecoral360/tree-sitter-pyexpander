(source
 (shabang_pyexpander) @constant.builtin)

[
 "$"
 "$py"
 "$for"
 "$if"
 "$elif"
 "$else"
] @keyword

(code [ "(" ")" ] @keyword)

(text (dollar) @constant)

(comment) @comment
