package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

cpp_object(name = "interval_inclusion_type")

hcp(name = "interval_constraint", deps = [
"//code/transcompilers/unilang/constraint_exporter/interval_constraint:interval_point",
])

hcp(name = "interval_point", deps = [
"//code/transcompilers/unilang/constraint_exporter/interval_constraint:interval_inclusion_type",
"//code/transcompilers/unilang/parser:token_value",
])