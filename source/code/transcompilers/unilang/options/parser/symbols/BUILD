package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook:core.bzl", "hcp","cpp_object")

hcp(name = "token_attribute_settings",
deps = [
"//code/transcompilers/unilang/options/parser/symbols:token_meta_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols/import:token_import_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols:token_macro_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols:token_namespace_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols:token_inheritance_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols:token_enumerated_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols/method:token_method_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols:token_typedef_attribute_settings",
"//code/transcompilers/unilang/options/parser/symbols/data_member:token_data_member_attribute_settings",
])
hcp(name = "token_enumerated_attribute_settings", deps=["//code/transcompilers/unilang/options/parser/symbols/shared:token_access_attribute_settings"])
hcp(name = "token_inheritance_attribute_settings", deps=["//code/transcompilers/unilang/options/parser/symbols/shared:token_access_attribute_settings"])
hcp(name = "token_macro_attribute_settings", deps=["//code/transcompilers/unilang/options/parser/symbols/shared:token_access_attribute_settings"])
hcp(name = "token_meta_attribute_settings")
hcp(name = "token_namespace_attribute_settings")
hcp(name = "token_typedef_attribute_settings", deps=["//code/transcompilers/unilang/options/parser/symbols/shared:token_access_attribute_settings"])