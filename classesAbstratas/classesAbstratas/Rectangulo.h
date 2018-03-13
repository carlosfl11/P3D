#pragma once
#include "figuraGeometrica.h"
#include <string>

using namespace std;

class Rectangulo : public FiguraGeometrica{
	int x, y;

public:
	Rectangulo(int x = 0, int y = 0) : x(x), y(y) {};
	~Rectangulo() { cout << "Destroi rectangulo!" << endl; }
	float Perimetro();
	float Area();
	void Imprime();

	Rectangulo operator+(const Rectangulo r);
};


float Rectangulo::Perimetro() {
	return(float(x * 2.0f + y * 2.0f));
}

float Rectangulo::Area() {
	return(float(x * y));
}

void Rectangulo::Imprime() {
	cout << "Rectangulo:\n	X=" << x << " Y=" << y << "\n	Perimetro: " << Perimetro() << "\n	Area: " << Area() << "\n" << endl;
}

Rectangulo Rectangulo::operator+(const Rectangulo r) {

	Rectangulo rec;
	rec.x = x + r.x;
	rec.y = y + r.y;

	return rec;
}

