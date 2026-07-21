#include <iostream>

void fizzbuzz(int n){
	for (int iii{1}; iii <= n; ++iii)
	{
		if (iii % 3 == 0 && iii % 5 == 0){
			std::cout << "fizzbuzz\n";
		}
		else if (iii % 3 == 0) {
			std::cout << "fizz\n";
		}
		else if (iii % 5 == 0){
			std::cout << "buzz\n";
		}
		else {
			std::cout << iii << '\n';
		}
	}
}

int main()
{
	fizzbuzz(15);
	return 0;
}
