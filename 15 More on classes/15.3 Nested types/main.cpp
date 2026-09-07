#include <iostream>

class Fruit
{
public:
	// FruitType has been moved inside the class, under the public access specifier
	// we've also rename it Type and made it an enum rather than an enum class
	enum Type
	{
		apple,
		banana,
		cherry
	};

private:
	Type m_type {};
	int m_percentageEaten { 0 };

public:
	Fruit(Type type) :
		m_type { type }
	{
	}

	Type getType() { return m_type; }
	int getPercentageEaten() { return m_percentageEaten; }

	bool isCherry() { return m_type == cherry; } // Inside members of Fruit, we nolonger need
						     // to prefix enumerators with FruitType::
};

int main()
{
	// Note: Outsidee the class, we access the enumerators via the Fruit:: prefix now
	Fruit apple { Fruit::apple };

	if (apple.getType() == Fruit::apple) {
		std::cout << "I am an apple";
	}
	else
	{
		std::cout << "I am not an apple";
	}

	return 0;
}
