#include "Funciones/EstimadorDerivada.h"
#include "Funciones/FuncionObjetivo.h"

double EstimadorDerivada::estimar(double x, double h)
{
    Funciones::FuncionObjetivo funcionObjetivo;
    double fx = funcionObjetivo.evaluar(x);
    double fxh = funcionObjetivo.evaluar(x + h);

    return (fxh - fx) / h;
}