// Copyright 2025 Rico Leonard Viviers
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


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
