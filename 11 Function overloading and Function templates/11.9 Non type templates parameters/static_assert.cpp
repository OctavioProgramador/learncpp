#include <cmath>
#include <iostream>

template <double D>
double getSqrt()
{
	static_assert(D >= 0.0,"getSqrt(): D must be non-negative");
	if constexpr (D >= 0)
		return std::sqrt(D);

	return 0.0;
}

int main()
{
	std::cout << getSqrt<5.0>() << '\n';
	std::cout << getSqrt<-5.0>() << '\n';
	return 0;
}


