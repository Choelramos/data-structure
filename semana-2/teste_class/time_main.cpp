#include <iostream>
#include "time.h"

using namespace std;

int main() {
    Time t1(23, 59, 59); // instanciando a classe no objeto t1 e usando os métodos abaixo
    t1.print();
    t1.setHour(20);
    t1.setMinute(30);
    t1.setSecond(50);


    t1.print();
    cout << "Hour: " << t1.getHour() << endl;
    cout << "Minute: " << t1.getMinute() << endl;
    cout << "Second: " << t1.getSecond() << endl;

    // Nova instância para testar
    Time t2(23, 59, 58);
    t2.print();
    t2.nextSecond();
    t2.print();
    t2.nextSecond();
    t2.print();



}
