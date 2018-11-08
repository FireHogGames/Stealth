#include <Stealth.h>

class Sandbox : public Stealth::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Stealth::Application* Stealth::CreateApplication() {
	return new Sandbox();
}