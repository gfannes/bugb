set_languages("c++20")
add_rules("mode.release") -- Enable with `xmake f -m release`
add_rules("mode.debug")   -- Enable with `xmake f -m debug`
add_requires("catch2")

target("gubg")
    set_kind("static")
    add_files("src/**.cpp")
    add_includedirs("src", {public=true})

target("unit_tests")
    set_kind("binary")
    add_files("test/**.cpp")
    add_deps("gubg")
    add_packages("catch2")
