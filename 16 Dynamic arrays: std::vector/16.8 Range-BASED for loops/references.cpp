#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::vector<std::string> words {"peter", "likes", "frozen", "yogurt"};

	for (auto const & word : words) {
		std::cout << word << ' ';
	}

	std::cout << '\n';
}
