#include <iostream>
#include "Stack.h"
#include <string>

using namespace std;

void stack() {
	Stack<int> stack(-1);
}

void stack2() {
	Stack<int> stack2(5);

	stack2.push(1);
	stack2.push(2);
	stack2.push(3);

	stack2.print();

}

void stack3() {
	Stack<string> stack3(4);

	stack3.push("abc");
	stack3.push("def");
	stack3.push("ghi");

	stack3.print();

	stack3.pop();
	stack3.print();


}

int main() {


	// try / catch para exxcecoes
	try { stack(); }
	catch (int e) { if (e == 1)	cout << "Tamanho negativo\n"; }

	stack2();
	stack3();

	cin.get();
	return 0;
}