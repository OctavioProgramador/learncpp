#include <string_view>
#include <optional>
#include <string>
#include <iostream>

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

int main()
{
	std::cout << "Enter a pet: cat, dog, pig, or whale: ";

	std::string s{};
	std::cin >> s;

	std::optional<Pet> pet { getPetFromString(s) };

	if (!pet)
		std::cout << "You entered an invalid pet\n";
	else
	{
		std::cout << "You entered: " << getPetName(*pet) << '\n';
	}
	return 0;
}
