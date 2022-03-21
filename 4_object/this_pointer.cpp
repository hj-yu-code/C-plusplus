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
    getThis() >> ���� �ּ��� �Լ� ���
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
        return this; // �ش� Ŭ������ �ּ� ���� ����
        // this : class ���� �޼ҵ忡���� ��밡��
    }
    Person getThis2(){
        this->age = 25;
        return *this;
    }

    void setAge(int age){
        this->age = age; // ���ڿ� �Ű������� ���Ƶ� this�� ���� ����
    }
};

int main(){
    Person *p1 = new Person();
    cout << "������ p1 : " << p1 << endl; // 3000
    cout << "p1 this ������ : " << p1->getThis() << endl; // 3000

    
    Person *p2 = new Person();
    cout << "������ p2 : " << p2 << endl; // 4000
    cout << "p2 this ������ : " << p2->getThis() << endl; // 4000

    cout << "��ü��ȯ" << endl;
    Person p3 = p2->getThis2();
    p2->showData();
    p3.showData(); // �����Ͱ� �ƴϹǷ� '.'���� ���

    delete p1;
    delete p2;
    // p3�� stack�� ����

    Person per1;
    cout << "&per1 : " << &per1 << endl; // 5000
    cout << "per1.getThis() ������ : " << per1.getThis() << endl; // 5000

    p3.setAge(20);
    p3.showData(); // 20



    return 0;
}