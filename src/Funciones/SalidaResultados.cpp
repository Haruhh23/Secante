
#include "Funciones/SalidaResultados.h"
#include <iostream>
#include <iomanip>

namespace Funciones {
void SalidaResultados::mostrarResultados(double raiz, int numIteraciones, int decimales) {
    std::cout << "El valor de xn después de " << numIteraciones << " iteraciones es: "
              << std::fixed << std::setprecision(decimales) << raiz << std::endl;
}
 }