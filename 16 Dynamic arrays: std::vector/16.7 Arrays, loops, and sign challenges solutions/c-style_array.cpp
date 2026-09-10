#include <vector>
#include <iostream>

using Index = std::ptrdiff_t;

int main()
{
	std::vector arr { 9, 7, 5, 3, 1 };

	// in C++20 prefer std::size()
	auto length { static_cast<Index>(arr.size()) }; 
	for (auto index { length - 1}; 
		index >=0; 
		--index) 
	{
		std::cout << arr.data()[index] << ' ';
	}

	return 0;
}

