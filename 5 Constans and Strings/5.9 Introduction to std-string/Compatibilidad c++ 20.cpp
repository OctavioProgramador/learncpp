// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <string>


int main()
{
	using namespace std::string_literals; // easy access to the s suffix

	std::cout << "foo\n"; // no suffix is a C-style string literal
	std::cout << "bar\n"s; // s suffix is a std::string literal

	std::string name{"Alex"};
	name = "John";
	std::string myID{ "45" };

	std::cout << "My name is: " << name << '\n';
	std::string empty{};

	std::cout << '[' << empty << "]\n";

	std::cout << name << " has " << name.length() << " characters\n"; // returns an type_t
	std::cout << name << " has " << std::ssize(name) << " characters\n"; // returns an int

	std::cout << "Enter your full name: ";
	// std::cin >> name; // this will not work as expected
	std::getline(std::cin >> std::ws, name);

	std::cout << "Enter your favorite color: ";
	std::string color{};
	// std::cin >> color;
	std::getline(std::cin >> std::ws, color);

	std::cout << "Your name is " << name << " and your favorite color is "
		<< color << '\n';

	std::cout << "Pick 1 or 2: ";
	int choice{};
	std::cin >> choice;

	std::cout << "Now enter your name: ";
	std::getline(std::cin >> std::ws, name); // note: no std::ws here

	std::cout << "Hello, " << name << " , you picked " << choice << '\n';

   return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
