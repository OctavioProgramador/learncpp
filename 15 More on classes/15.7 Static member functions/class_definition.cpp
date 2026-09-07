#include <iostream>

class IDGenerator
{
private:
	static inline int s_nextID { 1 };

public:
	static int getNextID(); // here's the declaration for a static function
};

// here's the definition of the static function outside of the class. Note we don't use
// the static keyword here.
int IDGenerator::getNextID() { return s_nextID++; }

int main()
{
	for (int count{ 0 }; count < 5; ++count) {
		std::cout << "The next ID is: "<< IDGenerator::getNextID() << '\n';
	}

	return 0;
}
