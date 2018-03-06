#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>
#include "Source.h"

int main() {
	FiguraGeometrica *formaCirc, *formaRec;
	Rectangulo rec(5,2), rec1(6,8), rec2;

	// inicia uma vareavel forma como um circulo
	formaCirc = new Circulo(2);
	formaCirc->Imprime();

	formaRec = new Rectangulo(10, 8);
	formaRec->Imprime();
	
	// imprime os rectangulos
	rec.Imprime();
	rec1.Imprime();

	// soma dois rectangulos
	cout << "\n--- Soma Rec + Rec1! ---\n";
	rec2 = rec + rec1;
	rec2.Imprime();
	rec.Imprime();

	delete formaCirc;
	delete formaRec;
	delete &rec;

	cin.get();

	return 0;
}
