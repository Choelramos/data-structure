#include "node_type.h"

class Stack {
	public:
	 Stack(); // Construtor
	 ~Stack(); // Destrutor
 	 bool isEmpty() const; // Método abstrato para pilha vazia
	 bool isFull() const; // Método abstrato para pilha cheia
	 void print() const; // exibir pelo print

	 void push(ItemType); // inserção
	 ItemType pop(); // remoção
 	private:
 	NodeType* structure; // Abstrato, apontamento para o topo da pilha

};
