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

    // 기반 클래스 포인터는 파생클래스 포인터를 저장할 수 있음
    Person* p1 = new Person();
    Person* p2 = new Student(); // UpCast
    Person* p3 = new PartTimeStd();

    // 기반 클래스 포인터는 가르키는 대상에 상관없이
    //   기반 클래스 내에 선언된 맴버에만 접근 가능
    p1->Sleep();
    p2->Sleep();
    // p2->Study();
    // error : 상속은 받았지만 객체포인터가 기반 클래스 타입이므로 접근 불가
    
    p3->Sleep();
    // p3->PartTimeStd::Work();
    // error : 상속은 받았지만 객체포인터가 기반 클래스 타입이므로 접근 불가

    Student *s1 = new PartTimeStd();
    s1->Sleep();
    s1->Study();
    cout << "================" << endl;

    // 파생 클래스 객체 포인터는 기반 클래스 주소를 저장할 수 없음
    // PartTimeStd *pt1 = new Person(); // DownCast

    // PartTimeStd *pt1 = (PartTimeStd*)p1; // C style 명시적 형변환
    PartTimeStd *pt1 = (static_cast<PartTimeStd*>(p1)); // C++ style 명시적 형변환
    pt1->Sleep();
    pt1->Study();
    pt1->Work(); // 강제로는 되나 쓰레기 값 입력


    return 0;
}