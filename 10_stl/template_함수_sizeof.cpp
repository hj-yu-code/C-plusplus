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
    // 일반 함수 미선언 시, 주소의 크기 반환(4)


    return 0;
}