package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "stamp_expander", deps = [
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/parser:parser_token",
"//code/transcompilers/unilang/parser:token_value",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/important:sub_structure_builder",
"//code/transcompilers/unilang/options/parser/symbols:token_attribute_settings",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:parser_token_stripper",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:parser_utilities",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:special_parser_filters",
"//code/utilities/types/vectors/transformers:lib",
"//code/utilities/types/strings/transformers/search_replace:lib",
])

hcp(name = "code_object_creator", deps = [
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/parser:parser_token",
"//code/transcompilers/unilang/parser:token_value",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/important:sub_structure_builder",
"//code/transcompilers/unilang/options/parser/symbols:token_attribute_settings",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:parser_token_stripper",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:parser_utilities",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter/util:special_parser_filters",
"//code/transcompilers/unilang/parser_tokens_to_structure_converter:stamp_expander",
"//code/utilities/types/strings/transformers/removing:lib",
"//code/utilities/types/strings/transformers/stripping:lib",
"//code/transcompilers/unilang/structure:inlined_structures",
])