#include <iostream>
#include <cstring>
using namespace std;
/*
    <stack> --> NULL로 초기화
    num(4)  str(4)  array(4)    N(4)
    (3000)  (4000)  (5000)      (6000)
    200     210     220         230

    -------------------------------------------
    <heap> --> delete 하면 heap공간이 지워짐
    __(4)   __(20)              __(20)      __(4)
    (100)   ("hello world")     ([10, 20])  (200)
    3000    4000                5000 5004   6000

*/

int main(){
    int *num = new int;
    int *N = new int (200); // 메모리 할당과 동시에 초기화

    char *str = new char[20];
    int *Array = new int[5];

    *num = 100;
    strcpy(str, "hello world.");
    *(Array + 0) = 10;
    *(Array + 1) = 20;

    cout << *num <<endl;
    cout << *N <<endl;
    cout << str << endl;
    cout << Array[0] << ", " << Array[1] << endl;
    cout << Array[2] << ", " << Array[3] << endl; //garbage
    
    // heap 데이터 삭제
    delete num;
    delete N;
    delete[] Array;
    delete[] str;

    // stack 데이터 초기화
    num = NULL; // c 용어
    N = NULL;
    Array = nullptr; // c++ 추가 용어
    str = nullptr;

    return 0;
}