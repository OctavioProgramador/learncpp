#include <array>

int main()
{
	std::array<int, 6> fibonaci = { 0, 1, 1, 2, 3, 5 };	// copy-list initialization
														// using braced list
	std::array<int, 5> prime { 2, 3, 5, 7, 11 };	// list initialization using 
													// braced list (preferred)
	return 0;
}
