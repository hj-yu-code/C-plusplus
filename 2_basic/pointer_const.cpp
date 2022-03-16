#include <iostream>
using namespace std;

int main(){
    const int PI = 3.14159;

    int num1 = 100, num2 = 200;
    const int *p1 = &num1; // �����Ͱ� ����Ű�� ���� ���ȭ
    // *p1 = 150; //fail
    p1 = &num2; // ok
    
    cout << "p1 : "<< *p1 << endl;

    int * const p2 = &num2; // �����Ͱ� �������� �ּҸ� ���ȭ
    *p2 = 250; // ok
    // p2 = &num1; // fail
    cout << "p2 : "<< *p2 << endl;

    const int* const p3 = &num1;
    // p3 = &num2; // fail
    // *p3 = 150; //fail
    // num1 = 400; // ok �����͸� ���ؼ��� ��Ʈ�� �Ұ�
    
    cout << "p3 : "<< *p3 << endl;

    


    return 0;
}