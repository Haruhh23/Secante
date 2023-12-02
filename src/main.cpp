#include "Funciones/EntradaDatos.h"
#include "Funciones/MetodoSecante.h"
#include "Funciones/SalidaResultados.h"

int main() {
    EntradaDatos entradaDatos;
    MetodoSecante metodoSecante;
    SalidaResultados salidaResultados;

    double x0, x1;
    int numIteraciones, decimales;

    entradaDatos.ingresarDatos(x0, x1, numIteraciones, decimales);

    double raiz = metodoSecante.encontrarRaiz(x0, x1, numIteraciones, decimales);

    salidaResultados.mostrarResultados(raiz, numIteraciones, decimales);

    return 0;
}