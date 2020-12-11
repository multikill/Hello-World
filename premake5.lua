workspace "Hello World Solution"
    configurations { "Debug", "Release" }
    platforms { "x64", "x86"}
    defaultplatform "x64"

outputdir = "%{cfg.buildcfg}_%{cfg.architecture}"

project "MainProject"
    location "%{prj.name}"
    kind "ConsoleApp"
    language "C++"
    files { "**.h", "**.cpp", "**.rc", "**.ico" }

    targetdir ("bin/" .. outputdir .. "_%{prj.name}")
    objdir ("bin-obj/" .. outputdir .. "_%{prj.name}")
    cppdialect "C++17"

    filter { "configurations:Debug" }
        defines { "DEBUG" }
        symbols "On"

    filter { "configurations:Release" }
        defines { "NDEBUG" }
        optimize "On"

    filter { "platforms:x64"}
        architecture "x86_64"
    
    filter { "platforms:x86"}
        architecture "x86"