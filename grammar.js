module.exports = grammar({
  name: "pyexpander",

  extras: ($) => [$.comment],

  rules: {
    source: ($) => seq(optional("$#pyexpander"), repeat(choice($.text, $.px))),

    text: (_) => prec.left(repeat1(choice("\\$", /[^$]+/))),

    px: ($) => prec.right(seq("$", choice($._px_cmd, $.px_expr))),

    _px_cmd: ($) => choice($._px_py_cmd),
    _px_py_cmd: ($) => seq("py", $.code),

    px_expr: ($) => seq("(", $.code, ")"),

    code: ($) => $._code_content,
    _code_content: ($) =>
      repeat1(choice(seq("(", $._code_content, ")"), /[^()]*/)),

    comment: ($) => token(seq("$#", /.*/)),
  },
});
