package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "compiler", deps = [
"//code/transcompilers/unilang/dependency_graph_creator:code_graph",
"//code/transcompilers/unilang/main:program_input",
"//code/transcompilers/unilang/f2si_frontend_compiler:hidl_options_getter",
"//code/transcompilers/unilang/f2si_frontend_compiler:hidl_exporter",
"//code/transcompilers/unilang/options/bazel:language_to_build_object",
"//code/transcompilers/unilang/user-frontend:language_guesser",
"//code/transcompilers/unilang/compiler-frontends/bazel:bazel_rule_exporter",
"//code/transcompilers/unilang/f2si_frontend_compiler:bazel_options_getter",
"//code/transcompilers/unilang/f2si_frontend_compiler:cpp_exporter",
"//code/utilities/types/vectors/operators:lib",
"//code/transcompilers/unilang/compiler-frontends/plant_uml_exporter:plant_uml_exporter",
"//code/transcompilers/unilang/compiler-frontends/html_table:html_table_exporter",
"//code/transcompilers/unilang/compiler-frontends/processing:processing_exporter",
"//code/transcompilers/unilang/compiler-frontends/cpp_test:cpp_test_exporter",
])