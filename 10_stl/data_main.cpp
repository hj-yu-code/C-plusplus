#include <iostream>
using namespace std;
#include "data.h"

int main() {
    Data<int> d1(100);
    cout << "d1.getData(): " << d1.getData() << endl;

    Data<double> d2(1.5);
    cout << "d2.getData(): " << d2.getData() << endl;

    Data<char> d3('A');
    cout << "d3.getData(): " << d3.getData() << endl;

    return 0;
}