#include <iostream>
#include <cstring>
using namespace std;

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

    Person(const Person &ref) { // add deep copy
        name = new char[strlen(ref.name)+1];
        strcpy(name, ref.name);

        phone = new char [strlen(ref.phone)+ 1];
        strcpy(phone, ref.phone);

        age = ref.age;
    }

    ~Person(){
        cout << "~Person(): age : " << age << endl;
        delete name; // twice delete -> runtime error
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