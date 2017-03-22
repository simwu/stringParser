#include <iostream>
#include <string>
#include "View.h"
#include <vector>

using namespace std;

View::View(Controller &controller) {

	this->controller = controller;
}

View::~View() {

}

void View::displayMainMenu() {

	char menuOption = ' ';

	while (menuOption != 'X') {

		cout << "String Parser Menu" << endl << endl;

		cout << "1. Letter Count" << endl;
		cout << "2. Word Count" << endl;
		cout << "3. Word List" << endl;
		cout << "X. Exit" << endl << endl;

		cout << "Select a Menu option: ";

		cin >> menuOption;
		
		if (!cin.good()) {
			menuOption = 0;
		}

		// clears the cin keyboard buffer
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		
		cout << endl;

		// Convert Menu option to uppercase
		menuOption = toupper(menuOption);

		// Process the user request
		switch (menuOption) {

			case '1': {
				
				displayLetterCounts();
				break;
			}
			case '2': {

				displayWordCount();
				break;
			}
			case '3': {

				displayWordList();
				break;
			}
			case 'X': {

				cout << endl << "Thank you for using the String Parser" << endl << endl;
				break;
			}
			default: {

				cout << endl << "Invalid Menu Option" << endl << endl;
				break;
			}
		}
	}
}

void View::displayLetterCounts() {

	string text = "";
	int	counts[26];

	cout << "Letter Counts" << endl << endl;

	cout << "Enter some text: ";
	getline(cin, text);

	controller.letterCounts(text, counts);
	
	for (int index = 0; index < 26; index++) {

		cout << (char)(index + 65) << ": " << counts[index] << endl;
	}
}

void View::displayWordCount() {

	string text = "";
	int	count = 0;

	cout << "Word Count" << endl << endl;

	cout << "Enter some text: ";
	getline(cin, text);

	count = controller.wordCount(text);

	cout << count << "word(s) found" << endl;
}

void View::displayWordList() {

	string text = "";
	vector<string> words;

	cout << "Word List" << endl << endl;

	cout << "Enter some text: ";
	getline(cin, text);

	controller.wordList(text, words);

	for (int index = 0; index < words.size(); index++) {

		cout << words.at(index) << endl;
	}

	// Empty the words vector to prevent accumulating word lists
	words.clear();
}	
