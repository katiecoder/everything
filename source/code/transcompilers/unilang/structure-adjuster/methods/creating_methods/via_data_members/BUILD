package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "data_member_utility_function_getter", deps = [
"//code/transcompilers/unilang/structure/sections/data_member:data_member_item",
"//code/transcompilers/unilang/options/sections/data_member:data_member_options",
"//code/transcompilers/unilang/structure-printer:doxygen_block_printer",
"//code/transcompilers/unilang/structure-printer:function_declaration_location",
"//code/transcompilers/unilang/options/manipulation/methods/via_data_member:data_member_utility_function_options",
"//code/transcompilers/unilang/options/language-specific:c_language_version",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters:printable_function_getter",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters/serialization:serializable_function_getter",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters/transition:transition_function_getter",
"//code/transcompilers/unilang/structure-adjuster/methods/creating_methods/via_data_members/individual_getters/comparison:comparison_function_getter",
])