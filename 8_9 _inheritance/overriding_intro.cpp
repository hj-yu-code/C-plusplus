
/*
매서드 오버라이딩(Overriding) : 함수 재정의(-> 다향성)
매서드 오버로딩(Overloading) : 함수 중복정의
*/

#include <iostream>
using namespace std;

class AAA {
public:
    void fct() {
        cout << "fct()" << endl;
    }
};

class BBB : public AAA {
public:
    void fct() { // 매서드 오버라이딩(재정의)
        cout << "class BBB fct()" << endl;
    }
};


int main() {
    BBB b1; // 오버라이딩한 자신의 매서드를 호출함
    // 기반 클래스 매서드를 가리는 효과

    b1.fct();
    b1.AAA::fct(); // 명시적 호출

    BBB *b2 = new BBB;
    b2->fct();
    b2->AAA::fct(); // 명시적 호출

    AAA *a1 = b2; // UpCast
    a1->fct(); // AAA 매서드 호출

    // a1->BBB::fct();
    // error : 기반 클래스 포인터느 파생클래스 객체를 가르킬 수 없음


    return 0;
}