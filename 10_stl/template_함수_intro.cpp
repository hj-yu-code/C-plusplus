#include <iostream>
using namespace std;

/*
중복함수 변경시 모든 함수를 변경할 필요가 없음
T : 자료형을 결정짓지 않음
*/

// template <class T>  // 같은 내용 (헷갈릴까봐 typename 으로 사용)
template <typename T>
T Add(T x, T y) {
    return x+y;
}

int main() {
    cout << Add<int>(10, 20) << endl; // 자료형 int로 출력
    cout << Add(10, 20) << endl; // 생략 가능
    cout << Add<double>(1.1, 2.1) << endl;
    return 0;
}