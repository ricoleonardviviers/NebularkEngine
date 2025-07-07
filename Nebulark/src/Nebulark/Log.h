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

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Nebulark
{
	class NEBULARK_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define NA_CORE_TRACE(...) :: Nebulark::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NA_CORE_INFO(...)  :: Nebulark::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NA_CORE_WARN(...)  :: Nebulark::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NA_CORE_ERROR(...) :: Nebulark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NA_CORE_FATAL(...) :: Nebulark::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define NA_TRACE(...) :: Nebulark::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NA_INFO(...)  :: Nebulark::Log::GetClientLogger()->info(__VA_ARGS__)
#define NA_WARN(...)  :: Nebulark::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NA_ERROR(...) :: Nebulark::Log::GetClientLogger()->error(__VA_ARGS__)
#define NA_FATAL(...) :: Nebulark::Log::GetClientLogger()->fatal(__VA_ARGS__)