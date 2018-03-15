#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void lerFileVert(string path) {
	string file;
	ifstream ficheiro(path);
	if (ficheiro.is_open())
		while (getline(ficheiro, file))
			cout << file << endl;
	else
		cout << "Erro ao abrir " << path << endl;

}

int main() {
	lerFileVert("vertex.vert");

	cin.get();
	return 0;
}