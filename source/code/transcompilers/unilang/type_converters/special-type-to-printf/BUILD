package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "special_type_printf_specifier_getter", deps = [
"//code/transcompilers/unilang/type_converters/special-type-to-printf/settings:special_printf_specifier_settings",
"//code/transcompilers/unilang/type_converters/type_to_hungarian/qualifier_stripper:type_qualifier_stripper",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter:unilang_type_to_language_type_converter",
"//code/utilities/converters:lib",
])