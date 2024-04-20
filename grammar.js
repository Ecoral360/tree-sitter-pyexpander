module.exports = grammar({
  name: "pyexpander",

  extras: ($) => [$.comment],

  rules: {
    source: ($) =>
      seq(
        optional(seq(optional(/#!.*\n/), $.shabang_pyexpander)),
        repeat($._content),
      ),

    _content: ($) => choice($.text, $.px),

    text: ($) => prec(2, repeat1(choice($.dollar, /[^$\\]+/))),

    dollar: ($) => "\\$",

    px: ($) => prec(1, seq("$", choice($._px_cmd, $.code))),

    _px_cmd: ($) => choice($.py_cmd, $.for_cmd, $.if_cmd),

    py_cmd: ($) => seq(alias("py", "$py"), $.code),

    for_cmd: ($) =>
      seq(
        alias("for", "$for"),
        $.code,
        field("body", repeat($._content)),
        "$endfor",
      ),

    if_cmd: ($) =>
      seq(
        alias("if", "$if"),
        $.code,
        field("body", repeat($._content)),
        repeat(field("elif_cmd", seq("$elif", $.code, repeat($._content)))),
        optional(
          field("else_cmd", seq("$else"), field("body", repeat($._content))),
        ),
        "$endif",
      ),

    // for_code: ($) => seq(repeat(seq($.ident, ","), optional($.ident), "in", )),

    code: ($) => $._code_content,

    _code_content: ($) =>
      seq(
        "(",
        alias(repeat(choice($._code_content_2, /[^()]/)), $.code_content),
        ")",
      ),

    _code_content_2: ($) =>
      seq("(", repeat(choice($._code_content_2, /[^()]/)), ")"),

    comment: ($) => token(seq("$#", /.*/)),
    shabang_pyexpander: ($) => "$#!pyexpander",
  },
});
