
#ifndef TRIANGULO_H
	#include "Triangulo.h"
	#define TRIANGULO_H
#endif
#ifndef PUNTO_H
	#include "Punto.h"
	#define PUNTO_H
#endif


double GetPerimetro (const Triangulo t &) {
	return GetDist (t.a, t.b) +
		   GetDist (t.a, t.c) +
		   GetDist (t.b, t.c);
}

TipodeTriangulo GetTipo (const Triangulo t &){
	return Son3DistIguales (t.a, t.b, t.c) ? Equilatero
		   : Son3DistDistintas (t.a, t.b, t.c) ? Escaleno
		   : Isosceles;
}

bool EsEquilatero (const Triangulo t &) {
	return Son3DistIguales (t.a, t.b, t.c) ;
}

Triangulo ExtraerdeCinTriangulo (){
	Triangulo t;

	t.a = ExtraerdeCinPunto ();
	t.b = ExtraerdeCinPunto ();
	t.c = ExtraerdeCinPunto ();

	return t;
}

TipodeTriangulo EnviarTipoTriangulo(){
	string tipo = GetTipo(t);
	return tipo;
}
