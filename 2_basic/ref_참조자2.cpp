#include <iostream>
using namespace std;
/*
참조자를 사용하는 이유
1. 함수를 실인수로 사용할때 함수 내부에서 할당하는 메모리가 따로 필요하지 않음
2. 함수 외에서도 임시공간을 따로 만들어서 바로 사용할 수도 있음
*/


// int Add1(int x, int y){
int Add1(int &x, int &y){ // 결과는 같지만, 할당하는 메모리가 없음
    return x+y;
}
int Add2(const int& x, const int& y){ // 임시공간으로 게산 바로 진행
    return x+y;
}

int main(){
    const int N = 100 * 200;
    const int& ref_N = 100 + 200; // 임시공간을 할당하여 저장

    // 상수를 참조하는 이유
    int n1 = 100, n2 =200;

    int ret1 = Add1(n1, n2);
    cout << " Add1(n1, n2) : " << ret1 << endl;

    int ret2 = Add2(100, 200); // 변수 메모리 필요 없음
    cout << " Add2(100, 200) : " << ret1 << endl;

    return 0;
}