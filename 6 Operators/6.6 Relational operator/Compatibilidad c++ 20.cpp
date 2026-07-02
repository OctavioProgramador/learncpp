// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <algorithm>
#include <cmath>

// Return true if the difference between a and b is within epsilon percent of 
// the larger of a nd b

bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

// Return true if the difference between a and b is less than or equal to
// absEpsilon, or within relEpsilon percent of the larger of a and b

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon,
	double relEpsilon)
{
	// Check if the numbers are really close -- needed when comparing numbers
	// near zero
	if (std::abs(a - b) <= absEpsilon)
		return true;
	
	// Otherwise fall back to Knuth's algoithm
	return approximatelyEqualRel(a, b, relEpsilon);
}

int main()
{

	// a is really close to 1.0, but has rounding errors
	constexpr double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	constexpr double relEps{ 1e-8 };
	[[maybe_unused]] constexpr double absEps{ 1e-12 };

	// First, lwt's compare a (almost 1.0) to 1.0.
	std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n';

	// Second, let's compare a-1.0 (almost 0.0) to 0.0
	std::cout << approximatelyEqualRel(a - 1.0, 0.0, relEps) << '\n';

	std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';
	std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, absEps, relEps) << '\n';

	double d1{ 100.0 - 99.99 }; // should equal to 0.01 mathematically
	double d2{ 10.0 - 9.99 }; // should equal to 0.01 mathematically

	if (d1 == d2)
		std::cout << "d1 == d2" << '\n';
	else if (d1 > d2)
		std::cout << "d1 > d2" << '\n';
	else if (d1 < d2)
		std::cout << "d1 < d2" << '\n';

	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	if (x == y)
		std::cout << x << " equals " << y << '\n';
	if (x != y)
		std::cout << x << " does not equal " << y << '\n';
	if (x > y)
		std::cout << x << " is greater than " << y << '\n';
	if (x < y)
		std::cout << x << " is less than " << y << '\n';
	if (x >= y)
		std::cout << x << " is greater than or equal to " << y << '\n';
	if (x <= y)
		std::cout << x << " is less than or equal to " << y << '\n';


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
