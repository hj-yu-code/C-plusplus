#include <iostream>
using namespace std;

/*
    p1      p2      p3
    (3000)  (4000)  (25)->(20)

    per1
    (0)
    5000

    --------------------------
    age     age
    (0)     (25)
    3000    4000
    --------------------------

    --------------------------
    main()
    getThis() >> 같은 주소의 함수 사용
    getThis2()
*/
class Person
{
private:
    int age = 0;
public:
    Person() {}
    ~Person() {}

    void showData(){
        cout << "age : " << age << endl;
    }
    Person *getThis() {
        return this; // 해당 클래스의 주소 값이 있음
        // this : class 안의 메소드에서만 사용가능
    }
    Person getThis2(){
        this->age = 25;
        return *this;
    }

    void setAge(int age){
        this->age = age; // 인자와 매개변수가 같아도 this로 구별 가능
    }
};

int main(){
    Person *p1 = new Person();
    cout << "포인터 p1 : " << p1 << endl; // 3000
    cout << "p1 this 포인터 : " << p1->getThis() << endl; // 3000

    
    Person *p2 = new Person();
    cout << "포인터 p2 : " << p2 << endl; // 4000
    cout << "p2 this 포인터 : " << p2->getThis() << endl; // 4000

    cout << "객체반환" << endl;
    Person p3 = p2->getThis2();
    p2->showData();
    p3.showData(); // 포인터가 아니므로 '.'으로 사용

    delete p1;
    delete p2;
    // p3는 stack에 있음

    Person per1;
    cout << "&per1 : " << &per1 << endl; // 5000
    cout << "per1.getThis() 포인터 : " << per1.getThis() << endl; // 5000

    p3.setAge(20);
    p3.showData(); // 20



    return 0;
}