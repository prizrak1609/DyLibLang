#include <iostream>
#include <filesystem>
#include "tree_sitter/api.h"
#include "tree_sitter/parser.h"

const TSLanguage *tree_sitter_dyliblang(void);

int main() {
    TSParser *parser = ts_parser_new();

    ts_parser_set_language(parser, tree_sitter_dyliblang());

    ts_parser_delete(parser);

    return 0;
}
