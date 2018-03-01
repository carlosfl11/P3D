#pragma once
#include "figuraGeometrica.h"
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class Circulo : public FiguraGeometrica {
	int raio;
public:
	Circulo(int r) : raio(r) {};
	~Circulo() { cout << "Destroi circulo!\n\n"; }
	float Perimetro();
	float Area();
	void Imprime();
};

float Circulo::Area() {
	return(float(M_PI * (raio * raio)));
}

float Circulo::Perimetro() {
	return(float(2 * M_PI * raio));
}
void Circulo::Imprime() {
	cout << "Circulo:\n	Raio= " << raio << "\n	Perimetro= " << Perimetro() << "\n	Area= " << Area() << "\n" << endl;
}