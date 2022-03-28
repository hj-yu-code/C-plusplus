#include <iostream>
using namespace std;

class SoBase {
private:
    int baseNum;
public:
    SoBase() { // 상속이 있으면 무조건 있어야 함
        cout << "SoBase() : " << endl;
    }
    SoBase(int n) : baseNum(n) {
        cout << "SoBase(int n) : " << baseNum << endl;
    }
    ~SoBase() {
        cout << "~SoBase() : " << baseNum << endl;
    }
};

class SoDerived : public SoBase {
private:
    int devNum;
public:
    SoDerived() {
        cout << "SoDerived() : " << endl;
    }
    SoDerived(int n) : SoBase(n) // 기반 클래스
    {
        devNum = n;
        cout << "SoDerived(int n) : " << devNum << endl;
    }
    ~SoDerived() {
        cout << "~SoDerived() : " << devNum << endl;
    }
};

int main() {
    SoDerived a;

    SoDerived b(100);
/*
SoBase() : <- 빈괄호 생성자
SoDerived() :
SoBase() : <- 빈괄호 생성자(if 기반 클래스 x)
SoDerived(int n) : 100
~SoDerived() : 100
~SoBase() : -231139648 <- 쓰레기 값 소멸
~SoDerived() : 1
~SoBase() : 0
*/

    return 0;
}