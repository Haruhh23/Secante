#ifndef METODO_SECANTE_H
#define METODO_SECANTE_H

namespace Funciones
{

    class MetodoSecante
    {
    public:
        static double encontrarRaiz(double x0, double x1, int numIteraciones, int decimales);
    };

}

#endif