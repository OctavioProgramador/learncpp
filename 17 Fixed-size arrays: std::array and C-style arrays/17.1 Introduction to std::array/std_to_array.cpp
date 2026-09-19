#include <array>
#include <iostream>

int main()
{
	// Specify type and size
	constexpr auto myArray1 { std::to_array<int, 5>({9, 7, 5,3, 1}) };
	// Specify type only, deduce size
	constexpr auto myArray2 { std::to_array<int>({9, 7, 5,3, 1}) };
	// Specify type and size
	constexpr auto myArray3 { std::to_array({9, 7, 5,3, 1}) };

	return 0;
}
