#include <iostream>
using namespace std;

int main(){
    int salary = 300000;
        //참조자명  // 참조할 변수
    int &r_salary = salary; // salary 주소로 찾아가서 참조함

    cout << salary << ", " << r_salary << endl;

    r_salary += 200000;
    cout << salary << ", " << r_salary << endl;
    cout << &salary << ", " << &r_salary << endl;

    int *p1 = &salary;
    cout << *p1 << ", " << &p1 << endl;

    // int& n1; //error
    // 참조자는 반드시 초기화

    // int &n2 = 100; //error
    // lvalue 만 참조(이름이 부여된 공간)

    const int &n3 = 200; // ok
    // 임시 메모리에 저장

    return 0;
}