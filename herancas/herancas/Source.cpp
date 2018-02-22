#include <iostream>

using namespace std;

class Cor {
	unsigned char red, green, blue, alpha;
public:
	Cor();
	Cor(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	~Cor() { cout << "Destrutor Cor()\n";}
};

Cor::Cor() {
	cout << "Construtor Cor()\n";
}
Cor::Cor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
	cout << "Construtor Cor(r, g, b, a)\n";
}

class Ponto : public Cor {
	float x, y, z;
public:
	Ponto() { cout << "Construtor Ponto()\n"; };
	// Este construtor admite que lhe passem apenas 2 parâmetros como argumento ('x' e 'y').
	// Nesse caso, a variável 'z' toma valor '0.0f'
	Ponto(float x, float y, float z = 0.0f);
	~Ponto() { cout << "Destrutor Ponto()\n"; }
};

Ponto::Ponto(float x, float y, float z) {
	cout << "Construtor Ponto(x, y[, z])\n";
}


int main() {
	Ponto p1, p2(1, 1), p3(2, 2, 2);
	return 0;
}