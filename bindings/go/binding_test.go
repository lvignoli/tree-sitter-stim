package tree_sitter_stim_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_stim "github.com/lvignoli/tree-sitter-stim/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_stim.Language())
	if language == nil {
		t.Errorf("Error loading Stim grammar")
	}
}
