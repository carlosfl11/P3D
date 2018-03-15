#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int escrita() {
	ofstream ficheiro("meuficheiro.txt");
	if (ficheiro.is_open()) {
		cout << "Ficheiro criado e alterado!\n";
		ficheiro << "Primeira linha.\n";
		ficheiro << "Segunda linha.\n";
		ficheiro.close();
	}
	else {
		cout << "Erro ao abrir o ficheiro!\n";
	}
	return 0;
};

void leitura() {
	string linha;
	ifstream ficheiro("meuficheiro.txt");
	if (ficheiro.is_open()) {
		// Lê, linha a linha, até ao final do ficheiro
		while (getline(ficheiro, linha)) {
			cout << linha << endl;
		}
		ficheiro.close();
	}
	else {
		cout << "Erro ao abrir o ficheiro!\n";
	}
};

void lerPalavra() {
	char linha[100];
	ifstream ficheiro("meuficheiro.txt");
	if (ficheiro.is_open()) {
		// Lê, palavra a palavra, até ao final do ficheiro
		while (!ficheiro.eof()) {
			ficheiro >> linha;
			cout << linha << endl;
		}
		ficheiro.close();
	}
	else {
		cout << "Erro ao abrir o ficheiro!\n";
	}
};

void lerChar() {
	char c;
	ifstream ficheiro("meuficheiro.txt");
	if (ficheiro.is_open()) {
		// Lê, carácter a carácter, até ao final do ficheiro
		while (!ficheiro.eof()) {
			c = ficheiro.get();
			cout << c;
		}
		ficheiro.close();
	}
	else {
		cout << "Erro ao abrir o ficheiro!\n";
	}
	
};

// escrever em binario
struct _s {
	char a;
	int b;
	float c;
};
void escreverBin() {
	struct _s data1[2] = { { 'A', 1, 1.1f },{ 'B', 2, 2.2f } };
	struct _s data2[2];
	fstream fileRW;
	fileRW.open("ficheiro.dat", ios::out | ios::binary | ios::trunc);
	fileRW.write((char *)data1, 2 * sizeof(struct _s));
	fileRW.close();
	fileRW.open("ficheiro.dat", ios::in | ios::binary | ios::_Nocreate);
	fileRW.read((char *)data2, 2 * sizeof(struct _s));
	fileRW.close();
	for (int i = 0; i < 2; i++)
		cout << data2[i].a << " " << data2[i].b << " " << data2[i].c << endl;
}

int main() {
	cout << "-- escrita\n";
	escrita();

	cout << "-- leitura\n";
	leitura();


	cout << "-- ler linha\n";
	lerPalavra();


	cout << "-- ler char\n";
	lerChar();
	cin.get();
	system("cls");

	escreverBin();
	cin.get();

	return 0;
}