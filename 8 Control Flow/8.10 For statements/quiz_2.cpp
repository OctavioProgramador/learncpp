#include <iostream>

int main()
{
	int n{};

	std::cout << "Enter a number N got the sum of the numbers from 1 to N: ";
	std::cin >> n;

	int sum {0};
	for (int iii = 1; iii <= n; ++iii)
	{
		sum += iii;
	}
	std::cout << "The sum is " << sum << '\n';
}
