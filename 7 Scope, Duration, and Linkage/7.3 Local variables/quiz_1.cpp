#include <iostream>

int main()
{

	std::cout << "Enter an integer: ";
	int smaller{};
	std::cin >> smaller;

	std::cout << "Enter a larger integer: ";
	int larger{};
	std::cin >> larger;

	std::cout << "Swapping the values\n";

	if (smaller > larger)
	{	
		int temp = larger;
		larger = smaller;
		smaller = temp;
	}

	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The larger value is " << larger << '\n';
}
