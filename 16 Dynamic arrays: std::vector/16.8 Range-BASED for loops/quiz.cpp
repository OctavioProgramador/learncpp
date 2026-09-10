#include <vector>
#include <ranges>
#include <string_view>
#include <iostream>

int main()
{
	std::vector<std::string_view> words {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

	std::cout << "Enter a name: ";
	std::string name {};
	std::cin >> name;

	for (std::string_view word : words) {
		if (word == name)
		{
			std::cout << name << " was found.\n"; 
			return 0;
		}
	}

	std::cout << name << " was not found.\n"; 
}
