#include <iostream>
using namespace std;
/*
donut   radius      pizza   radius
        (1)                 (30)
        3000                4000

    p
    (3000) -> 수정 : (4000)
    2000
*/
class Circle{
private:
    int radius;
public:
    Circle() { radius = 1; }
    ~Circle() { cout << "~Circle" << endl;}
    Circle(int r) { radius = r; }
    int getRadius(){
        return radius;
    }
    double getArea(){
        return radius * radius * 3.15;
    }
};

int main(){
    Circle donut;
    Circle pizza(30);

    Circle* p = &donut;
    cout << "p->getArea(): " << p->getArea() << endl;

    p = &pizza;
    cout << "p->getArea(): " << p->getArea() << endl;
    
    return 0;
    // 소멸자 2번 받음(p는 단순한 변수임)
}