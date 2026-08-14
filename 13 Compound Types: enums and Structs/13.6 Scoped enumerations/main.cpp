#include <iostream>

int main()
{
	enum class Color // "enum class" defines this as a scoped enumeration rather than an unescoped enumeration
	{
		red,
		blue,
	};


	Color shirt { Color::red };	// note: red is not directly accesible, we have to use Color::red

	if (shirt == Color::red) { std::cout << "The shirt is red!\n"; }
	else if (shirt == Color::blue) { std::cout << "The shirt is blue!\n"; }
	return 0;
}
