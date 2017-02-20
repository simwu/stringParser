#include <string>
#include "controller.h"
#include <vector>

using namespace std;

Controller::Controller() {

}

Controller::~Controller() {

}

void Controller::letterCounts(string text, int counts[]) {

	stringparser.letterCounts(text, counts);
}

int Controller::wordCount(string text) {

	return stringparser.wordCount(text);
}

void Controller::wordList(string text, vector<string> &words) {

	stringparser.wordList(text, words);
}
