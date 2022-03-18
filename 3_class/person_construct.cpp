#include<iostream>
#include<cstring>
using namespace std;


//�����ڸ� �ۼ��Ͽ� ������ ����Ͻÿ�.
/*
name: , phone: , age: 0
name: KIM, phone: 010-333-5555, age: 22
name: LEE, phone: 010-111-1234, age: 37
*/


/*
    p4          p5      
    (3000)      (4000)     ||  (han\0) (010-111-1234\0) -> ���μ����� ������ ������(���ڿ� ����� data������ �Ҵ�)
    100         200        ||   6000    6100

Person  [_naem  _phone  age] --> �����ڰ� ������ �� �޸𸮴� �����
        (6000)  (6100)  (28)

    ---------------------------
    [name(20)   phone(20)   age] --> delete �޼ҵ�� �ش� ��ü ����
    (\0)        (\0)        (0)
    3000

    [name(20)   phone(20)           age]
    (han\0)     (010-111-1234\0)    (28)
    4000        4020                4040
*/

const int SIZE = 20;

class Person
{
private:
	char name[SIZE] ;
	char phone[SIZE] ;
	int age;
public:
	void ShowData();

    Person() : Person("", "", 0)
    {
		// strcpy(name, "");
		// strcpy(phone, "");
		// age = 0;
    }
    ~Person() {
        cout << "~Person(): age : " << age << endl;
    }
	Person(const char* _name, const char* _phone, int _age)
	{
		strcpy(name, _name);
		strcpy(phone, _phone);
		age = _age;

	}
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main()
{
	Person p1;
	p1.ShowData(); //������ ���

	Person p2("KIM", "010-333-5555", 22);
	p2.ShowData();

	Person p3 = Person("LEE", "010-111-1234", 37);
	p3.ShowData();

    Person* p4 = new Person();
	p4->ShowData(); // ȭ��ǥ ����

    Person* p5 = new Person("HAN", "010-111-1234", 28);
	p5->ShowData();

    delete p4;
    delete p5;

	return 0;
}