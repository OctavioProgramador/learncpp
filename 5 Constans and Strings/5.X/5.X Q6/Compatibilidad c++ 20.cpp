// Compatibilidad c++ 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(int quantity)
{
    if (quantity == 0)
        return "no";
    else if (quantity == 1)
        return "a single";
    else if (quantity == 2)
        return "a couple of";
    else if (quantity == 3)
        return "a few";
    else
        return "many";
}

// Write the function getApplesPluralized() here
constexpr std::string_view getApplesPluralized(int quantity)
{
    return ((quantity > 1) ? "apples" : "apple");
}

int main()
{
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

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
