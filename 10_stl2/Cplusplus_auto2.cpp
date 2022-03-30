#include <iostream>
#include <vector>
using namespace std;

int square(int n) {
    return n*n;
}

// 매개변수는 컴파일시 변수에 타입을 추론할 수 없으므로 auto 키워드 불가
// int add(auto a, auto b) { // error
int add(int a, int b) {
    return a + b;
}
auto add_2(int a, double b) { // double로 알아서 형 변환
    return a + b ;
}

template<typename T1, typename T2>
auto ADD(T1 a, T1 b) { // template에서도 auto 타입 반환 가능
    return a + b;
}


int main() {
    auto ret = square(3); // 넘어오는 값이 int 이므로 auto변수가 int로 선언
    cout << "ret : " << ret << endl;

    auto sum = add(10, 20);
    cout << "sum : " << sum << endl;
    auto sum_2 = add_2(10, 20);
    cout << "sum_2 : " << sum_2 << endl;

    auto t1 = ADD<int, float>(100, 1.5);
    auto t2 = ADD<int, char>(1, 'A');
    // auto t3 = ADD(100, 2.0); // visual studio에서는 잘 실행됨
    auto t3 = ADD<int, int>(100, 2.0);

    cout << typeid(t1).name() << ", " << typeid(t2).name() << ", " << typeid(t3).name() << endl;

    auto add2 = add_2; // 함수포인터 변수
    // 가독성이 잘 안되므로 사용에 주의해야 함
    auto sum2 = add2(100, 7.1);
    cout << "sum2 : " << sum2 << endl;
    return 0;
}