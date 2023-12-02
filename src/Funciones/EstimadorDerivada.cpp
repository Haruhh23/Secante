#include "Funciones/EstimadorDerivada.h"
#include "Funciones/FuncionObjetivo.h"  // Asegúrate de incluir FuncionObjetivo.h

double EstimadorDerivada::estimar(double x, double h) {
    Funciones::FuncionObjetivo funcionObjetivo;  // Usa el espacio de nombres Funciones
    double fx = funcionObjetivo.evaluar(x);
    double fxh = funcionObjetivo.evaluar(x + h);

    return (fxh - fx) / h;
}