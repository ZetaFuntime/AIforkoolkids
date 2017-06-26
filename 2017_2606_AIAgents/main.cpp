#include "_2017_2606_AIAgentsApp.h"

int main() {
	
	// allocation
	auto app = new _2017_2606_AIAgentsApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}