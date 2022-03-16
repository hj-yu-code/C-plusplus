#include <iostream>
using namespace std;

// 함수 중복 정의(method overloading)
void MyFunc(){
    cout << "void MyFunc()"<< endl;
}
void MyFunc(int x){
    cout << "void MyFunc(int x) : " << x << endl;
}
void MyFunc(const char* str){
// void MyFunc(string str){ // 메모리에 제한받지 않으면 string을 많이씀
    cout << "void MyFunc(const char* str) : " << str << endl;
}
void MyFunc(int x, double y){
    cout << "void MyFunc(int x, double y) : " << x * y << endl;
}

int main(){
    MyFunc();
    MyFunc(100);
    MyFunc("인피니트 헬스케어");
    MyFunc(100, 3.5);

    return 0;
}