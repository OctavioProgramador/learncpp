// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

// This function takes no parameters
// It does not rely on the caller for anything
void doPrint()
{
	std::cout << "In doPrint()\n";
}

// This functions takes one parameter named x
// The caller will supply the value of x
void printValue(int x)
{
	std::cout << x << '\n';
}

// This function has two integer parameters, one named x, one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
	return x + y;
}

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	return input;
}

void printDouble(int value)
{
	std::cout << value << " double is: " << value * 2 << '\n';
}
int main()
{

	//doPrint(); // this call has no arguments
	//printValue(6); // 6 is the argument passed to the function printValue()
	//add(2, 3); // 2 and 3 are the arguments passed to function add()

	//int num{ getValueFromUser() };
	//printDouble(num);

	printDouble(getValueFromUser());
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
