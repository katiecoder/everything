package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "export_file_settings", deps = [
"//code/transcompilers/unilang/structure/sections/meta:code_type",
"//code/transcompilers/unilang/structure-printer/export_file_settings:file_type",
"//code/transcompilers/unilang/structure-printer/export_file_settings:special_file_type",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter/languages:source_language",
])
cpp_object(name = "file_type")
cpp_object(name = "special_file_type")