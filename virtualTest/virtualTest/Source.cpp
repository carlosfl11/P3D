#include <iostream>
#include <string>

using namespace std;

class Animal {

public:
	Animal(string nome);
	string RetornaNome();
	void Faz();

private:
	string nomeDoAnimal;
	virtual string Som();

};

Animal::Animal(string nome) : nomeDoAnimal(nome) {}
string Animal::RetornaNome() { return nomeDoAnimal; }
string Animal::Som() { return "?????"; }

void Animal::Faz() {
	cout << RetornaNome() << " faz " << Som() << endl;
}

class Cao : public Animal {
	string Som();
public:
	Cao(string nome) :Animal(nome) {}
};
string Cao::Som() {
	return "Ao! Ao!";
}
class Gato : public Animal {
	string Som();
public:
	Gato(string nome) :Animal(nome) {}
};
string Gato::Som() {
	return "Miau! Miau!";
}

int main() {
	Animal a("Nemo");
	Cao c("Boby");
	Gato g("Tareco");
	a.Faz();
	c.Faz();
	g.Faz();

	cin.get();
		
	return 0;
}