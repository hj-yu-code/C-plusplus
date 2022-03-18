#include <iostream>
using namespace std;

/*
c1  radius
    (5)
    2000

    p1      p2      p3      p4      p5
    (3000)  (4000)  (5000)  (2000)  (6000)

    --------------------------
    radius  radius  radius  radius
    (1)     (1)      (10)   (5) <- c1 data 복사
    3000    4000    5000    6000
*/
class Circle{
private:
    int radius;
public:
    Circle() { 
        // cout << "Circle()" << endl;
        radius = 1;
        }
    ~Circle() {
        cout << "~Circle() :" << radius << endl;
        }
    Circle(int r) { 
        // cout << "Circle(int r)" << endl;
        radius = r;
        }
    int getRadius(){
        return radius;
    }
    void setRadius(int r){
        radius = r;
    }
    double getArea(){
        return radius * radius * 3.15;
    }
};

int main(){
    Circle c1(5);
    Circle *p1 = new Circle;
    Circle *p2 = new Circle(); // 위에와 같은 것
    Circle *p3;

    p3 = new Circle(10);

    cout << p1->getRadius() << endl;
    cout << p2->getRadius() << endl;
    cout << p3->getRadius() << endl;

    Circle *p4 = &c1;
    cout << p4->getRadius() << endl;

    Circle *p5 = new Circle(c1);
    cout << p5->getRadius() << endl;

    delete p1;
    delete p2;
    delete p3;
    //p4는 stack에 있는 변수의 주소이므로 delete하면 안됨
    delete p5;

    return 0;
}