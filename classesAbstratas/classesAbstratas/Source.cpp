#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>
#include "Source.h"

int main() {
	FiguraGeometrica *formaRec;
	Rectangulo *rec, *rec1,*rec2;

	// inicia uma vareavel forma como um circulo
	formaRec = new Circulo(2);
	formaRec->Imprime();
	delete formaRec;

	// inicia 3 rectangulos
	rec = new Rectangulo(1, 2);
	rec->Imprime();

	rec1 = new Rectangulo(3, 5);
	rec1->Imprime();

	
	//rec2 = rec + rec1;
	//rec2->Imprime();
	
	rec2 = new Rectangulo();
	rec2 = rec + rec1;
	cin.get();

	return 0;
}