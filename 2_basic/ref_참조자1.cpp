#include <iostream>
using namespace std;

int main(){
    int salary = 300000;
        //�����ڸ�  // ������ ����
    int &r_salary = salary; // salary �ּҷ� ã�ư��� ������

    cout << salary << ", " << r_salary << endl;

    r_salary += 200000;
    cout << salary << ", " << r_salary << endl;
    cout << &salary << ", " << &r_salary << endl;

    int *p1 = &salary;
    cout << *p1 << ", " << &p1 << endl;

    // int& n1; //error
    // �����ڴ� �ݵ�� �ʱ�ȭ

    // int &n2 = 100; //error
    // lvalue �� ����(�̸��� �ο��� ����)

    const int &n3 = 200; // ok
    // �ӽ� �޸𸮿� ����

    return 0;
}