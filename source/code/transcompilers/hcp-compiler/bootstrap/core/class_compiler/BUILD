package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "lib",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.hpp"]),
    deps = ["//code/transcompilers/hcp-compiler/bootstrap/core/structure:lib",
	"//code/utilities/types/strings/observers/other:lib",
    "//code/utilities/types/strings/transformers/removing:lib",
    "//code/utilities/types/strings/transformers/casing:lib",
    "//code/utilities/types/wstrings/transformers/trimming:lib",
    "//code/utilities/types/wstrings/transformers/other:lib",
    "//code/utilities/types/strings/observers/path:lib",
	"//code/utilities/converters:lib"
]
)
