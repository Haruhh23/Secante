# Secante

#Calculadora de Raíces con Método de la Secante

Este programa en C++ te permite calcular las raíces de una función mediante el Método de la Secante. Proporciona una interfaz sencilla en la terminal para ingresar el rango de evaluación de la función y los parámetros necesarios para aplicar el método.

#Uso#

##Compilación##
Asegúrate de tener g++ instalado. Si no lo tienes, puedes instalarlo con el siguiente comando:

sudo apt-get update
sudo apt-get install g++
Compila el programa utilizando el siguiente comando:

**make**
##Ejecución##
Ejecuta el programa compilado:

./bin/secante
Funcionalidades

Ingreso de Datos: Ingresa el rango de evaluación de la función y otros parámetros solicitados por el programa.

Visualización de Resultados de la Función: Visualiza una tabla con los valores de x y f(x) en el rango especificado.

Método de la Secante: Ingresa los valores iniciales para aplicar el Método de la Secante.

Observa el proceso iterativo del método con una tabla detallada.

Resultado Final: Al finalizar, obtén la aproximación de la raíz de la función.
Ejemplo de Uso

Supongamos que deseas calcular las raíces de la función f(x)=x⋅sin(x)−1. A continuación, se muestra cómo puedes utilizar el programa:

Ingresar Rango de Evaluación:

Inicio del rango: -2
Fin del rango: 2
Número total de evaluaciones: 10
Número de cifras significativas: 6
Visualizar Resultados de la Función:

La tabla mostrará los valores de x y f(x) en el rango especificado.

Ingresar Parámetros para Método de la Secante:

Valor inicial x0: -1
Valor inicial x1: 0
Número máximo de iteraciones: 5
Visualizar Proceso del Método de la Secante:

La tabla detallará cada iteración del método.

Resultado Final:

El programa proporcionará la aproximación de la raíz.

Resultado de la ejecución del programa para el ejemplo anterior:

Ingrese el rango de evaluación de la función:
Inicio del rango: -2
Fin del rango: 2
Número total de evaluaciones: 10
Número de cifras significativas: 6

---- Resultados de la función ----

x | f(x)
---|---
-2.0000 | -2.0249
-1.9000 | -1.8963
-1.8000 | -1.7616
-1.7000 | -1.6222
-1.6000 | -1.4787
-1.5000 | -1.3321
-1.4000 | -1.1830
-1.3000 | -1.0323
-1.2000 | -0.8810

Ingrese los parámetros para el método de la secante:
Valor inicial x0: -1
Valor inicial x1: 0
Número máximo de iteraciones: 5

---- Proceso del método de la secante ----

Iteración | x | f(x)
---|---|---|
1 | -1 | -1
2 | -0.5 | -0.75
3 | -0.25 | -0.5625
4 | -0.125 | -0.390625
5 | -0.0625 | -0.246094

---- Resultado final ----

La raíz aproximada de la función es: -0.0625
