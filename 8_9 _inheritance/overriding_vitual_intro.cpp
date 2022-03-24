#include <iostream>
using namespace std;

class AAA {
public:
    virtual void fct() { // ���� �Լ�
        cout << "class BBB fct()" << endl;
    }
};

class BBB : public AAA {
public:
    // virtual void fct() { // �����Լ��� ��ӵ� ����� ����
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

    // ��� Ŭ���� �����Ͱ� �Ļ�Ŭ���� �ż��带 ȣ��
    // ����� ��� Ŭ������ ���� (�� ����� �Ļ�Ŭ���� �ּҷ� ����, = ��������)
    // �Լ��� virtual �� �Ǹ� ��ü������ Ÿ�԰� ������� ����Ű�� ��� ��ü�� ������ ��
    AAA *a1 = new BBB;
    a1->fct() ; // BBB
    AAA *a2 = new CCC;
    a2->fct(); // CCC

    BBB *b2 = new CCC;
    b2->fct(); // CCC
    cout << "========================" << endl;

    AAA *a3 = b2;
    a3->fct(); // CCC
    a3->AAA::fct(); // BBB ���� ������?
    // a3->BBB::fct(); // �ȵŴ� ������?

    AAA *a4 = new AAA;
    // CCC *c1 = a4; // DownCast�� ��� �Ұ�

    return 0;


}