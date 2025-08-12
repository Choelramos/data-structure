#include <iostream>
// testando os ponteiros nas funções

using namespace std;

void valor_alocado_memoria (int* p) {
	p = new int;
	*p = 7;
    }

    void valor_modificado_memoria (int* p) {
	*p = 8;
    }

    void referencia (int*& p) {
	p = new int;
	*p = 9;
    }


int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

cout <<"Antes " << p1 << " "<< p2 << " "<< p3 << endl;
cout <<"Antes " << *p1 << " "<< *p2 <<" "<< *p3 << endl;
cout << endl;


valor_alocado_memoria(p1);
valor_modificado_memoria(p2);
referencia(p3);

cout <<"Depois " << p1 << " "<< p2 << " "<< p3 << endl;
cout <<"Depois " << *p1 << " "<< *p2 <<" "<< *p3 << endl;
cout <<"Depois " << a <<" "<< b <<" "<< c << endl;
cout << endl;


}

