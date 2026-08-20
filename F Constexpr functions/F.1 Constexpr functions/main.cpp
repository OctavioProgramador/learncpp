#include <iostream>

constexpr double calCircunference(double radius)
{
	constexpr double pi { 3.14159265359 };
	return 2.0 * pi * radius;
}

int main(){
	constexpr double circunference { calCircunference(3.0) }; // compile error
	std::cout << "Our circle has circunference " << circunference << '\n';
	return 0;
}
