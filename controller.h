#pragma once

#include "stringparser.h"
#include <string>
#include <vector>

using namespace std;

class Controller
{
	private:
		// Declare a class variable type StringParser and the compiler will create a StringParser object automatically
		StringParser	stringparser;

	public:
		Controller();
		~Controller();

		// & = Address of _______
		void letterCounts(string text, int counts[]);
		int wordCount(string text);
		void wordList(string text, vector<string> &words);
};