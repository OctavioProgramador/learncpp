// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <cmath>
#include <cassert> //for  assert
#include <cstdint> // for std::int64_t
#include <limits> // for std::numeric_limits

// note: exp must be non-negative
// note: does not perform range/overflow checking, use with caution
constexpr std::int64_t powint_safe(std::int64_t base, int exp)
{
	assert(exp >= 0 && "powint: exp parameter has negative value");

	// handle 0 case
	if (base == 0)
		return (exp == 0) ? 1 : 0;

	std::int64_t result {1};

	// To make the rank checks easier, we'll ensure base is positive 
	// We'll flip the result at the end if needed
	bool negativeResult{ false };

	if (base < 0)
	{
		base = -base;
		negativeResult = (exp & 1);
	}

	while (exp > 0)
	{
		if (exp & 1) // if exp is odd
		{
			// Check if result will overflow when multiplied by base
			if (result > std::numeric_limits<std::int64_t>::max() / base)
			{
				std::cerr << "powint_safe(): result overflowed\n";
				return std::numeric_limits<std::int64_t>::max();
			}
			result *= base;
		}
		exp /= 2;

		// IF we're done, get out here
		if (exp <= 0)
			break;

		// The following only needs to execute if we are going to iterate again
		// Check if base will overflow when multiplied by base 
		if (base > std::numeric_limits<std::int64_t>::max() / base) {
				std::cerr << "powint_safe(): result overflowed\n";
				return std::numeric_limits<std::int64_t>::max();
		}
		base *= base;
	}
	if (negativeResult)
		return -result;
	return result;
}

int main()
{
   std::cout << powint_safe(7, 20) << '\n'; // 7 to the 12th power
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "The remainder is: " << x % y << '\n';

	if ((x % y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';

   [[maybe_unused]] double x_double { std::pow(3.0, 4.0) }; // 3 to the 4th power

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
