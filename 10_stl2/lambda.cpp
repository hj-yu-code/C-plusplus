#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
lambda 구조 : [캡처] (매개변수)->리턴타입 {함수 동작} (호출인자)

캡쳐 : 람다식에서 사용하고자 하는 함수 바깥의 변수 목록
매개변수 : 보통 함수의 매개 변수 리스트와 동일
리턴 타입 : 생략가능
함수 동작 : 람다식의 실행 함수 코드
호출인자 : 매개 변수에 넣을 값
*/
// lambda 함수는 인라인 함수처럼 대체가 이뤄질 것임

void sum1(int x, int y) {
    cout << "sum1() : " << x+y << endl;
}

int main() {
    //1. 일반함수 호출
    sum1(10, 20);

    //2. 람다함수 호출
    [](int x, int y){
        cout << "sum1()과 동일한 lambda 함수 : " << x+y << endl;
    }(10, 30);

    //3. 합을 구하는 변수에 저장하는 람다(캡처 사용)
    int sum = 0;
    [&sum](int x, int y) { sum = x+y;}(10, 30);
    cout << "sum : " << sum << endl;

    // 4. for_each를 사용하는 람다
    vector<int> v = { 1, 2, 3, 4, 5 };
    for_each(v.begin(), v.end(), [](int n){cout << n << ", ";} );
    // for_each : algorithm 헤더에 있음
    // 첫번째 인자부터 두번째 인자까지 반복하고, 그 값을 세번째 인자로 액션을 취함

    int sum2 = 0;
    for_each(v.begin(), v.end(), [&sum2](int n){sum2 += n;} );
    cout << "\nsum2 : " << sum2 << endl;

    double pi = 3.14159;
    // 5. 람다명 사용하는 람다함수
    auto calc = [pi](int r)->double {return pi *r*r;}; // 람다명 : calc
    cout << "면적 : " << calc(5) << endl;

    int num = 10, num2;
    auto f1 = [num]() {cout << num*num << endl;};
    f1();

    auto f2 = [num]()->int {return num * num;};
    cout << f2() << endl;

    auto f3 = [num, &num2](){num2 = num*num;}; // num : 사용, &num2 : 저장
    f3();
    cout << "num2 : " << num2 << endl;

    return 0;
}