#pragma once

#include <iostream>
#include <iomanip>

class Funcion {
public:
  virtual double evaluate(double x) = 0;
};

// Pantalla.h

#pragma once

#include <iostream>

class Pantalla {
public:
  static void imprimirResultado(double root, int decimals) {
    std::cout << std::fixed << std::setprecision(decimals) << "La raíz es: " << root << std::endl;
  }

  static void imprimirTabla(const std::vector<double> &xi) {
    for (int i = 0; i < xi.size(); i++) {
      std::cout << "xi[" << i << "] = " << std::fixed << std::setprecision(decimals) << xi[i] << std::endl;
    }
  }

  static void imprimirError(double root, const std::vector<double> &xi) {
    std::cout << std::fixed << std::setprecision(decimals) << "El error es: " << abs(root - xi.back()) << std::endl;
  }

  static void imprimirTiempo(int iterations, double start, double end) {
    std::cout << "El tiempo de ejecución es: " << (end - start) / iterations << " segundos" << std::endl;
  }
};