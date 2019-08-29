#include <cassert>
#include "Triangulo.h"

int main (){
	assert (12 == GetPerimetro(3,5,4));
	assert (0 == GetPerimetro (0,0,0));
	assert (25 == GetPerimetro (8,7,10));
	assert (1 == GetTipo (4,4,4));
	assert (1 == GetTipo (15,15,15));
	assert (2 == GetTipo (8,15,8));
	assert (2 == GetTipo (3,3,6));
	assert (2 == GetTipo (4,6,6));
	assert (3 == GetTipo (5,6,7));
	assert (3 == GetTipo (12,8,10));

}


