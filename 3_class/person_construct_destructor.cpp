#include <iostream>
#include <cstring>
using namespace std;
/*
p1  [name   phone   age]
    (4000)  (4100)  (23)
    3000    3004    3008

Person  [_name  _phone  age] --> �����ڰ� ������ �Ҹ�
        (6000)  (6100)  (23)

    (kim ja\0)  (010-001-1234\0) --> �ӽð��� >> ���������� ��� �Ұ�
    6000        6100

    ------------------------------
    __(7)           __(12)    ---->> �Ҹ��ڿ��� delete�� ���� �Ҹ�
    (kim ja\0)      (010-001-1234\0)
    4000            4100
*/
class Person
{
private:
    char* name; // �����Ҵ�
    char* phone;
    int age;

public:
    void ShowData();

    Person(const char* _name, const char* _phone, int _age){
        name = new char [strlen(_name)+ 1];
        strcpy(name, _name);

        phone = new char [strlen(phone)+ 1];
        strcpy(phone, _phone);

        age = _age;
    }
    ~Person(){
        cout << "~Person(): age : " << age << endl;
        delete name;
        delete phone;
    }
};

void Person::ShowData(){
    cout << "name : " << name << ", phone : " << phone << ", age : " << age << endl;
}

int main(){
    Person p1("kim js", "010-001-1234", 23);
    p1.ShowData();

    return 0;

}