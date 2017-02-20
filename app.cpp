#include "controller.h"
#include "view.h"

/*
	Definition of functions
	int = integer, used to define numeric variables holding whole numbers
	void = return nothing
	std = standard

	= is to change/assign
	== is for comparison

	int	return type. What type of information returns when it is finished executing.
	The main() function servers three purposes;
	1. Application entry point (tells the OS to begin execution here).
	2. Creates the principal application instances/objects.
	3. Displays the View instance/object.
*/

	// C++ Notes

	// :: is for "member of" so that they have the information in that file
	// ; at end of a statement should only be located in the header file
	// cout == console out which is what displays in the black space

	// header (h) files are for declaring objects and what/where they are
	// source (cpp) files are what the object does

	// #include < > is part of the system/c
	// #include " " is what is created

	// for loop is used to know how many times it should be run
	// while loop keeps going until it hits the false statement

	// void in front of a function returns nothing
	// int in front of a function returns something

	// ~ = destoryer

	// Constructor function is for saving/storing information in class variable

	// && = and
	// || = or

	// * = pointer
	// First * (*) - Rows of the Array
	// Second * (**) - Columns of the Array (what's inside the element)

int main() {
	
	// Create an instance/object of the Controller class
	Controller controller;

	// Create an instance/object of the View class
	// (controller) to show where controller is located so it can communicate with it
	View view(controller);

	// Display the Main Menu
	view.displayMainMenu();
}