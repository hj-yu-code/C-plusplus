#include<iostream>
#include<cstring>
using namespace std;

/*
<shallow copy>
p1  [name   pho     age]
    (6000)  (6100)  (23)
    3000    3004    3008

p2  [name   pho     age]
    (6000)  (6100)  (23)
    4000    4004    4008
    ----------------------------
    name        phone
    (kim\0)     (010-...)
    6000        6100

<deep copy>
p1  [name   pho     age]
    (6000)  (6100)  (23)
    3000    3004    3008

p2  [name   pho     age]
    (7000)  (7100)  (23)
    4000    4004    4008
    ----------------------------
    name        phone       name        phone
    (kim\0)     (010-...)   (kim\0)     (010-...)
    6000        6100        7000        7100

*/

const int SIZE = 20;

class Person
{
private:
	char *name ;
	char *phone ;
	int age;
public:
    void ShowData();

    Person(const char* _name, const char* _phone, int _age){
        cout << "Person(const char* _name, const char* _phone, int _age)" << endl;

        name = new char [strlen(_name)+ 1];
        strcpy(name, _name);

        phone = new char [strlen(_phone)+ 1];
        strcpy(phone, _phone);

        age = _age;
    }

    Person(const Person &ref) { // deep copy Ãß°¡
        name = new char[strlen(ref.name)+1];
        strcpy(name, ref.name);

        phone = new char [strlen(ref.phone)+ 1];
        strcpy(phone, ref.phone);

        age = ref.age;
    }

    ~Person(){
        cout << "~Person(): age : " << age << endl;
        delete name; // 2¹ø ¼Ò¸ê µÊ -> runtime error
        delete phone;
    }
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main(){
    Person p1("kim ", "010-001-1234", 23);
    p1.ShowData();

    Person p2 = p1; // shallow copy
    p2.ShowData();

    return 0;

}