generate:
    tree-sitter generate

test: generate
    tree-sitter test


build:
    tree-sitter build --wasm
play: build
    tree-sitter playground
