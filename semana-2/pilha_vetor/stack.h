// Classe abstrata que será implementada
#include "item_type.h"



const int MAX_ITENS = 100;

class Stack {
    public:
	 Stack(); // Construtor
	 ~Stack(); // Desconstrutor
	bool isEmpty() const;
	bool isFull() const;
	void print() const;

	void push(ItemType); // inserir item, usando a variável de tipo definida 
	ItemType pop();
   private:
    int length;
    ItemType* structure;

	
};
