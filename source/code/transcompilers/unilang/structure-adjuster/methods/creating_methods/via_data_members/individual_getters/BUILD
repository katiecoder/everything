package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "boolean_expression_creator", deps = [
"//code/transcompilers/unilang/structure/sections/data_member:data_member_item",
"//code/transcompilers/unilang/options/sections/data_member:data_member_options",
"//code/transcompilers/unilang/structure/sections/method:method_item",
"//code/transcompilers/unilang/options/manipulation/methods/via_data_member:data_member_utility_function_options",
"//code/transcompilers/unilang/options/language-specific:c_language_version",
"//code/transcompilers/unilang/type_converters/special-type-to-comparison/settings:special_comparison_type",
"//code/utilities/relational-operator:relational_operator",
"//code/utilities/relational-operator:relational_operator_converter",
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/type_converters/special-type-to-comparison:special_type_comparison_getter",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters/printf:printf_code_generator",
"//code/utilities/types/strings/observers/other:lib",
])

hcp(name = "printable_function_getter", deps = [
"//code/transcompilers/unilang/structure/sections/data_member:data_member_item",
"//code/transcompilers/unilang/options/sections/data_member:data_member_options",
"//code/transcompilers/unilang/structure/sections/method:method_item",
"//code/transcompilers/unilang/options/manipulation/methods/via_data_member:data_member_utility_function_options",
"//code/transcompilers/unilang/type_converters/special-type-to-printf/settings:special_printf_type",
"//code/transcompilers/unilang/options/language-specific:c_language_version",
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/type_converters/type-to-printf-specifier:printf_specifier_getter",
"//code/transcompilers/unilang/type_converters/special-type-to-printf:special_type_printf_specifier_getter",
"//code/transcompilers/unilang/type_converters/type-to-printf-specifier/settings:printf_specifier_settings",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters/printf:printf_code_generator",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
])