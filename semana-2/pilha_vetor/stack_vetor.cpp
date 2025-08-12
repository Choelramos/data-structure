#include "stack.h"
#include <iostream>


using namespace std;

Stack::Stack() {

	length = 0;
	structure = new ItemType(MAX_ITENS); // Alocação dinâmica do vetor dentro do construtor
}

Stack::~Stack() { //Deletar no destrutor

	delete [] structure;
}

bool Stack::isEmpty() const {
	return (length == 0);
}

bool Stack::isFull() const {
	return (length == MAX_ITENS);
}

void Stack::push(ItemType item) {
	if (!isFull()){
		structure[length] = item; // usando o próximo espaço do vetor, que é length
		length++;
	} else {
	  throw "Stack is alreary full"; // Mostrar um erro!
	}
}

ItemType Stack::pop() {
	if (!isEmpty()) {
		ItemType aux = structure[length - 1];
		length--;
		return aux;
	} else {
		throw "Stack is empty";
	}
}

void Stack::print() const {
	cout << "Pilha = ";
	for (int i = 0; i < length; i++) {
		cout << structure[i];
	}
	cout << endl;
}
