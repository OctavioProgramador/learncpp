#include <cstdio>
#include <vector>
#include <iostream>

// write your prinElement function here
void printElement(const auto& arr, int index)
{
	if (static_cast<std::size_t>(index) < std::size(arr) and index >= 0)
	{
		std::cout << "The element has value " << arr.at(static_cast<std::size_t>(index)) << '\n';
	}
	else
	{
		std::cout << "Invalid index\n";
	}
}

int main()
{
	std::vector v1 { 0, 1, 2,3, 4};
	printElement(v1, 2);
	printElement(v1, 5);

	std::vector v2 {1.1, 2.2, 3.3};
	printElement(v2, 0);
	printElement(v2, -1);

	return 0;
}
