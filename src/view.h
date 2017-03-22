#pragma once

#include "controller.h"

class View
{
	private:
		Controller controller;

	public:
		View(Controller &);
		~View();

		void displayMainMenu();
		void displayLetterCounts();
		void displayWordCount();
		void displayWordList();
};	
