#include <string>
#include <iostream>

class Ball{
	std::string m_name { "black" };
	double m_radius { 10.0 };
public:
	Ball(double radius): Ball{ "black", radius} {};
	Ball(std::string name = "black", double radius = 10.0)
		: m_name { name }, m_radius { radius }
	{ 
		std::cout << "Ball(" << m_name << ", " << m_radius << ")\n";
	}
};

int main()
{
	Ball def{};
	Ball blue{ "blue" };
	Ball twenty{ 20.0 };
	Ball blueTwenty{ "blue", 20.0 };

	return 0;
}
