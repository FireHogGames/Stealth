#pragma once

#include "Core.h"

namespace Stealth {

	class STEALTH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in a CLIENT
	Application* CreateApplication();

}

