#include <iostream>
using namespace std;
// �Ϲ��Լ��� template �Լ����� �켱 ����

// template �Լ�
template <typename T>
void print(T *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << ", ";
    }
    cout << endl;
}

// �Ϲ� �Լ�
void print(char *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << (int)*(arr + i) << ", ";
    }
    cout << endl;
}

int main() {
    int x[5] = {1, 2, 3, 4, 5};
    double d[7] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1};

    print(x, sizeof(x)/sizeof(x[0]));
    print(d, sizeof(d)/sizeof(d[0]));

    char c1[5] = {1, 2, 3, 4, 5};
    print(c1, sizeof(c1)/sizeof(c1[0])); // �Ϲ��Լ� ȣ��
    char c2[5] = {'A', 'B', 'C', 'D', 'F'};
    print<char>(c2, sizeof(c2)/sizeof(c2[0])); // �Ϲ��Լ��� �ƴ� template�Լ� ȣ��

    return 0;
}