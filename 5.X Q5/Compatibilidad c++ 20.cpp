// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <string>

std::string getPerson(int person_number)
{
	std::cout << "Enter the name of person #" << person_number << ": ";
	std::string person{};
	std::getline(std::cin >> std::ws, person);
	return person;
}

int getAge(std::string_view name)
{
	std::cout << "Enter the age of " << name << ": ";
	int age{};
	std::cin >> age;
	return age;
}

void printDifferentAges(std::string_view older_name, std::string_view young_name,
	int older_age, int young_age)
{
	std::cout << older_name << " (age " << older_age << ") is older than "
		<< young_name << " (age " << young_age << ").\n";
}

void checkAge(std::string_view name1, std::string_view name2, int age1, int age2)
{
	if (age1 > age2)
		printDifferentAges(name1, name2, age1, age2);
	else if (age2 > age1)
		printDifferentAges(name2, name1, age2, age1);
	else 
		std::cout << name1 << " (age " << age1 << ") has the same age than "
		<< name2 << " (age " << age2 << ").\n";
}

int main()
{

	std::string person1{ getPerson(1) };
	const int age1{ getAge(person1) };

	std::string person2{ getPerson(2) };
	const int age2{ getAge(person2) };

	checkAge(person1, person2, age1, age2);
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
