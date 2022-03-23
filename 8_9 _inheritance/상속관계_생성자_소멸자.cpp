#include <iostream>
using namespace std;

class SoBase {
private:
    int baseNum;
public:
    SoBase() { // ����� ������ ������ �־�� ��
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
    SoDerived(int n) : SoBase(n) // ��� Ŭ����
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
SoBase() : <- ���ȣ ������
SoDerived() :
SoBase() : <- ���ȣ ������(if ��� Ŭ���� x)
SoDerived(int n) : 100
~SoDerived() : 100
~SoBase() : -231139648 <- ������ �� �Ҹ�
~SoDerived() : 1
~SoBase() : 0
*/

    return 0;
}