#include "Funciones/FuncionObjetivo.h"

namespace Funciones
{
    double FuncionObjetivo::evaluar(double x)
    {
        return x * x - 2;
    }
}