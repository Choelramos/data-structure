#include "queue.h"
#include <iostream>

using namespace std;

int main() {

	char character;
	Queue queue;
	char queueChar;
	cout << "Digite a String; Enter para retornar." << endl;
	cin.get(character);


// Como será inserido:
	while (character != '\n' and !queue.isFull()) {
		queue.enqueue(character);
		cin.get(character);
	}

// Como será retirado:
	while (!queue.isEmpty()) {
		queueChar = queue.dequeue();
		cout << queueChar;
	}

	cout << endl;
}
