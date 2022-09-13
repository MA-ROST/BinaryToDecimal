#include <iostream> // for std::cout & std::cin
#include <limits>   // for std::numeric_limits
#include <string>   // for std::string

// To ensure our forward declaration matches implementation:
#include "userInput.h"

void clearCin() {
	// No number found so clear the cin error flag:
	std::cin.clear();
	// Ignore remaining user input to reset stream for the next try.
	std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
}

bool isValid(const std::string input) {
	for (int i{ 0 }; i < input.length(); i++) {
		if (input[i] != '0' && input[i] != '1') {
			clearCin();
			return false;
		}
	}

	return true;
}

std::string cinStr(const std::string question) {
	std::string input;

	do {
		std::cout << question;
		std::cin >> input;
		if (isValid(input)) { break; }
	} while (true);

	return input;
}