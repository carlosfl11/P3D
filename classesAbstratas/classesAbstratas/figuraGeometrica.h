#pragma once
#include <iostream>

class FiguraGeometrica
{
public:
	FiguraGeometrica() {}
	virtual ~FiguraGeometrica() {}
	virtual float Perimetro() = 0;
	virtual float Area() = 0;
	virtual void Imprime() = 0;

};