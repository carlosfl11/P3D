#pragma once
#include "Carta.h"
#include <array>

using namespace std;

class Baralho {
	array<Carta,52> *cartas = nullptr;
	char n, v;
public:
	Baralho();
};

Baralho::Baralho() {
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 4; n++) {
			if (n == 0) n = 'O';
			else if (n == 1) n = 'E';
			else if (n == 2) n = 'C';
			else n = 'P';
			for (int c = 2; c < 16; c++) {
				if (c > 10) {
					if (c == 11) v = 'J';
					else if (c == 12) v = 'Q';
					else if (c == 13) v = 'K';
					else v = 'A';
				}
			}
		}
			
	}
}

