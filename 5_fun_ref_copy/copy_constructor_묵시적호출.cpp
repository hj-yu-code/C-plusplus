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
        return *this; // 주소로 반환
    }
};

int main() {
    SoSimple obj(2700000);

    // 1. 객체가 생성과 동시에 객체 초기화 될 때
    SoSimple obj2(obj);
    obj2.showData();
    cout << "============================" << endl;

    // 2. 객체가 함수의 인자로 전달될 때 (참조자로 부르면 안됨)
    obj.Simple1(obj2);
    cout << "============================" << endl;

    // 3. 객체가 반환될 때
    SoSimple obj3 = obj.Simple2();
    obj3.showData();

    // obj.AddSudana(100000);
    // obj.showData();
    obj.AddSudana(100000).showData(); // 바로 함수 사용 가능

    return 0;
}