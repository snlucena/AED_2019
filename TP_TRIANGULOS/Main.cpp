/*
Grupo 4
K1051
20190803
TP#11
*/

#ifndef TRIANGULO_H
	#include "Triangulo.h"
	#define TRIANGULO_H
#endif
#include <iostream>
#include "Triangulo.h"

int main () {
	Triangulo t;

	t = ExtraerdeCinTriangulo ();

	std::cout << GetPerimetro (t);
	std::cout << EsEquilatero (t);
	std::cout << EnviarTipoTriangulo ();
}