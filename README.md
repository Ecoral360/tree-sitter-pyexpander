# Pyexpander Tree-sitter

[![pypi][pypi]](https://pypi.org/project/pyexpander/)

[Pyexpander][pyexpander] grammar for [tree-sitter].

## Usage

Add `$#!pyexpander` at the beginning of your file (or the line after the shabang)

> [!IMPORTANT]
> To set the language definition for the rest of the file, write `$#!pyexpander:LANGUAGE_NAME` instead

## Dependencies

The package depends on [tree-sitter-python] for language injection.

[pyexpander]: https://pyexpander.sourceforge.io/
[tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[pypi]: https://img.shields.io/pypi/v/pyexpander?logo=pypi&logoColor=ffd242&label=PyPI
[tree-sitter-python]: https://github.com/tree-sitter/tree-sitter-python
