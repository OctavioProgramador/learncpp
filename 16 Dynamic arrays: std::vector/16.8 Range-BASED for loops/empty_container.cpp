#include <vector>
#include <iostream>

int main()
{
	std::vector<int> empty {};

	for (int num : empty) {	// iterate over array fibonacci and copy each value into num
		std::cout << "Hi mom!\n" << num;
	}

	std::cout << '\n';
}
