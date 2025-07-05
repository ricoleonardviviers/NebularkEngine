#pragma once

#ifdef NA_PLATFORM_WINDOWS

extern Nebulark::Application* Nebulark::CreateApplication();

int main(int argc, char** argv)
{
	printf("Nebulark Engine\n");
	auto app = Nebulark::CreateApplication();
	app->Run();
	delete app;
}

#endif // NA_PLATFORM_WINDOWS
