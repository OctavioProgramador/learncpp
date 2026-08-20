#include <string>
#include <iostream>

class Ball{
	std::string m_name { "black" };
	double m_radius { 10.0 };
public:
	Ball() : Ball {"black", 10.0} {};
	Ball(std::string name): Ball{ name, 10.0} {};
	Ball(double radius): Ball{ "black", radius} {};
	Ball(std::string name, double radius)
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
