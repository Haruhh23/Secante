#include "Funciones/FuncionObjetivo.h"
#include <cmath>

namespace Funciones
{
    double FuncionObjetivo::evaluar(double x)
    {
        return x * sin (x) - 1 ;
    }
}