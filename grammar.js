module.exports = grammar({
    name: "pyexpander",

    rules: {
        source: ($) =>
            repeat(
                choice($.text, prec.right(seq("$", choice($._px_cmd, $._px_expr)))),
            ),

        text: (_) => prec.left(repeat1(choice("\\$", /[^$]+/))),

        _px_cmd: ($) => choice($._px_py_cmd),
        _px_py_cmd: ($) => seq("py", $.code),
        _px_expr: ($) => seq("(", $.code, ")"),
        code: ($) => $._code_content,
        _code_content: ($) =>
            repeat1(choice(/[^)]/, seq("(", $._code_content, ")"))),
    },
});
