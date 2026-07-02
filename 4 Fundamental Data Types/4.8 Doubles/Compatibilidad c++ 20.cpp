// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <iomanip>



int main()
{
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';

   // -----

	std::cout << 9.87654321f << '\n';
	std::cout << 987.654321f << '\n';
	std::cout << 987654.321f << '\n';
	std::cout << 9876543.21f << '\n';
	std::cout << 0.0000987654321f << '\n';

	// ===

	float f{ 123456789.0f }; // f has 10 significant digits
	std::cout << std::setprecision(9); // to show 9 digits on f
	std::cout << f << '\n';

	// ====

	double d{ 0.1 };
	std::cout << std::setprecision(6);
	std::cout << d << '\n'; // precision of 6
	std::cout << std::setprecision(17);
	std::cout << d << '\n';

	// ====

	double d1{ 1.0 };
	std::cout << d1 << '\n';

	double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
	std::cout << d2 << '\n';

	// ---

	double zero{ 0.0 };
	double posinf{ 5.0 / zero };	// positive infinity
	std::cout << posinf << '\n';

	double neginf{ -5.0 / zero };	// negative infinity
	std::cout << neginf << '\n';

	double nan{ zero / zero };	// not a number (mathematically invalid)
	std::cout << nan << '\n';

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
