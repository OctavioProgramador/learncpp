// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

bool isPrime(int n) {
	if (n == 2)
		return true;
	else if (n == 3)
		return true;
	else if (n == 5)
		return true;
	else if (n == 7)
		return true;
	return false;
}

int main()
{
	int input{};

	std::cout << "Enter a number between the range of 0 and 9 (inclusive): ";
	std::cin >> input;

	if (9 >= input && input >= 0) 
		if (isPrime(input))
			std::cout << "The digit is prime\n";
		else
			std::cout << "The digit is not prime\n";
	else
		std::cout << "Number is outside the range\n";
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
