#include <bitset>
#include <iostream>

int main()
{
	unsigned int x { 0b0100 };
	x = x << 1; // use operator<< for left shift
	std::cout << std::bitset<4>{ x } << '\n'; // use operator<< for output
	
	return 0;
}
