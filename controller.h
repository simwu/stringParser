#pragma once

#include "stringparser.h"
#include <string>
#include <vector>

using namespace std;

class Controller
{
	private:
		StringParser	stringparser;

	public:
		Controller();
		~Controller();

		void letterCounts(string text, int counts[]);
		int wordCount(string text);
		void wordList(string text, vector<string> &words);
};
