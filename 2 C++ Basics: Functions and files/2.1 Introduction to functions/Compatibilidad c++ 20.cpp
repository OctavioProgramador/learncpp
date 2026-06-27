// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

// definition of user-defined function doPrin()
void doPrint()
{ // doPrint() is the called function in this example
	std::cout << "In doPrint()\n";
}

void doB()
{

	std::cout << "In doB()\n";
}

void doA()
{
	std::cout << "Starting doA()\n";

	doB();

	std::cout << "Ending doA()\n";
}

// Definition of function main()
int main()
{
	std::cout << "Starting main()\n";
	//doPrint(); // Interrupting main() by making a function call to doPrint() main() is the caller

	doA();

	std::cout << "Ending main()\n";
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
