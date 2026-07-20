#include <iostream>

int main()
{
	char letter {'a'};
	while(letter <= 'z')
	{
		std::cout << letter << ' ';
		letter++;
	}
	std::cout << '\n';
}
