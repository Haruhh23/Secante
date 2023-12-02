#include "Funciones/MetodoSecante.h"
#include "Funciones/FuncionObjetivo.h"
#include <cmath>
#include <iomanip>
#include <iostream>

namespace Funciones
{

    double MetodoSecante::encontrarRaiz(double x0, double x1, int numIteraciones, int decimales)
    {
        double xn, fx0, fx1;

        std::cout << std::setw(15) << "Iteracion" << std::setw(15) << "x0" << std::setw(15) << "f(x0)" << std::setw(15)
                  << "x1" << std::setw(15) << "f(x1)" << std::setw(15) << "xn" << std::setw(15) << "f(xn)" << std::setw(15)
                  << "Error" << std::endl;

        FuncionObjetivo funcionObjetivo;

        for (int i = 0; i < numIteraciones; ++i)
        {
            fx0 = funcionObjetivo.evaluar(x0);
            fx1 = funcionObjetivo.evaluar(x1);

            xn = x1 - (fx1 * (x1 - x0)) / (fx1 - fx0);

            double error = std::fabs(xn - x1);

            std::cout << std::setw(15) << i + 1 << std::setw(15) << std::fixed << std::setprecision(decimales) << x0
                      << std::setw(15) << std::fixed << std::setprecision(decimales) << fx0 << std::setw(15)
                      << std::fixed << std::setprecision(decimales) << x1 << std::setw(15) << std::fixed
                      << std::setprecision(decimales) << fx1 << std::setw(15) << std::fixed << std::setprecision(decimales)
                      << xn << std::setw(15) << std::fixed << std::setprecision(decimales) << funcionObjetivo.evaluar(xn)
                      << std::setw(15) << std::fixed << std::setprecision(decimales) << error << std::endl;

            if (error < 1e-12)
            {
                return xn;
            }

            x0 = x1;
            x1 = xn;
        }

        return xn;
    }

}