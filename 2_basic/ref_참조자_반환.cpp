#include <iostream>
using namespace std;
int &refFuncOne(int &ref){
    ref++;
    return ref; //참조자로 받아서 참조자로 반환 
}
int &refFuncTwo(int &ref){
    ref++;
    return ref; //정수 반환 2 
}
int main(){
    int num1 = 1;
    int& num2 = refFuncOne(num1);
    num1++;
    num2++; // 둘다 같은 메모리를 보고 있으므로 둘 다 4다 
    cout << num1 << ", " << num2 << endl;


    num1 = 1;
    int num3 = refFuncTwo(num1); // 값을 받은것 참조자도 반환 가능 
    num1++; // 3
    num3++; // 1 ref 에서 값만 받는다. 
    cout << num1 << ", " << num3 << endl;

    return 0;
}