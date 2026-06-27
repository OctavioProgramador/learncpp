// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>


int main()
{
	bool b;
	bool b1{ true };
	bool b2{ false };
	b1 = false;
	[[maybe_unused]] bool b3{}; // default initialize to false

	b1 = !true; // b1 will be initialized with the value false
	b2 = !false; // b2 will be initialized with the value true

	// ===

	std::cout << true << '\n'; // true evaluates to 1
	std::cout << !true << '\n'; // false evaluates to 0

	b =  false;
	std::cout << b << '\n'; // b is false, which evaluates to 0;
	std::cout << !b << '\n'; // !b is true, which evaluates to 1

	//===

	std::cout << std::boolalpha;
	std::cout << b << '\n'; // b is false, which evaluates to 0;
	std::cout << !b << '\n'; // !b is true, which evaluates to 1

	// === conversions

	[[maybe_unused]] bool bFalse{ 0 }; // okay: initialized to false
	[[maybe_unused]] bool bTrue{ 1 }; // okay: initialized to true
	/*
	bool bNo{ 2 }; // error narrowing conversions disallowed

	std::cout << bFalse << bTrue << bNo << '\n';
	*/

	// === needs to disable warning as error to compile
	b1 = 4; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';

	b2 = 0; 
	std::cout << b2 << '\n';
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
