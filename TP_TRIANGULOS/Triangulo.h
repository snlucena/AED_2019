#ifndef PUNTO_H
	#include "Punto.h"
	#define PUNTO_H
#endif

struct Triangulo {
	Punto a,b,c;
};

enum struct TipodeTriangulo {
	Equilatero, Escaleno, Isosceles;
};

Triangulo ExtraerdeCinTriangulo ();
TipodeTriangulo EnviarTipoTriangulo (); 

double GetPerimetro (const Triangulo &);
bool GetEquilatero (const Triangulo &);
TipodeTriangulo GetTipo (const Triangulo &);
