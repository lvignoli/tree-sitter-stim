/**
 * @file Stim circuit parser
 * @author Louis Vignoli <louis.vignoli@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const uint = /[0-9]+/;
const double = /[0-9]+(\.[0-9]+)?/;

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

module.exports = grammar({
  name: "stim",
  rules: {
    circuit: ($) => repeat($._line),
    _line: ($) =>
      seq(
        optional(choice($.instruction, $.block_start, $.block_end)),
        optional($.comment),
        "\n",
      ),
    comment: ($) => seq("#", /[^\n]*/),

    instruction: ($) =>
      seq(
        field("name", $.name),
        optional(field("tag", $.tag)),
        optional(field("parens_agruments", $.parens_arguments)),
        optional(field("targets", $.targets)),
      ),
    block_start: ($) => seq($.instruction, "{"),
    block_end: ($) => "}",

    tag: ($) => seq("[", repeat(/[^\r\]\n]/), "]"),
    parens_arguments: ($) => seq("(", commaSep1($.arg), ")"),
    // arguments: ($) => ,
    targets: ($) => repeat1($._targ),

    name: ($) => /[a-zA-Z][a-zA-Z0-9_]*/,
    arg: ($) => double,
    _targ: ($) =>
      choice(
        $.qubit_target,
        $.measurement_record_target,
        $.sweep_bit_target,
        $.pauli_target,
        $.combiner_target,
      ),
    qubit_target: ($) => seq(optional("!"), uint),
    measurement_record_target: ($) => seq("rec[-", uint, "]"),
    sweep_bit_target: ($) => seq("sweep[-", uint, "]"),
    pauli_target: ($) => seq(optional("!"), /[XYZ]/, uint),
    combiner_target: ($) => "*",
  },
});
