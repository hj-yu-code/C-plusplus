#include <iostream>
using namespace std;

int main(){
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i = 1;
    int n = 2;
    int& refn = n; // reference parameter
    cout << i << '\t' << n << '\t' << refn << endl; // 1 2 2

    n = 5;
    cout << i << '\t' << n << '\t' << refn << endl; // 1 5 5

    refn = i; // 1 2 2
    refn++;
    cout << i << '\t' << n << '\t' << refn << endl; // 1 2 2

    int *p = &refn;
    *p = 20;
    cout << i << '\t' << n << '\t' << refn << endl; // 1 20 20

    return 0;
}