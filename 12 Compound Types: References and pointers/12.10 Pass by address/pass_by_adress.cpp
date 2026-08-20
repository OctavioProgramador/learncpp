#include <iostream>
#include <string>

void printByValue(std::string val)	// the function parameter is a copy of str
{
	std::cout << val << '\n';	// print the value via the copy
}

void printByReference(const std::string& ref)	// the function parameter is a reference that binds to str
{
	std::cout << ref << '\n';	// print the value via the reference
}

void printByAdress(const std::string* ptr)	// The function parameter is a pointer that holds the address of str
{
	std::cout << *ptr << '\n';
}

int main()
{
	std::string str{ "Hello, world!" };
	printByValue(str);	// pass str by value, makes a copy of str
	printByReference(str); 	//pass str by reference, does not make a copy of str
	printByAdress(&str); 	//pass str by address, does not make a copy of str
	return 0;
}

