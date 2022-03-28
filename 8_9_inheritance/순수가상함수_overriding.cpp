#include <iostream>
using namespace std;

class AAA { // 추상클래스
public:
    virtual void fct() =0; // 순수 가상함수 (실행부 x)
    void show() {
        cout << "AAA show()" << endl;
    }
};

class BBB : public AAA {
public:
    void fct() { // 파생 클래스는 반드시 순수 가상함수를 구현해야 함
        cout << "class BBB fct()" << endl;
    }
};

class CCC : public BBB {
public:
    void fct() { // 파생 클래스는 반드시 순수 가상함수를 구현해야 함
        cout << "class CCC fct()" << endl;
    }
};

int main() {
    // AAA *a1 = new AAA; // 추상 클래스는 객체를 생성할 수 없음
    AAA *a2 = new BBB;
    a2->fct(); // BBB
    a2->show(); // AAA
    
    AAA *a3 = new CCC;
    a3->fct(); // CCC

    delete a2;
    delete a3;
    
    return 0;
}