#include <iostream>
#include <string_view>
#include <optional>

enum class Animal{
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck
};

constexpr std::string_view getAnimalName(Animal animal)
{
	using enum Animal;
	
	switch (animal) {

	case pig:	return "pig";
	case chicken:	return "chicken";
	case goat:	return "goat";
	case cat:	return "cat";
	case dog:	return "dog";
	case duck:	return "duck";
	default: 	return "???";
	}
}

void printNumberOfLegs(Animal animal)
{
	using enum Animal;
	int number_of_legs {};
	switch (animal) {
	
	case chicken:	
	case duck:	
		number_of_legs = 2; 
		break;
	case pig:	
	case goat:
	case cat:
	case dog:	
		number_of_legs = 4; 
		break;
	default:	
		{
			std::cout << "Error: Invalid animal\n";
			return;
		}
	}
	std::cout << "A " << getAnimalName(animal) << " has " << number_of_legs << " legs.\n";
}

int main()
{
	Animal cat { Animal::cat };
	Animal chicken { Animal::chicken };
	printNumberOfLegs(cat);
	printNumberOfLegs(chicken);
}

