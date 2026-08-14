#include <iostream>

enum Color
{
	black,
	red,
	blue,
	green,
	white,
	cyan,
	yellow,
	magenta,
};

int main()
{
	Color shirt { blue };

	std::cout << "Your shirt is " << shirt << '\n';	// what does this do?

	return 0;
}

