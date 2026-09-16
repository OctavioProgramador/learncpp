#include <iostream>
#include <vector>

int main()
{
	std::vector v { 0, 1 ,2};	// Create vector with 3 elements
	std::cout << "The length is: " << v.size() << '\n';

	v.resize(5); // resize to 5 elements
	std::cout << "The length is: " << v.size() << '\n';

	for (auto i : v) {
		std::cout << i << ' ';
	}

	std::cout << '\n';
}
