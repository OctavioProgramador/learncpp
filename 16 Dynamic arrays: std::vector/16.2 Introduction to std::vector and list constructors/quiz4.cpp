#include <vector>
#include <iostream>

int main(){
	std::cout << "Enter 3 integers: ";
	std::vector<int> integers (3);
	for (int iii = 0; iii < 3; ++iii)
	{
		std::cin >> integers[static_cast<std::size_t>(iii)];
	}
	int sum{};
	int product {1};
	for(int jjj = 0; jjj < 3; ++jjj)
	{
		sum += integers[static_cast<std::size_t>(jjj)];
		product *= integers[static_cast<std::size_t>(jjj)];
	}
	std::cout << "The sum is: " << sum << '\n';
	std::cout << "The product is: " << product << '\n';

}
