#include "EstimadorDerivada.h"

double EstimadorDerivada::estimarDerivada(double x) {
    double h = 1e-8;
    return (FuncionObjetivo()(x + h) - FuncionObjetivo()(x)) / h;
}