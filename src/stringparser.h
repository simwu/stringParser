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
	
		void letterCounts(string text, int counts[]);
		int wordCount(string text);
		void wordList(string text, vector<string> &words);
};
