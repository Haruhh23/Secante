#include "Funciones/EntradaDatos.h"
#include <iostream>

namespace Funciones
{
    void EntradaDatos::ingresarDatos(double &x0, double &x1, int &numIteraciones, int &decimales)
    {
        std::cout << "Ingrese la aproximacion inicial x0: ";
        std::cin >> x0;
        std::cout << "Ingrese la aproximacion inicial x1: ";
        std::cin >> x1;
        std::cout << "Ingrese el numero de iteraciones: ";
        std::cin >> numIteraciones;
        std::cout << "Ingrese la cantidad de decimales con los que desea trabajar: ";
        std::cin >> decimales;
    }
}