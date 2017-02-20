#include "controller.h"
#include "view.h"

int main() {
	
	// Create an instance/object of the Controller class
	Controller controller;

	// Create an instance/object of the View class
	// (controller) to show where controller is located so it can communicate with it
	View view(controller);

	// Display the Main Menu
	view.displayMainMenu();
}
