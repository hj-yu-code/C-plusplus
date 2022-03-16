#include <iostream>
using namespace std;

int main(){
    const int PI = 3.14159;

    int num1 = 100, num2 = 200;
    const int *p1 = &num1; // 포인터가 가르키는 값을 상수화
    // *p1 = 150; //fail
    p1 = &num2; // ok
    
    cout << "p1 : "<< *p1 << endl;

    int * const p2 = &num2; // 포인터가 보관중인 주소를 상수화
    *p2 = 250; // ok
    // p2 = &num1; // fail
    cout << "p2 : "<< *p2 << endl;

    const int* const p3 = &num1;
    // p3 = &num2; // fail
    // *p3 = 150; //fail
    // num1 = 400; // ok 포인터를 통해서만 컨트롤 불가
    
    cout << "p3 : "<< *p3 << endl;

    


    return 0;
}