// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

consteval auto compileTime(auto value)
{
	return value;
}

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	constexpr int x{ 5 };
	constexpr int y{ 6 };

	constexpr int g{ greater(x,y) }; // evaluated at compile time

	std::cout << g << " is greater!\n"; // will be evaluated at runtime

	std::cout << compileTime(greater(5, 6)) << " is greater!\n"; // ok; will evaluate at compile-time

	int x{ 5 }; // not constexpr
	std::cout << greater(x, 6) << " is greater!\n"; // error: consteval functions
	// must evaluate at compile-time


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
