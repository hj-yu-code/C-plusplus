#include <iostream>
using namespace std;
int Sub(int num1=5, int num2=3); // 메서드 선언문
// default 인자 값은 반드시 선언부에 두기

int Add(int num1=1, int num2=3){
    return num1+num2;
}

int main(){
    cout << Add() << endl;  // 4
    cout << Add(10) << endl; // 13
    // Add(int num1=1, int num2) : error
    // default 인자는 마지막에 와야 함
    cout << Add(10, 20) << endl; //30

    cout << Sub() << endl;  // 2
    cout << Sub(10) << endl; // 7
    cout << Sub(10, 5) << endl; // 5

    return 0;
}
int Sub(int num1, int num2){ // 메서드 실행문
    //default 인자 값은 실행문에 두지 않기
    return num1-num2;
}