#include <string_view>
#include <optional>
#include <string>
#include <iostream>
#include <limits>

enum Pet{
	cat,
	dog,
	pig,
	whale,
};

constexpr std::string_view getPetName(Pet pet)
{
	switch (pet) {
	case cat: 	return "cat"; 
	case dog: 	return "dog"; 
	case pig: 	return "pig"; 
	case whale: 	return "whale"; 
	default: 	return "???";
	}
}

constexpr std::optional<Pet> getPetFromString(std::string_view sv)
{
	// we can only switch on an integra; value (or enum) not a string
	// so we have to use if-statements here
	if (sv == "cat") { return cat; }
	if (sv == "dog") { return dog; }
	if (sv == "pig") { return pig; }
	if (sv == "whale") { return whale; }
	return {};
}

// pet is an in/out parameter
std::istream& operator>>(std::istream& in, Pet& pet)
{
	std::string s{};
	in >> s;

	std::optional<Pet> match{ getPetFromString(s) };
	if (match) {
		pet = *match;	// dereference std::optional to get matching enumerator
		return in;
	}

	in.setstate(std::ios_base::failbit);

	return in;
}

int main()
{
	std::cout << "Enter a pet: cat, dog, pig, or whale: ";

	Pet pet{};
	std::cin >> pet;

	if (std::cin) // if we found a match
		std::cout << "You choose: " << getPetName(pet) << '\n';
	else
	{
		std::cin.clear();	// reset the input stream to good
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Your pet was not valid\n";
	}
	return 0;
}
