#include <array>
#include <iostream>

int main()
{
	// question 1
	[[maybe_unused]] std::array<double, 365> temperchures {};
	// question 2
	constexpr std::array henlo { 'h', 'e', 'l', 'l', 'o' };

	std::cout << henlo[0] << '\n';

}
