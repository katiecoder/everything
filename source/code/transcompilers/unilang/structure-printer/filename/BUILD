package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "file_name_creator", deps = [
"//code/transcompilers/unilang/options/filesystem:general_filesystem_naming",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter/languages:source_language",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/transcompilers/unilang/file_extension_getter:file_extension_getter",
])

hcp(name = "file_name_getter", deps = [
"//code/transcompilers/unilang/structure-printer/export_file_settings:export_file_settings",
"//code/transcompilers/unilang/options/filesystem:general_filesystem_naming",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/transcompilers/unilang/structure-printer/filename:file_name_creator",
])