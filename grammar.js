module.exports = grammar({
  name: "pyexpander",

  extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\r?\n/],

  word: ($) => $.kw_ident,

  conflicts: ($) => [[$.elif_cmd]],

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

    px: ($) => choice($.expr_cmd, $._px_cmd),

    _px_cmd: ($) =>
      choice(
        mk_kw({ kw: "safemode" }),
        $.py_cmd,
        $.for_cmd,
        $.while_cmd,
        $.if_cmd,
        $.default_cmd,
        $.begin_cmd,
        $.extend_cmd,
        $.include_cmd,
        $.macro_cmd,
        mk_kw({ kw: "__file__" }),
        $.custom_cmd,
      ),

    expr_cmd: ($) => seq("$", $.code),

    custom_cmd: ($) =>
      seq(
        "$",
        choice(
          seq($.ident, choice($.code, alias(/s*[^(]/, $.text))),
          seq("{", $.ident, "}"),
        ),
      ),

    py_cmd: ($) => seq(mk_kw({ kw: "py", take_params: true }), $.code),

    begin_cmd: ($) =>
      seq(
        mk_kw({ kw: "begin" }),
        alias(repeat($._content), $.body),
        mk_kw({ kw: "end" }),
      ),

    extend_cmd: ($) =>
      seq(
        mk_kw({ kw: "extend", take_params: true }),
        "(",
        $.ident,
        repeat(seq(",", $.ident)),
        optional(","),
        ")",
      ),

    macro_cmd: ($) =>
      seq(
        mk_kw({ kw: "macro", take_params: true }),
        "(",
        alias($.ident, $.macro_name),
        repeat(seq(",", alias($.ident, $.macro_arg))),
        optional(","),
        ")",
        alias(repeat($._content), $.body),
        mk_kw({ kw: "endmacro" }),
      ),

    include_cmd: ($) =>
      seq(mk_kw({ kw: "include", add_begin: true, take_params: true }), $.code),

    default_cmd: ($) =>
      seq(mk_kw({ kw: "default", take_params: true }), $.default_code),

    for_cmd: ($) =>
      seq(
        mk_kw({ kw: "for", add_begin: true, take_params: true }),
        $.for_code,
        alias(repeat($._content), $.body),
        mk_kw({ kw: "endfor" }),
      ),

    while_cmd: ($) =>
      seq(
        mk_kw({ kw: "while", add_begin: true, take_params: true }),
        $.code,
        alias(repeat($._content), $.body),
        mk_kw({ kw: "endwhile" }),
      ),

    if_cmd: ($) =>
      seq(
        mk_kw({ kw: "if", take_params: true }),
        $.code,
        alias(repeat($._content), $.body),
        repeat($.elif_cmd),
        optional(
          field(
            "else_cmd",
            seq(mk_kw({ kw: "else" }), alias(repeat($._content), $.body)),
          ),
        ),
        mk_kw({ kw: "endif" }),
      ),

    elif_cmd: ($) =>
      seq(
        mk_kw({ kw: "elif", take_params: true }),
        $.code,
        alias(repeat($._content), $.body),
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
    comment: ($) => token(seq("$", "#", /.*/)),
    shabang_pyexpander: ($) =>
      seq(
        token(prec(10, "$#!pyexpander")),
        choice(
          /\s*\n/,
          seq(
            ":",
            alias(/[_\p{XID_Start}][_\p{XID_Continue}]*/, $.language_name),
          ),
        ),
      ),
  },
});

function mk_kw({ kw, add_begin = false, take_params = false }) {
  let keyword = kw;
  if (!take_params) {
    keyword = choice(kw, seq("{", kw, "}"));
  }
  const t = alias(seq("$", keyword), `$${kw}`);
  if (!add_begin) return t;

  return choice(t, alias(seq("$", `${kw}_begin`), `$${kw}_begin`));
}
