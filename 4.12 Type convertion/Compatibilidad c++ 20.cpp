// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <cstdint>

void print(int x) {
	std::cout << x << '\n';
}

int main()
{
	print( static_cast<int>(5.5) ); // warning: we're passing in a double value
	char ch{ 97 }; // 97  is the ASCII code for 'a'
	std::cout << ch << " has value " << static_cast<int>(ch) << '\n';
	unsigned int u{ 5 };
	int s{ static_cast<int>(u) }; // return value of the variable u as int
	std::cout << s << '\n';
	std::int8_t myInt{ 65 };
	std::cout << static_cast<int>(myInt) << '\n';
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
