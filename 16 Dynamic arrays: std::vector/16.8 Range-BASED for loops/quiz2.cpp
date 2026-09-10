#include <vector>
#include <string_view>
#include <iostream>

template<typename T>
bool isValueInArray(const std::vector<T> & arr, T elementToFind){
	for (const T& element : arr) {
		if (element == elementToFind)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	std::vector<std::string_view> words {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

	std::cout << "Enter a name: ";
	std::string name {};
	std::cin >> name;


	if (isValueInArray(words, std::string_view {name}))
		std::cout << name << " was found.\n"; 
	else
		std::cout << name << " was not found.\n"; 
}

