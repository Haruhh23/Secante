#include "FuncionObjetivo.h"

double FuncionObjetivo::operator()(double x) {
    return x * x - 4;
}