#include <iostream>

void fizzbuzzpop(int n){
	for (int iii{1}; iii <= n; ++iii)
	{
		if (iii % 3 == 0) {
			std::cout << "fizz";
		}
		if (iii % 5 == 0){
			std::cout << "buzz";
		}
		if (iii % 7 == 0) {
			std::cout << "pop";
		}
		if (iii % 3 != 0 && iii % 5 != 0 && iii % 7 != 0){
			std::cout << iii;
		}
		std::cout << "\n";
	}
}

int main()
{
	fizzbuzzpop(150);
	return 0;
}
