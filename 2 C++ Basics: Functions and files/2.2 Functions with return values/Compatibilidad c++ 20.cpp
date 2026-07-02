// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

// int is a return type
// A return type int means the function will return some integer value to the caller
// (the specific value is not specified here)
int returnFive()
{
	// the return statement indicates the specific value that will be returned
	return 5;
}

int getValueFromUser() // this function now returns an integer value
{

	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

int main()
{
	// get a value from the user
	int num{ getValueFromUser() }; // initialize num with the return value of 
	// getValueFromUser()

	// print the value doubled
	std::cout << num << " double is: " << num * 2 << '\n';

	std::cout << returnFive() << '\n'; // prints 5
	std::cout << returnFive() + 2 << '\n'; // prints 7

	returnFive(); // okay; the value 5 is returned but is ignored since main() 
	// doesn't do anything with it

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
