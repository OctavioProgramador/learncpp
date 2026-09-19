#include <array>
#include <iostream>

int main()
{
	constexpr std::array henlo{'h', 'e', 'l', 'l', 'o'};	
	std::cout << henlo[1] << henlo.at(1) << std::get<1>(henlo);
}
