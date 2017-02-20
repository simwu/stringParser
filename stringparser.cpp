#include "stringparser.h"
#include <vector>

using namespace std;


StringParser::StringParser() {

}

StringParser::~StringParser() {

}

void StringParser::letterCounts(string text, int counts[]) {

	// pos = position
	// index the same variable as position

	// Converts lowercase letters to uppercase
	for (int pos = 0; pos < text.length(); pos++) {

		text[pos] = toupper(text[pos]);
	}

	// When processing strings or arrays in a for loop,
	// ALWAYS start at zero and check for LESS THAN the length of the string or array.
	
	// Resetting the counter of index/position to 0 for the next loop
	for (int index = 0; index < 26; index++) {

		counts[index] = 0;
	}
	//Begins the count for letters
	for (int pos = 0; pos < text.length(); pos++) {

		// text[pos] >= 'A' && text[pos] <= 'Z'

		if (text[pos] >= 65 && text[pos] <= 90) {
		
			counts[text[pos] - 65]++;
		}
	}
}

int StringParser::wordCount(string text) {

	int count		 = 0;

	int wordLength	 = 0;

	if (text.length() > 0) {
		
		// Prevents Gotcha #1: Last word not counted if not followed by a delimiter

		/*
		// && is and
		if (text[text.length - 1] != ' ' && text[text.length - 1] != ',' && text[text.length - 1] != '.' && text[text.length - 1] != '!' && text[text.length - 1] != '?') {

			text = text + ' ';
		*/
		for (int pos = 0; pos < text.length(); pos++) {

			// || is or
			if (text[pos] == ' ' || text[pos] == ',' || text[pos] == ';' || text[pos] == '.' || text[pos] == '!' || text[pos] == ' ? ' || text[pos] == '"' || text[pos] == ':' || text[pos] == '@' 
				|| text[pos] == '#' || text[pos] == '$' || text[pos] == '%' || text[pos] == '^' || text[pos] == '*' || text[pos] == '(' || text[pos] == ')' || text[pos] == '-' || text[pos] == '_' 
				|| text[pos] == '+' || text[pos] == '=' || text[pos] == '<' || text[pos] == '>' || text[pos] == ' /' || text[pos] == '}' || text[pos] == '{' || text[pos] == '[' || text[pos] == ']' 
				|| text[pos] == '`' || text[pos] == '~') {

				// Solves Gotcha #1 and #2 (multiple delimiters in a row)
				if (wordLength > 0) {

					count++;

					wordLength = 0;
				}
			}
			else {
		
				// Solves Gotcha #1 and #2 (multiple delimiters in a row)
				wordLength++;
			}
		}

		// Solves Gotcha #2 (multiple delimiters in a row)
		if (wordLength > 0) {

			count++;
		}
	}

	return count;
}

void StringParser::wordList(string text, vector<string> &words) {

	int wordLength	 = 0;
	int wordCount	 = 0;

	if (text.length() > 0) {

		for (int pos = 0; pos < text.length(); pos++) {

			if (text[pos] == ' ' || text[pos] == ',' || text[pos] == ';' || text[pos] == '.' || text[pos] == '!' || text[pos] == '?' || text[pos] == '"' || text[pos] == ':' || text[pos] == '@' 
				|| text[pos] == '#' || text[pos] == '$' || text[pos] == '%' || text[pos] == '^' || text[pos] == '*' || text[pos] == '(' || text[pos] == ')' || text[pos] == '-' || text[pos] == '_' 
				|| text[pos] == '+' || text[pos] == '=' || text[pos] == '<' || text[pos] == '>' || text[pos] == ' /' || text[pos] == '}' || text[pos] == '{' || text[pos] == '[' || text[pos] == ']' 
				|| text[pos] == '`' || text[pos] == '~') {

				if (wordLength > 0) {

					words.insert(words.begin() + wordCount, text.substr(pos - wordLength, wordLength));
				
					wordCount++;

					wordLength = 0;
				}
			}
			else {


				wordLength++;
			}
		}

		if (wordLength > 0) {

			words.insert(words.begin() + wordCount, text.substr(text.length() - wordLength, wordLength));
		}
	}
}