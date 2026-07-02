// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>
#include <bitset>
#include <format>

int main()
{
	int x{ 012 }; // 0 before the number means is octal
	std::cout << x << '\n';
	int y{ 0xF }; // 0x before the number means this is hexadecimal
	std::cout << y << '\n';

	// === Binary
	// Prior c++ 14

	int bin{}; // asume 16 bits
	bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
	bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
	bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
	bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
	bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
	bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
	bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
	bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
	bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
	bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
	bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

	// after c++ 14

	bin = 0b1;
	bin = 0b11;
	bin = 0b1010;
	bin = 0b11110000;

	// digit separator

	[[maybe_unused]] int quote_bin{ 0b1011'0010 };
	[[maybe_unused]] long value{ 2'132'673'462 };

	int z{ 12 };

	std::cout << z << '\n';
	std::cout << std::hex << z << '\n'; // hexadecimal
	std::cout << z << '\n';
	std::cout << std::oct << z << '\n'; // octal
	std::cout << std::dec << z << '\n'; // decimal
	std::cout << z << '\n';

	//=== Printing binary numbers

	// std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 11000101
	std::bitset<8> bin2 { 0xC5 }; // hexadecimal literal for binary 11000101

	std::cout << bin1 << '\n' << bin2 << '\n';
	std::cout << std::bitset<4> {0b1010} << '\n'; // create a temporary bitset

	std::cout << std::format("{:b}\n", 0b1010); // C++20
	std::cout << std::format("{:#b}\n", 0b1010); // C++20
	
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
