#include <bitset>
#include <iostream>

int main()
{
	std::bitset<4> b4 { 0b100 }; // b4 is 0100
	std::bitset<8> b8 { 0b100 }; // b4 is 0000 0100

	std::cout << "Initial values:\n";
	std::cout << "Bits: " << b4 << ' ' << b8 << '\n';
	std::cout << "Vaues: " << b4.to_ulong() << ' ' << b8.to_ulong() << '\n';

	b4 = ~b4; // flip b4 to 1011
	b8 = ~b8; // flip b8 to 1111 1011

	std::cout << "After bitwise NOT:\n";


