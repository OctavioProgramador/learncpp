#include <string>
#include <iostream>

// Write the function getQuantityPhrase() here

std::string getQuantityPhrase(const int quantity)
{
	std::string descriptor {};
	if (quantity < 0) descriptor = "negative";
	else if (quantity == 0) descriptor = "no";
	else if (quantity == 1) descriptor = "a single";
	else if (quantity == 2) descriptor = "a couple";
	else if (quantity == 3) descriptor = "a few";
	else if (quantity > 3) descriptor = "many"; 
	return descriptor;
}

// Write the function getApplesPluralized() here

std::string getApplesPluralized(const int apple_number)
{
	return (apple_number == 1) ? "apple" : "apples";
}


int main()
{
	constexpr int maryApples { 3 };

	std::cout << "Mary has " << getQuantityPhrase(maryApples) << " " 
		<< getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";
	int numApples{};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples) << " " <<
		getApplesPluralized(numApples) << ".\n";

	return 0;
}
