#include <iostream>
using namespace std;

class AAA {
public:
    virtual void fct() { // 가상 함수
        cout << "class BBB fct()" << endl;
    }
};

class BBB : public AAA {
public:
    // virtual void fct() { // 가상함수는 상속됨 안적어도 가능
    void fct() {
        cout << "class BBB fct()" << endl;
    }
};

class CCC : public BBB {
public:
    virtual void fct() {
        cout << "class CCC fct()" << endl;
    }
};


int main() {
    BBB *b1 = new BBB;
    b1->fct();  // BBB
    b1->AAA::fct(); // AAA
    cout << "========================" << endl;

    // 기반 클래스 포인터가 파생클래스 매서드를 호출
    // 실행시 기반 클래스를 가림 (즉 실행시 파생클래스 주소로 변경, = 동적결합)
    // 함수가 virtual 이 되면 객체포인터 타입과 관계없이 가르키는 대상 객체가 기준이 됨
    AAA *a1 = new BBB;
    a1->fct() ; // BBB
    AAA *a2 = new CCC;
    a2->fct(); // CCC

    BBB *b2 = new CCC;
    b2->fct(); // CCC
    cout << "========================" << endl;

    AAA *a3 = b2;
    a3->fct(); // CCC
    a3->AAA::fct(); // BBB 나온 이유는?
    // a3->BBB::fct(); // 안돼는 이유는?

    AAA *a4 = new AAA;
    // CCC *c1 = a4; // DownCast는 허용 불가

    return 0;


}