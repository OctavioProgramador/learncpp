#include <cstdint>
#include <iostream>

int main()
{
	std::int16_t x{}; // x is 16 bits, hold from -32768 to 32767
	std::cout << "Enter a number between -32768 and 32767: ";
	std::cin >> x;

	std::int16_t y{}; // x is 16 bits, hold from -32768 to 32767
	std::cout << "Enter a number between -32768 and 32767: ";
	std::cin >> y;

	std::cout << "The sum is: " << x + y << '\n';
	return 0;
}
