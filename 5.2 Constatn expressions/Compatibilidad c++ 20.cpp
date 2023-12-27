// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>


int getNumber()
{
	std::cout << "Enter a number: ";
	int y{};
	std::cin >> y;
	return y;
}

int main()
{
	// compile time consts
	const int x{ 3 }; // x is a compile time const
	const int y{ 4 }; // y is a compile time const

	const int z{ x + y }; // x + y is a constant expression, so z is compile-time const

	std::cout << z << '\n';

	// runtime consts

	const int a{ 3 }; // a is a compile time constant
	const int b{ getNumber() }; // b is a runtime constant
	const int c { b+c} // b + c is a runtime expression, so c is a runtime constant 
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
