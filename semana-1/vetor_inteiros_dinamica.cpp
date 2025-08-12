#include <iostream>
// Gerando multiplo de 2 através do vetor dinâmico
using namespace std;

int main() {
    int num_elem;
    cout << "Digite o tamanho do vetor: ";
    cin >> num_elem; // atribuição do tamanho do vetor pelo usuário

    int* c = new int[num_elem]; //Declaração do vetor em alocação dinâmica
    delete [] c; // Precisamos desalocar para não gerar sobrecarga de memória

    for (int i = 0; i < num_elem; i++) {
        c[i] = 2 * i;
    }
    for (int i = 0; i < num_elem; i++) {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }
    return 0;

}
