package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "json_function_name")

hcp(name = "individual_json_function_name_getter", deps = ["json_function_name"])

hcp(name = "json_function_settings", deps = [
"json_function_name",
"individual_json_function_name_getter",
])