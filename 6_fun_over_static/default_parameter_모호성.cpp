#include <iostream>
using namespace std;

int function1(int n = 0) {
    return n + 1;
}
// int function1() { // ��ȣ�� ȣ��(1)
//     return 1;
// }

double function2(double d) {
    cout << "function2(double d) " << endl;
    return d * 3;
}
float function2(float d) {
    cout << "function2(float d) " << endl;
    return d * 2;
}

int function3(int n1, int n2) {
    return n1 + n2;
}
// int function3(int &n1, int &n2) { // ��ȣ�� ȣ��(3)
//     return n1 + n2;
// }

int main() {
    cout << function1(100) << endl;
    cout << function1() << endl; // ��ȣ�� ȣ��(1)

    cout << function2(3.0) << endl; // ������ double ��
    cout << function2(3.0F) << endl; // ���̻�� ���� float ��, ������ ����ȯ ����
    // cout << function2(3) << endl; // ��ȣ�� ȣ��(2)

    int a = 100, b = 200;
    cout << function3(a, b) << endl;

    return 0;
}