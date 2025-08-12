#include <iostream>
#include <cstddef>

using namespace std;

int main() {

    //alocando dinamicamente a a memória para armazenamento dinânico
    //nesse caro, alocando para um valor nulo
    bool* truth = NULL;
    float* money = NULL;

    bool* truth = new bool;
    *truth = true;
    float* money = new float;
    *money = 33.40;

    cout << *money << endl;

}
