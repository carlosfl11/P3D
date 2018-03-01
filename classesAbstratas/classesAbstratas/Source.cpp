#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>

int main() {
	FiguraGeometrica *rec1;

	Rectangulo forma = new Rectangulo(2, 3);
	forma->Imprime();

	rec1 = new Rectangulo(2,5);
	rec1->Imprime();

	Rectangulo rec2 = new Rectangulo(0,0);

	rec2 = rec1 + forma;
	rec2->Imprime;

	cin.get();

	return 0;
}