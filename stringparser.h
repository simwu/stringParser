#pragma once

#include <string>
#include <vector>
using namespace std;

class StringParser
{
	private:

	public:
		StringParser();
		~StringParser();

		// Actual variable names are optional, used here for documentation purposes
		void letterCounts(string text, int counts[]);
		int wordCount(string text);
		void wordList(string text, vector<string> &words);
};