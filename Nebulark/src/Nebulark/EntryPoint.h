#pragma once

#ifdef NA_PLATFORM_WINDOWS

extern Nebulark::Application* Nebulark::CreateApplication();

int main(int argc, char** argv)
{
	Nebulark::Log::Init();
	NA_CORE_WARN("Initialized Log!");
	int a = 5;
	NA_CORE_INFO("Hello! var{0}", a);

	auto app = Nebulark::CreateApplication();
	app->Run();
	delete app;
}

#endif // NA_PLATFORM_WINDOWS
