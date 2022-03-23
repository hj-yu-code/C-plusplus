#include<iostream>
#include<cstring>
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
    Person() { // for delete destructor initialization
        name = NULL;
        phone = NULL;
    }
    Person(const char* _name, const char* _phone, int _age){
        cout << "Person(const char* _name, const char* _phone, int _age)" << endl;

        name = new char [strlen(_name)+ 1];
        strcpy(name, _name);

        phone = new char [strlen(_phone)+ 1];
        strcpy(phone, _phone);

        age = _age;
    }

    Person(const Person &ref) {
        name = new char[strlen(ref.name)+1];
        strcpy(name, ref.name);

        phone = new char [strlen(ref.phone)+ 1];
        strcpy(phone, ref.phone);

        age = ref.age;
    }

    ~Person(){
        cout << "~Person(): age : " << age << endl;
        delete name;
        delete phone;
    }

    Person &operator=(const Person &ref) {
        cout << "&operator=(const Person &ref)" << endl;
        if (this->name != NULL) {
            delete[] this->name;
            delete[] this->phone;
        }

        this->name = new char [strlen(ref.name)+ 1];
        strcpy(this->name, ref.name);

        this->phone = new char [strlen(ref.phone)+ 1];
        strcpy(this->phone, ref.phone);

        this->age = ref.age;
        return *this;
    }
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main(){
    Person p1("kim ", "010-001-1234", 23);
    p1.ShowData();

    Person p2 = p1;
    p2.ShowData();
    
    Person p3;
    p3 = p1; // deep copy
    p3.ShowData();

    cout << "========================" << endl;

    Person p4("LEE", "010-333-1234", 27);
    p1 = p4; // making copy constructor -> in destructor, having delete
    p1.ShowData();

    return 0;

}