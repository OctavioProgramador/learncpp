// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

int main()
{
	std::cout << 5 << '\n'; // 5 (no suffix) is type int (by default)
	std::cout << 5L << '\n'; // 5L is type long
	std::cout << 5u << '\n'; // 5u is type unsigned int
	
	// === floats

	std::cout << 5.0 << '\n'; // 5.0 (no suffix) is type double (by defult)
	std::cout << 5.0L << '\n'; // 5.0f is type float

	float f{ 4.1f }; // use f suffix so the literal is a float and 
						// matches variable type of float
	double d{ 4.1 };	// change variable to type double so it 
						// matches the literal type double
	// - scientific notation

	double avogrado{ 6.02e23 };
	double electron{ 1.6e-19 };


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
