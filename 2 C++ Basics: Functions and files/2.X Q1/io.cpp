#include <iostream>
#include "io.h"

int readNumber() {
	int input{};
	std::cout << "Enter a number: ";
	std::cin >> input;
	return input;
}

void writeAnswer(int number) {
	std::cout << "The answer of the sum is: " << number << '\n';
}