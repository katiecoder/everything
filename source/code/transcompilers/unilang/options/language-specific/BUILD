package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

cpp_object("c_language_version")

hcp("c_export_settings",deps = [
"//code/transcompilers/unilang/options/sections:portion_options",
"//code/transcompilers/unilang/options:general_options",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/transcompilers/unilang/options:test_wrapper_options",
])

hcp("hidl_export_settings",deps = [
"//code/transcompilers/unilang/options/sections:portion_options",
"//code/transcompilers/unilang/options:general_options",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/transcompilers/unilang/options/bazel:build_rule_settings",
])

hcp("cpp_export_settings",deps = [
"//code/transcompilers/unilang/options/sections:portion_options",
"//code/transcompilers/unilang/options:general_options",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
])

hcp("cpp_test_export_settings",deps = [
"//code/transcompilers/unilang/options/sections:portion_options",
"//code/transcompilers/unilang/options:general_options",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
])

hcp("csharp_export_settings",deps = [
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings"
])

hcp("d_export_settings",deps = [
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings"
])

hcp("rust_export_settings",deps = [
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings"
])

hcp(name = "call_graph_options")

hcp(name = "html_table_options", deps = [
"//code/utilities/types/strings/transformers/casing:case_format_style",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
])

hcp(name = "treesheets_options", deps = [
"//code/utilities/types/strings/transformers/casing:case_format_style"
])

hcp(name = "processing_options", deps = [
"//code/utilities/types/strings/transformers/casing:case_format_style",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
])