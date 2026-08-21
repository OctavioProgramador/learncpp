#include <iostream>

class Fraction
{
private:
	int m_numerator{ 0 };
	int m_denominator{ 0 };

public:
	// Default constructor
	Fraction(int numerator=0, int denominator=1)
		: m_numerator{ numerator}, m_denominator{denominator}
	{ }

	// Copy constructor
	Fraction(const Fraction& fraction)
		// Initialize our members using the corresponding member of the parameter
		: m_numerator{ fraction.m_numerator }
		, m_denominator{ fraction.m_denominator }
	{
		std::cout << "Copy constructor called\n";	// just to prove it works
	}

	void print() const 
	{
		std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")\n";
	}
};

void printFranction(Fraction f) // f is pass by value
{
	f.print();
}

Fraction generateFraction(int n, int d)
{
	Fraction f{n, d};
	return f;
}

int main()
{
	Fraction f { generateFraction(1, 2)}; // Franction is returned using copy constructor
	printFranction(f); // f is copied into the function parameter using copy constructor
	return 0;
}
