/**
 * @file Parser for DyLibLang language
 * @author Dmytro Hubatenko <gubatenkod@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'dyliblang',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  supertypes: $ => [
    $.statement
  ],

  inline: $ => [
    $.value_declaration,
    $.type
  ],

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.load_statement,
      $.unload_statement,
      $.variable_declaration,
      $.function_call
    ),

    load_statement: $ => seq(
      'load',
      field('library', $.library_identifier),
      optional(seq('as', field('alias', $._alias_identifier)))
    ),

    unload_statement: $ => seq(
      'unload',
      field('library', $.library_identifier)
    ),

    variable_declaration: $ => seq(
      field('name', $._variable_identifier),
      ':',
      field('type', $.type),
      '=',
      field('value', $.value_declaration)
    ),

    value_declaration: $ => choice(
      $.function_call,
      $.function_reference,
      $.identifier,
      $.number
    ),

    function_call: $ => seq(
      field('function_name', $._function_identifier),
      '(',
      optional(seq(
        field('argument', $._argument_declaration),
        repeat(seq(',', field('argument', $._argument_declaration)))
      )),
      ')'
    ),

    function_reference: $ => seq(
      field('function_name', $._function_identifier),
      '.',
      field('symbol', $._symbol_identifier)
    ),

    number: $ => token(choice(
      seq(
        choice('-', '+'),
        /[0-9]+/
      ),
      seq(
        choice('-', '+'),
        /[0-9]+\.[0-9]+/
      )
    )),

    type: $ => choice(
      'int',
      'void',
      'char',
      'float',
      'double',
      'short',
      'long',
      'unsigned',
      'signed',
      'bool',
      'size_t',
      'ptrdiff_t',
      'wchar_t',
      'int8_t',
      'int16_t',
      'int32_t',
      'int64_t',
      'uint8_t',
      'uint16_t',
      'uint32_t',
      'uint64_t',
      $.cpp_type,
      $.function_type
    ),

    cpp_type: $ => seq(
      'std',
      '::',
      $._cpp_type
    ),

    function_type: $ => seq(
      field('return_type', $.type),
      '(',
      optional(seq(
        field('type', $._argument_type),
        repeat(seq(',', field('type', $._argument_type)))
      )),
      ')'
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    library_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\.]*/,
    
    _alias_identifier: $ => alias($.identifier, $.alias_identifier),
    _variable_identifier: $ => alias($.identifier, $.variable_identifier),
    _function_identifier: $ => alias($.identifier, $.function_identifier),
    _symbol_identifier: $ => alias($.identifier, $.symbol_identifier),
    
    _cpp_type: $ => alias($.identifier, $.cpp_type),
    _argument_type: $ => alias($.type, $.argument_type),

    _argument_declaration: $ => alias($.identifier, $.argument_declaration),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});
