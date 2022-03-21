#include<iostream>
using namespace std;

class SoSimple
{
private:
    int salary;
public:
    SoSimple(int sal) {
        salary = sal;
    }
    SoSimple(const SoSimple &ref) {
        salary = ref.salary;
        cout << "SoSimple(const SoSimple &ref) : " << salary << endl;
    }

    void showData() {
        cout << "salary : " << salary << endl;
    }
    void Simple1(SoSimple tmp) {
        cout << "Simple1(SoSimple tmp)" << endl;
        tmp.showData();
    }

    SoSimple Simple2(){
        SoSimple tmp(250000);
        return tmp;
    }

    // SoSimple AddSudana(int sudang) {
    //     salary += sudang;
    // }

    SoSimple &AddSudana(int sudang) {
        salary += sudang;
        return *this; // �ּҷ� ��ȯ
    }
};

int main() {
    SoSimple obj(2700000);

    // 1. ��ü�� ������ ���ÿ� ��ü �ʱ�ȭ �� ��
    SoSimple obj2(obj);
    obj2.showData();
    cout << "============================" << endl;

    // 2. ��ü�� �Լ��� ���ڷ� ���޵� �� (�����ڷ� �θ��� �ȵ�)
    obj.Simple1(obj2);
    cout << "============================" << endl;

    // 3. ��ü�� ��ȯ�� ��
    SoSimple obj3 = obj.Simple2();
    obj3.showData();

    // obj.AddSudana(100000);
    // obj.showData();
    obj.AddSudana(100000).showData(); // �ٷ� �Լ� ��� ����

    return 0;
}