package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

cpp_object(name = "define_check_method")
hcp(name = "define_check_settings",
deps = ["define_check_method"
])
hcp(name = "define_check_end_comment_settings",
deps = ["//code/transcompilers/unilang/options/comment/language_default:comment_style"
])