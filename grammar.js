module.exports = grammar({
  name: "pyexpander",

  extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\r?\n/],

  word: ($) => $.kw_ident,

  conflicts: ($) => [[$.if_cmd]],

  rules: {
    source: ($) =>
      seq(
        optional(seq(optional(/#!.*\n/), $.shabang_pyexpander)),
        repeat($._content),
      ),

    _content: ($) => choice($.text, $.px),

    text: ($) => prec(2, repeat1(choice($.dollar, /[^$\\]+/, $.wrap_line))),

    dollar: ($) => "\\$",
    wrap_line: ($) => "\\\n",

    px: ($) => prec(1, choice(seq("$", $.code), $._px_cmd)),

    _px_cmd: ($) =>
      choice(
        mk_kw("safemode"),
        $.py_cmd,
        $.for_cmd,
        $.while_cmd,
        $.if_cmd,
        $.default_cmd,
        $.begin_cmd,
        $.extend_cmd,
        $.include_cmd,
        $.macro_cmd,
        mk_kw("__file__"),
        $.custom_cmd,
      ),

    custom_cmd: ($) =>
      seq("$", $.ident, choice($.code, /[^(]/)),

    py_cmd: ($) => seq(mk_kw("py"), $.code),

    begin_cmd: ($) =>
      seq(mk_kw("begin"), alias(repeat($._content), $.body), mk_kw("end")),

    extend_cmd: ($) =>
      seq(
        mk_kw("extend"),
        "(",
        $.ident,
        repeat(seq(",", $.ident)),
        optional(","),
        ")",
      ),

    macro_cmd: ($) =>
      seq(
        mk_kw("macro"),
        "(",
        alias($.ident, $.macro_name),
        repeat(seq(",", alias($.ident, $.macro_arg))),
        optional(","),
        ")",
        alias(repeat($._content), $.body),
        mk_kw("endmacro"),
      ),

    include_cmd: ($) => seq(mk_kw("include", true), $.code),

    default_cmd: ($) => seq(mk_kw("default"), $.default_code),

    for_cmd: ($) =>
      seq(
        mk_kw("for", true),
        $.for_code,
        alias(repeat($._content), $.body),
        mk_kw("endfor"),
      ),

    while_cmd: ($) =>
      seq(
        mk_kw("while", true),
        $.code,
        alias(repeat($._content), $.body),
        mk_kw("endwhile"),
      ),

    if_cmd: ($) =>
      seq(
        mk_kw("if"),
        $.code,
        alias(repeat($._content), $.body),
        repeat(
          field(
            "elif_cmd",
            seq(mk_kw("elif"), $.code, alias(repeat($._content), $.body)),
          ),
        ),
        optional(
          field(
            "else_cmd",
            seq(mk_kw("else"), alias(repeat($._content), $.body)),
          ),
        ),
        mk_kw("endif"),
      ),

    // for_code: ($) => seq(repeat(seq($.ident, ","), optional($.ident), "in", )),

    code: ($) => $._code_content,

    for_code: ($) =>
      seq(
        "(",
        seq($.ident, repeat(seq(",", $.ident)), optional(",")),
        "in",
        alias(repeat(choice($._code_content_2, /[^()]/)), $.code_content),
        ")",
        optional("\\"),
      ),

    default_code: ($) =>
      seq(
        "(",
        seq(
          seq(
            $.ident,
            "=",
            alias(repeat(choice($._code_content_2, /[^,()]/)), $.code_content),
          ),
        ),
        repeat(
          seq(
            ",",
            $.ident,
            "=",
            alias(repeat(choice($._code_content_2, /[^,()]/)), $.code_content),
          ),
        ),
        optional(","),
        ")",
        optional("\\"),
      ),

    _code_content: ($) =>
      seq(
        "(",
        alias(repeat(choice($._code_content_2, /[^()]/)), $.code_content),
        ")",
      ),

    _code_content_2: ($) =>
      seq("(", repeat(choice($._code_content_2, /[^()]/)), ")"),

    ident: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    kw_ident: ($) => /[_A-Za-z][_A-Za-z0-9]*/,
    comment: ($) => token(seq("$#", /.*/)),
    shabang_pyexpander: ($) => "$#!pyexpander",
  },
});

function mk_kw(kw, add_begin = false) {
  const t = alias(seq("$", choice(kw, seq("{", kw, "}"))), `$${kw}`);
  if (!add_begin) return t;

  return choice(t, alias(seq("$", `${kw}_begin`), `$${kw}_begin`));
}
