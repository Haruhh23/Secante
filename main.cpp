#include "Secante.h"
#include "Funcion.h"
#include "Pantalla.h"

int main() {
  // Creación de un objeto de la clase Funcion
  Funcion *function = new Funcion() {
    public:
      double evaluate(double x) override {
        return x * x - 3;
      }
  };

  // Lectura de los valores de x0 y x1
  double x0 = Input::readDouble("Introduce x0: ");
  double x1 = Input::readDouble("Introduce x1: ");

  // Lectura del número de decimales
  int decimals = Input::readInt("Introduce el número de decimales: ");

  // Lectura del número de iteraciones
  int maxIterations = Input::readInt("Introduce el número de iteraciones: ");

  // Creación de un objeto de la clase SecantMethod
  SecantMethod secantMethod(x0, x1, 1e-6, maxIterations);

  // Llamada al método findRoot()
  double root = secantMethod.findRoot();

  // Impresión del resultado con el número de decimales especificado
  Pantalla::imprimirResultado(root, decimal
  