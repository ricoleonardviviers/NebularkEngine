workspace "Nebulark"
	architecture "x64"

	configurations { "Debug", "Release", "Dist" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


project "Nebulark"
	location "Nebulark"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		buildoptions { "/utf-8" }


		defines
		{
			"NA_PLATFORM_WINDOWS",
			"NA_BUILD_DLL",
			"SPDLOG_WCHAR_TO_UTF8_SUPPORT"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "NA_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "NA_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "NA_DIST"
		optimize "On"


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	includedirs
	{
		"Nebulark/src",
		"Nebulark/vendor/spdlog/include",
	}
	links { "Nebulark" }
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		buildoptions { "/utf-8" }


		defines
		{
			"NA_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "NA_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "NA_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "NA_DIST"
		optimize "On"