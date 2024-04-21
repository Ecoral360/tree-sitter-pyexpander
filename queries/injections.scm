(source
  (shabang_pyexpander (language_name) @injection.language)
  (text) @injection.content)

((code (code_content) @injection.content
 (#set! injection.language "python")))

((default_code (code_content) @injection.content
 (#set! injection.language "python")))

((for_code (code_content) @injection.content
 (#set! injection.language "python")))
