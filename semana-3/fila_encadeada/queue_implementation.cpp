#include "queue.h"
#include <cstddef>
#include <new>
#include <iostream>

using namespace std;

Queue::Queue() {
	front = NULL;
	rear = NULL;
}

Queue::~Queue() {
	NodeType* tempPtr; // ponteiro temporário
	while (front != NULL) {
		tempPtr = front;
		front = front -> next;
		delete tempPtr; // desalocando memória apontada pelo ponteiro temporário
	}
	rear = NULL;
}


bool Queue::isEmpty() const{
	return (front == NULL);
}

// Abaixo mesma lógica da pilha encadeada. Tentando uma alocação, caso não dê certo, é fila cheia

bool Queue::isFull() const {
	NodeType* location;
	try {
		location = new NodeType;
		delete location;
		return false;
	} catch(std::bad_alloc exception) {
		return true;
	}
}

// abaixo método para inserção na fila

void Queue::enqueue(ItemType item) {
	if (!isFull()) {
		NodeType* newNode;
		newNode = new NodeType;
		newNode -> info = item;
		newNode -> next = NULL;
		if (rear == NULL) 
			front = newNode;
	    else 
			rear -> next = newNode;
		rear = newNode;
      } else {
			throw "Queue is already full!";
		}
}

ItemType Queue::dequeue() {
	if(!isEmpty()) {
		NodeType* tempPtr;
		tempPtr = front;
		ItemType item = front -> info;
		front = front -> next;
		if (front == NULL) 
			rear = NULL;
		delete tempPtr;
		return item;
	} else {
		throw "Queue is empty!";
	}
}

void Queue::print() const {
	NodeType* tempPtr = front;
	while (tempPtr != NULL) {
		cout << tempPtr -> info;
		tempPtr = tempPtr -> next;
	}
	cout << endl;
}
