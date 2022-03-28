#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
int sizeOf(T num) {
    return sizeof(num);
}

int sizeOf(const char *str) {
    return strlen(str);
}

int main() {
    int n =100;
    double d = 3.9;

    cout << "sizeOf(n): " << sizeOf(n) << endl;
    cout << "sizeOf(d): " << sizeOf(d) << endl;
    
    const char* str = "Hello World!";
    cout << "sizeOf(str): " << sizeOf(str) << endl;
    // �Ϲ� �Լ� �̼��� ��, �ּ��� ũ�� ��ȯ(4)


    return 0;
}