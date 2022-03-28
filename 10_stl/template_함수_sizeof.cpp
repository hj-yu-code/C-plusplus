#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
int sizeOf(T num) {
    return sizeof(num);
}

// ���ø� Ư��ȭ
// const char * �ڷ����� ���� �� method overloading
template<>
int sizeOf<const char *>(const char *str) {
    cout << "int sizeOf<const char *>(const char *str)" << endl;
    return strlen(str);
}

int sizeOf(const char *str) {
    cout << "int sizeOf(const char *str)" << endl;
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
    cout << "sizeOf(str): " << sizeOf<const char *>(str) << endl;


    return 0;
}