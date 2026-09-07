#include <iostream>

class Storage; // forward declaration for the class Storage

class Display
{
private:
	bool m_displayIntFirst {};

public:
	Display(bool displayIntFirst)
		: m_displayIntFirst { displayIntFirst }
	{}

	void displayStorage(const Storage& storage); // forward declaration for Storage needed
						     // for reference here
};

class Storage 
{
private:
	int m_nValue {};
	double m_dValue {};

public:
	Storage(int nValue, double dValue)
		: m_nValue { nValue }, m_dValue { dValue }
	{}

	// Make the Display::displayStorage member function a friend of the Storage class
	friend void Display::displayStorage(const Storage& storage); // error: Storage hasn't 
	// seen the full definition of class Display
};

// Now we can define Display::displayStorage 
// requires seeing the full definition of class Storage (as we access Storage members)
void Display::displayStorage(const Storage& storage)
{
	if (m_displayIntFirst) {
		std::cout << storage.m_nValue << ' ' << storage.m_dValue << '\n';
	}
	else
		std::cout << storage.m_dValue << ' ' << storage.m_nValue << '\n';
}

int main()
{
	Storage storage { 5, 6.7 };
	Display display { false };

	display.displayStorage(storage);

	return 0;
}



