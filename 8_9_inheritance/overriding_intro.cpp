#include <iostream>
using namespace std;

/*
�ż��� �������̵�(Overriding) : �Լ� ������(-> ���⼺)
�ż��� �����ε�(Overloading) : �Լ� �ߺ�����
*/


class AAA {
public:
    void fct() {
        cout << "fct()" << endl;
    }
};

class BBB : public AAA {
public:
    void fct() { // �ż��� �������̵�(������)
        cout << "class BBB fct()" << endl;
    }
};


int main() {
    BBB b1; // �������̵��� �ڽ��� �ż��带 ȣ����
    // ��� Ŭ���� �ż��带 ������ ȿ��

    b1.fct();
    b1.AAA::fct(); // ����� ȣ��

    BBB *b2 = new BBB;
    b2->fct();
    b2->AAA::fct(); // ����� ȣ��

    AAA *a1 = b2; // UpCast
    a1->fct(); // AAA �ż��� ȣ��

    // a1->BBB::fct();
    // error : ��� Ŭ���� �����ʹ� �Ļ�Ŭ���� ��ü�� ����ų �� ����


    return 0;
}