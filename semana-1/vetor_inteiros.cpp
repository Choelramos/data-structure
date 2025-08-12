#include <iostream>

using namespace std; // usado para não ser mais declarado toda vez std::

int main() {
    int c[10] = {2, 4, 6}; // Os espaços não declarados serão preeenchidos com 0
    c[5] = 12;
    c[6] = 14;
    c[7] = 16;

for (int i = 0; i < 10; i++) {
    cout << "c[" << i << "] = " << c[i] << "\n";
}
    
    return 0;



}


