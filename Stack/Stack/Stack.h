#pragma once
#include <iostream>
#include <array>

using namespace std;

template<class type>
class Stack {
	int size = 0, topobject = 0;
	type *stack = nullptr;
public:
	Stack(const int x);
	~Stack();
	bool push(type n);
	void pop();
	void print();
};

template<class type> Stack<type>::Stack(const int x) {
	if (x <= 0)
		throw 1;
	else
	{
		size = x;
		stack = new type[x];
		cout << "Stack criada com o tamanho " << size << endl;

	}
}

template<class type> Stack<type>::~Stack() {
	delete[] stack;
	cout << "->Stack com o tamanho " << size << " eliminada" << endl;
}

template<class type> bool Stack<type>::push(type n) {
	if (topobject < size)
	{
		stack[topobject] = n;
		topobject++;
		return true;
	}
	else
	{
		throw 2;
		return false;
	}
}

template<class type> void Stack<type>::pop() {
	if (topobject > 0) {
		topobject--;
		cout << "->" << stack[topobject] << " eliminado!" << endl;
	}
}

template<class type> void Stack<type>::print() {
	for (int i = 0; i < topobject; i++)
		cout << stack[i] << endl;
	cout << "\n";

}


