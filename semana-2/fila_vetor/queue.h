#include "item_type.h"
// Classe abstrata

const int MAX_ITEMS = 100;

class Queue{

	public:
	 Queue(); // Construtor
	 ~Queue(); // Destrutor

	 bool isEmpty() const; // Const é colocando para mostra que o atributo não será alterado pelo método
	 bool isFull() const;
	 void print() const;

     void enqueue(ItemType);
     ItemType dequeue();

    private:
     int front;
     int back;
     ItemType* structure; 
};

