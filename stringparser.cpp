#include "stringparser.h"
#include <vector>

using namespace std;


StringParser::StringParser() {

}

StringParser::~StringParser() {

}

void StringParser::letterCounts(string text, int counts[]) {

	// Converts lowercase letters to uppercase
	for (int pos = 0; pos < text.length(); pos++) {

		text[pos] = toupper(text[pos]);
	}
	
	for (int index = 0; index < 26; index++) {

		counts[index] = 0;
	}
	//Begins the count for letters
	for (int pos = 0; pos < text.length(); pos++) {
		if (text[pos] >= 65 && text[pos] <= 90) {
		
			counts[text[pos] - 65]++;
		}
	}
}

int StringParser::wordCount(string text) {

	int count		 = 0;

	int wordLength	 = 0;

	if (text.length() > 0) {
		
		for (int pos = 0; pos < text.length(); pos++) {

			if (text[pos] == ' ' || text[pos] == ',' || text[pos] == ';' || text[pos] == '.' || text[pos] == '!' || text[pos] == ' ? ' || text[pos] == '"' || text[pos] == ':' || text[pos] == '@' 
				|| text[pos] == '#' || text[pos] == '$' || text[pos] == '%' || text[pos] == '^' || text[pos] == '*' || text[pos] == '(' || text[pos] == ')' || text[pos] == '-' || text[pos] == '_' 
				|| text[pos] == '+' || text[pos] == '=' || text[pos] == '<' || text[pos] == '>' || text[pos] == ' /' || text[pos] == '}' || text[pos] == '{' || text[pos] == '[' || text[pos] == ']' 
				|| text[pos] == '`' || text[pos] == '~') {

				if (wordLength > 0) {
					count++;
					wordLength = 0;
				}
			}
			else {
				wordLength++;
			}
		}
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
