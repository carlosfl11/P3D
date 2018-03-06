#pragma once
#include <iostream>
#include <array>

using namespace std;

template<class type>
class Stack{
	int size, topobject = 0;
	type *stack;
public:
	Stack(int x) {
		if (x <= 0)
			throw 1;	// caso seja negativvo lanca exxcepcao
		else {
			size = x;
			stack = new type[size];
			cout << "Stack criada com tamanho " << size << endl;
		}
	}
	~Stack() { delete[] stack; cout << "Stack Eliminada!" << endl; }
	int getSize() { return size; }
};


