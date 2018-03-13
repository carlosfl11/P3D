#pragma once
#include <string>

using namespace std;
class Carta
{
	char valor, naipe;
public:
	Carta(char v, char n) : valor(v),naipe(n);
	~Carta();
};