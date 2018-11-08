#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stealth::Application* Stealth::CreateApplication();

int main(int argc, char** argv) {
	printf("Stealth engine Beta edition, 0.0.0!!");
	auto app = Stealth::CreateApplication();
	app->Run();
	delete app;
}

#endif