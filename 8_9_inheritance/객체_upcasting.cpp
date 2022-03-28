#include <iostream>
using namespace std;

class Person {
public:
    void Sleep() {
        cout << "Sleep()" << endl;
    }
};

class Student : public Person{
public:
    void Study() {
        cout << "Study()" << endl;
    }
};
class PartTimeStd : public Student {
private:
    int ptNum;
public:
    PartTimeStd() : ptNum(100) {}

    void Work() {
        cout << "Work() : " << ptNum << endl;
    }
};

int main() {
    Person t1;
    Student t2;
    PartTimeStd t3;
    t1.Sleep();

    t2.Sleep();
    t2.Study();
    
    t3.Sleep();
    t3.Study();
    t3.Work();
    cout << "================" << endl;

    // ��� Ŭ���� �����ʹ� �Ļ�Ŭ���� �����͸� ������ �� ����
    Person* p1 = new Person();
    Person* p2 = new Student(); // UpCast
    Person* p3 = new PartTimeStd();

    // ��� Ŭ���� �����ʹ� ����Ű�� ��� �������
    //   ��� Ŭ���� ���� ����� �ɹ����� ���� ����
    p1->Sleep();
    p2->Sleep();
    // p2->Study();
    // error : ����� �޾����� ��ü�����Ͱ� ��� Ŭ���� Ÿ���̹Ƿ� ���� �Ұ�
    
    p3->Sleep();
    // p3->PartTimeStd::Work();
    // error : ����� �޾����� ��ü�����Ͱ� ��� Ŭ���� Ÿ���̹Ƿ� ���� �Ұ�

    Student *s1 = new PartTimeStd();
    s1->Sleep();
    s1->Study();
    cout << "================" << endl;

    // �Ļ� Ŭ���� ��ü �����ʹ� ��� Ŭ���� �ּҸ� ������ �� ����
    // PartTimeStd *pt1 = new Person(); // DownCast

    // PartTimeStd *pt1 = (PartTimeStd*)p1; // C style ����� ����ȯ
    PartTimeStd *pt1 = (static_cast<PartTimeStd*>(p1)); // C++ style ����� ����ȯ
    pt1->Sleep();
    pt1->Study();
    pt1->Work(); // �����δ� �ǳ� ������ �� �Է�


    return 0;
}