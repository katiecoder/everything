package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

cpp_object(name = "type_relationship")

hcp(name = "import_relation_and_label_getter", deps = [
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/transcompilers/unilang/boilerplate_printer/header/relationships:type_relationship",
"//code/transcompilers/unilang/boilerplate_printer/header/relationships/derived_data:related_things_and_their_labels",
"//code/utilities/types/vectors/transformers:lib",
"//code/utilities/exits:lib",
])

hcp(name = "import_relationship_comment_deriver", deps = [
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/options/sections/import:import_options",
"//code/transcompilers/unilang/boilerplate_printer/header/relationships:import_relation_and_label_getter",
"//code/utilities/types/sets:lib",
"//code/utilities/types/vectors/transformers:lib",
"//code/utilities/types/vectors/converters:lib",
])