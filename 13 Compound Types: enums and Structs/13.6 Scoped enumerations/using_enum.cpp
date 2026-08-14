#include <iostream>
#include <string_view>

enum class Color // "enum class" defines this as a scoped enumeration rather than an unescoped enumeration
{
	black,
	red,
	blue,
};

constexpr std::string_view getColor(Color color)
{
	using enum Color;

	switch (color) {
	case black: return "black";	// note: black instead of Color::black
	case red:   return "red";	
	case blue:  return "blue";
	default:    return "???";
	}
}

int main()
{
	Color shirt{ Color::blue };
	std::cout << "Your shirt is " << getColor(shirt) << '\n';
	return 0;
}


