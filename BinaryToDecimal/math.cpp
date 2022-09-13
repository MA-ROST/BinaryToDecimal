#include <iostream> // for std::cout & std::cin
#include <limits>   // for std::numeric_limits
#include <string>   // for std::string

// To ensure our forward declaration matches implementation:
#include "math.h"

int toInt(char input) {
	input -= 48;
	return input;
}

int toDec(std::string number) {
	int output = 0;

	for (int i{ 0 }; i < number.length(); i++) {
		int minus = number.length() - i - 1;
		output += toInt(number[i]) * std::pow(2, minus);
	}
	return output;
}