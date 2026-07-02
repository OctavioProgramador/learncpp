#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"

std::bitset<4> rotl(std::bitset<4> bits)
{
	// your code here
	if (bits.test(3))
	{
		return (bits << 1).set(0);
	}else{
		return (bits << 1);
	}
}

// No use of test() nor set() functions
std::bitset<4> rotl_2(std::bitset<4> bits)
{
	std::bitset<8> bit_set_8 = bits.to_ullong();
	bit_set_8 <<= 1;
	std::bitset<4> left_side = (bit_set_8 >> 4).to_ullong();
	return (bits << 1) | left_side;
}

int main()
{
	std::bitset<4> bits1 { 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2 { 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
