#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack<int> *stack = 0;

	// try / catch para exxcecoes
	try
	{
		stack = new Stack<int>(10);
	}
	catch (int e)
	{
		if (e == 1)
			cout << "Tamanho negativo\n";
		if (e == 2)
			cout << "Stack completa" << endl;
	}
	if (stack != NULL) {
		cout << "tamanho: " << stack->getSize() << endl;
	}
	cin.get();
	return 0;
}