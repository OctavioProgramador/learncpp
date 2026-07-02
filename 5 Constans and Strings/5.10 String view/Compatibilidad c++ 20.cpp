// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <string>
#include <string_view>

// str view provides read-only access to whatever argument is passed in
void printSV(std::string_view str) // now a std::string_view
{
	std::cout << str << '\n';
}

void printString(std::string str) // str makes a copy of its initializer
{
	std::cout << str << '\n';
}

int main()
{
	std::string s{ "Hello, world!" }; // s makes a copy of its initializer
	std::string_view s{ "Hello, world!" }; // now a std::string_view
	printSV(s);
	std::string_view sv{ "Hello, world!" }; 
	std::string t{ sv }; // okay; we can create std::string using std::string_view
	// initializer
	printString(s); // and call the function with the std::string
	printString(static_cast<std::string>(sv)); // okay; we can explicity cast a 
	// std::string_view to a std::string

	using namespace std::string_literals;
	using namespace std::string_view_literals;

	std::cout << "foo\n";
	std::cout << "foo\n"s;
	std::cout << "foo\n"sv;

	constexpr std::string_view c_sv { "Hello, world!" };
	std::cout << c_sv << '\n'; 

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
