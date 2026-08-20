#include <iostream>

enum Animal
{
	cat = -3,
	dog,
	pig,
	horse = 5,
	giraffe = 5,
	chicken,
};

int main()
{
	Animal a {};
	std::cout << a;
	return 0;
}
