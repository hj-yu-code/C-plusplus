#include <iostream>
using namespace std;
// string1
class AAA {
public:
    void string1() {
        cout << "AAA: string1()" << endl;
    }
};

// �Ļ� Ŭ�������� ��� Ŭ������ virtual ����� ������,
// �����Ϸ��� ��� Ŭ���� ������ �ѹ��� �Ҵ��ϰ�, �Ļ� Ŭ������ �Ҵ�� ������ �����ϵ��� ������

// string1, string2
class BBB : virtual public AAA { // virtual ���
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

// string1, string2, string1, string3 >> string1 �浹 >> virtual �������
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