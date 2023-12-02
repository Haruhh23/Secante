#include "Funciones/EstimadorDerivada.h"
#include "Funciones/FuncionObjetivo.h"  // Corregir la ruta del archivo de encabezado

double EstimadorDerivada::estimar(double x, double h) {
    FuncionObjetivo funcionObjetivo;
    return (funcionObjetivo.evaluar(x + h) - funcionObjetivo.evaluar(x)) / h;
}