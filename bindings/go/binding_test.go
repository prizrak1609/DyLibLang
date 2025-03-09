package tree_sitter_dyliblang_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dyliblang "github.com/prizrak1609/dyliblang/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dyliblang.Language())
	if language == nil {
		t.Errorf("Error loading DyLibLang grammar")
	}
}
