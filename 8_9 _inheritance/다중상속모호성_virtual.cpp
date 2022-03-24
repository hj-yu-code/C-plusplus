#include <iostream>
using namespace std;
// string1
class AAA {
public:
    void string1() {
        cout << "AAA: string1()" << endl;
    }
};

// 파생 클래스에서 기반 클래스를 virtual 상속을 받으면,
// 컴파일러는 기반 클래스 공간을 한번만 할당하고, 파생 클래스는 할당된 공간을 공유하도록 지시함

// string1, string2
class BBB : virtual public AAA { // virtual 상속
public:
    void string2() {
        cout << "BBB: string2()" << endl;
    }
};

// string1, string3
class CCC : virtual public AAA {
public:
    void string3() {
        cout << "CCC: string3()" << endl;
    }
};

// string1, string2, string1, string3 >> string1 충돌 >> virtual 상속진행
class DDD : public BBB, public CCC {
public:
    void showString() {
        cout << "DDD: showString()" << endl;
    }
};
int main() {
    DDD d1;
    d1.string1();
    d1.BBB::string1();
    d1.AAA::string1();
    d1.string2();
    d1.string3();
    d1.showString();

    return 0;
}