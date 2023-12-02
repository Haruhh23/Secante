#pragma once

#include <iostream>
#include <iomanip>

class Function {
public:
  virtual double evaluate(double x) = 0;
};

class SecantMethod : public Function {
protected:
  double x0;
  double x1;
  double tolerance;
  int maxIterations;

public:
  SecantMethod(double x0, double x1, double tolerance, int maxIterations) {
    this->x0 = x0;
    this->x1 = x1;
    this->tolerance = tolerance;
    this->maxIterations = maxIterations;
  }

  double findRoot() {
    double xn;
    std::vector<double> xi;
    xi.push_back(x0);
    for (int i = 0; i < maxIterations; i++) {
      xn = x1 - (evaluate(x1) * (x1 - x0)) / (evaluate(x1) - evaluate(x0));

      if (abs(xn - x1) < tolerance) {
        return xn;
      }

      xi.push_back(xn);
      x0 = x1;
      x1 = xn;
    }

    return -1;
  }

  std::vector<double> getXi() {
    return xi;
  }

  int getMaxIterations() {
    return maxIterations;
  }
};
