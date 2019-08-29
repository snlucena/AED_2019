/* Punto.cpp
*/

#include "Punto.h"
#include <iostream>
#include <cmath>

Punto ExtraerDeCinUnPunto(){
	Punto p;
	std::cin >> p.x;
	std::cin >> p.y;
	return p;
}

int GetDist (Punto a, Punto b){
	return sqrt((a.x + b.x)*(a.x + b.x) + (a.y + b.y)*(a.y + b.y));
}


bool Son3DistanciasIguales (Punto a, Punto b, Punto c){
	return GetDist (a, b) == GetDist (b, c) == GetDist (a, c) ? true
                                                              : false;
}


