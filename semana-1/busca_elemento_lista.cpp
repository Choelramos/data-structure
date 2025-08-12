#include <iostream>

// lógica funcionando


using namespace std;

// Teste do algoritmo de busca na lista

const int NUM_ELEM = 5; // declaração de uma constante

// função de busca sequencial

int busca1(int x, int l[]) {
    for (int i = 0; i <= NUM_ELEM; i++) { // i de 0 a n-1
        if (l[i] == x) { // comparação da variável da função
	    return i; // returna a posição do valor
	}
   }
return -1; // elemento não encontrado

}

int main() {
    int* c = new int[NUM_ELEM]; // apontando para o elemento dinâmicamente

    delete [] c; // deletando

    for (int i = 0; i <= NUM_ELEM; i++) { // iterando para gerar valores
        c[i] = 2*i;
    }

    int a; // atribuindo o valor procurado na variável a
    cout << "Digite o número a ser encontrado: " << endl;
    cin >> a;


    int posi = busca1(a, c); // fazendo a busca da variável na lista e guardando o valor na variável

    if (posi != -1) {
        cout << "Chave encontrada na posição " << posi << endl;
    } else {
        cout << "Elemento não encontrado" << endl;
      }

      return 0;

}
