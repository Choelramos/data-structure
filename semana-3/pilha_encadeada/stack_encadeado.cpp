#include "stack.h"
#include <cstddef> // Usado pelo Null
#include <new>
#include <iostream>
using namespace std;

Stack::Stack() { // implementação do construtor
	structure = NULL; // estrutura padrão é nulo. Será alterado ao adicionar um nó
}


/* Sem fazer a destruição de cada elemento que foi implementado com new no próximo passo
os elementos continuariam ocupando espaço na memória, criando o famovo vazamento de memória */

Stack::~Stack() { // implementalão do destrutor
	NodeType* tempPtr; // ponteiro auxiliar
	while (structure != NULL) { // Enquanto tiver elementos, vamos limpar
		tempPtr = structure; // guardar na variável tempPtr o topo
		structure = structure -> next; // novo topo vai apontar para o próximo nó
		delete tempPtr; // deletar o topo anterior para liberar memória
	}
}

bool Stack::isEmpty() const {
	return (structure == NULL);
}

/* verificar se o usuário tem memória disponível */

bool Stack::isFull() const {
	NodeType* location;
	try {
		location = new NodeType; // se conseguirmos alocar no local e apagar
		delete location;         // significa que temos memória disponível  
		return false;
	} catch (std::bad_alloc exception) { // returnará erro caso não tenha espaço
		return true;
	}
}

/* adicionar um novo elemento na pilha. Criando uma variável ponteiro para o novo local.
Adicionando o conteúdo do ItemType adicionado no local do ponteiro. Depois usando o local para
apontar para o próximo elemento que era o antigo structure. Então fazer structure apontar para
este novo elemento que agora é o topo. */

void Stack::push(ItemType item) {
	if (!isFull()) {
		NodeType* location;
		location = new NodeType;
		location -> info = item;
		location -> next = structure;
		structure = location;
	} else {
		throw "Stack is already full!";
	}
}

// Devolver quem está no topo da pilha

/* Novo ponteiro para tempPtr para armazenar o antigo topo. Pegar o conteúdo da estrutura
 e armazenar na variável de retorno. deletar a variável temporária. Retornar o item. */ 

ItemType Stack::pop() {
	if (!isEmpty()) {
		NodeType* tempPtr;
		tempPtr = structure;
		ItemType item = structure -> info;
		structure = structure -> next;
		delete tempPtr;
		return item;
	} else {
		throw "Stack is empty!";
	}
	
}

// Bem intuitivo -> 

void Stack::print() const {
	NodeType* tempPtr = structure;
	while (tempPtr != NULL) {
		cout << tempPtr -> info;
		tempPtr = tempPtr -> next;
	}
	cout << endl;
}





