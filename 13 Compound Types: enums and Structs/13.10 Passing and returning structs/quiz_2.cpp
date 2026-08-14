#include <iostream>

struct Fraction {
	int numerator {};
	int denominator {};
};

std::ostream& operator<<(std::ostream & out, const Fraction& fraction)
{
	out << fraction.numerator << '/' << fraction.denominator;
	return out;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
	return Fraction{ f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

void readFractionFromInput(Fraction & fraction)
{
	int numerator {};
	std::cout << "Enter a value for the numerator: ";
	std::cin >> numerator;

	int denominator {};
	std::cout << "Enter a value for the denominator: ";
	std::cin >> denominator;

	fraction.numerator = numerator;
	fraction.denominator = denominator;
}

int main()
{
	Fraction f1{};
	readFractionFromInput(f1);

	Fraction f2{};
	readFractionFromInput(f2);

	std::cout << "Your fractions multiplied together: " << f1*f2 << '\n';
	return 0;
}
