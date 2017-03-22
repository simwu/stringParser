#include "controller.h"
#include "view.h"

int main() {
	Controller controller;
	View view(controller);
	// Display the Main Menu
	view.displayMainMenu();
}
