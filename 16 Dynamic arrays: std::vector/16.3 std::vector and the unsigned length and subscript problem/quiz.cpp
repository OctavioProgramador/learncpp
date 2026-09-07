#include <vector>
#include <iostream>

int main()
{
	std::vector letters {'h', 'e', 'l', 'l', 'o'};
	std::cout << "The array has " << std::size(letters) << " elements.\n";
	std::cout << letters[1] << letters.at(1) << '\n';

}
