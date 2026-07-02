// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include <span>

void displayBall(int seconds, double tower_height) 
{	
	double gravity_constant{ 9.8 };
	double ball_height{ tower_height - (gravity_constant * (seconds * seconds) / 2) };
	if (ball_height > 0) 
	{
		std::cout << "At " << seconds << " seconds, the ball "
			<< "is at height: " << ball_height << " meters\n";
	}
	else
	{
		std::cout << "At " << seconds << " seconds, the ball "
			<< "is on the ground\n";
	}
}

int main()
{
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;

	displayBall(1, height);
	displayBall(2, height);
	displayBall(3, height);
	displayBall(4, height);
	displayBall(5, height);

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
