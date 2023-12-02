# Makefile para el método de la secante

# Variables

CC = g++
CFLAGS = -Wall -Wextra -std=c++17

# Objetivos

all: secante

secante: secante.o Funcion.o Pantalla.o
	$(CC) $(CFLAGS) -o secante secante.o Funcion.o Pantalla.o

secante.o: secante.cpp
	$(CC) $(CFLAGS) -c secante.cpp

Funcion.o: Funcion.cpp
	$(CC) $(CFLAGS) -c Funcion.cpp

Pantalla.o: Pantalla.cpp
	$(CC) $(CFLAGS) -c Pantalla.cpp

# Limpieza

clean:
	rm -f secante *.o