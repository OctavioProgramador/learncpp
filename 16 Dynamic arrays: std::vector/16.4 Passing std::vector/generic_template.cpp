#include <iostream>
#include <vector>

template<typename T>
void passByRef(const T& arr) // will accept any type of object that has an overload
			     // operatorp[]
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::vector primes{ 2, 3, 5, 7, 11 };
	passByRef(primes);

	std::vector dbl{ 1.1, 2.2, 3.3 };
	passByRef(dbl); // ok: compiler will instantiate passByRef(const std::vector<double>&)

	return 0;
}
