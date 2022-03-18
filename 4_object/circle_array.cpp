#include <iostream>
using namespace std;
/*
circleArray radius
            [(10)   (20)    (30)]
3000        3000    3004    3008

    p(4)
    (3000) -> (3004) -> (3008)
    1000
*/
class Circle{
private:
    int radius;
public:
    Circle() { 
        cout << "Circle()" << endl;
        radius = 1;
        }
    ~Circle() { cout << "~Circle" << endl;}
    Circle(int r) { 
        cout << "Circle(int r)" << endl;
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
    Circle circleArray[3];
    circleArray[0].setRadius(10);
    (*(circleArray+1)).setRadius(20); // 포인터 화
    circleArray[2].setRadius(30);
    
    for (int i= 0; i<3; i++){
        cout << circleArray[i].getRadius() << endl;
    }

    Circle* p = circleArray;
    for (int i= 0; i<3; i++){
        cout << "면적 : " << p->getArea() << endl;
        p++;
    }
    cout << "=====================" << endl;

    Circle c1[2]; // 빈괄호 생성자 2번
    Circle c2[3] = {1, 2, 3}; // circle(int r) 생성자 3번 호출

    return 0;
}