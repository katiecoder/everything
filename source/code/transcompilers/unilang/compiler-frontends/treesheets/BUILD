package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "treesheets_exporter", deps = [
"//code/transcompilers/unilang/structure:structure",
"//code/transcompilers/unilang/structure:inlined_structures",
"//code/transcompilers/unilang/options/language-specific:treesheets_options",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/transcompilers/unilang/structure-printer:struct_derivers",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/shell:lib",
"//code/utilities/filesystem/paths:lib",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/options/manipulation:case_adjustment_settings",
"//code/transcompilers/unilang/structure-adjuster:casing_adjuster",
"//code/utilities/types/vectors/observers:lib",
"//code/transcompilers/unilang/compiler-frontends/xml:xml_exporter",
])