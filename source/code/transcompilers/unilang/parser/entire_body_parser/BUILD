package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "entire_body_parser", deps = [
"//code/transcompilers/unilang/structure/sections/method/body:function_body",
"//code/transcompilers/unilang/parser:global_tokens_table_utilities",
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/utilities/converters:lib",
"//code/transcompilers/unilang/parser/entire_body_parser:nested_body_tokens",
"//code/transcompilers/unilang/parser/entire_body_parser:body_tokenizer",
])

cpp_object("forward_decls")

hcp(name = "nested_body_tokens", deps = [
"//code/transcompilers/unilang/parser/entire_body_parser:forward_decls",
"//code/transcompilers/unilang/parser/body_parser:body_token_value",
])

hcp(name = "body_tokenizer", deps = [
"//code/transcompilers/unilang/structure/sections/method/body:function_body",
"//code/transcompilers/unilang/parser:global_tokens_table_utilities",
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/utilities/converters:lib",
"//code/transcompilers/unilang/parser/entire_body_parser:nested_body_tokens",
])