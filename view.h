#pragma once

#include "controller.h"

class View
{
	private:

		Controller controller;

	public:

		// Function prototype statements

		// Constructor function. Expect a Controller refernece: The ADDRESS ( & ) of the Controller object.
		View(Controller &);

		// Destructor function
		~View();

		void displayMainMenu();
		void displayLetterCounts();
		void displayWordCount();
		void displayWordList();
};	