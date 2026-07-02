#include <cstdint>
#include <iostream>

int main()
{

	[[maybe_unused]] constexpr std::uint8_t mask0 { 0b0000'0001 }; // represents bits 0 
	[[maybe_unused]] constexpr std::uint8_t mask1 { 0b0000'0010 }; // represents bits 1 
	[[maybe_unused]] constexpr std::uint8_t mask2 { 0b0000'0100 }; // represents bits 2 
	[[maybe_unused]] constexpr std::uint8_t mask3 { 0b0000'1000 }; // represents bits 3 
	[[maybe_unused]] constexpr std::uint8_t mask4 { 0b0001'0000 }; // represents bits 4 
	[[maybe_unused]] constexpr std::uint8_t mask5 { 0b0010'0000 }; // represents bits 5 
	[[maybe_unused]] constexpr std::uint8_t mask6 { 0b0100'0000 }; // represents bits 6 
	[[maybe_unused]] constexpr std::uint8_t mask7 { 0b1000'0000 }; // represents bits 7 

	std::uint8_t flags { 0b0000'0101 }; // 8 bits in size means room for 8 flags
	
	std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

	flags |= mask1; // turn on a bit
	
	std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

	return 0;
}
