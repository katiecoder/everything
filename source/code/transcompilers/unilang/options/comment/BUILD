package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

cpp_object(name = "comment_style_category")

hcp(name = "comment_grammar_settings",
deps = [
"//code/transcompilers/unilang/options/comment/doxygen:doxygen_block_options"
])

hcp(name = "comment_settings",
deps=[
"//code/transcompilers/unilang/options/comment/doxygen:doxygen_block_options",
"//code/transcompilers/unilang/options/comment/language_default:c_comment_settings",
"//code/transcompilers/unilang/options/comment:comment_grammar_settings",
"//code/transcompilers/unilang/options/comment:comment_style_category",
])