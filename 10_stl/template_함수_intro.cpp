#include <iostream>
using namespace std;

/*
�ߺ��Լ� ����� ��� �Լ��� ������ �ʿ䰡 ����
T : �ڷ����� �������� ����
*/

// template <class T>  // ���� ���� (�򰥸���� typename ���� ���)
template <typename T>
T Add(T x, T y) {
    return x+y;
}

int main() {
    cout << Add<int>(10, 20) << endl; // �ڷ��� int�� ���
    cout << Add(10, 20) << endl; // ���� ����
    cout << Add<double>(1.1, 2.1) << endl;
    return 0;
}