#include <iostream>
using namespace std;

/*
    p1(4)       p2(4)       pref(4)
    (3000)      (4000)      (5000)
    2000        9000

    P           p3          p4
    (4000)      (5000)      (6000)

    -------------------------------
ref ref1)           ref2)
    [x      y]      [x      y]
    (100)   (100)   (200)   (200)
    3000    3004    4000    4004

ref                 pref2)
    [x      y]      [x      y]
    (300)   (300)   (300)   (300)
    5000    5004    6000    6004
*/

typedef struct _Point
{
    int x;
    int y;
} Point;

void Pnt1(Point &ref){
    ref.x = 100; // 구조체 멤버 연산자
    ref.y = 100;
}

void Pnt2(Point *p){
    p->x = 200; // 구조체 포인터 연산자
    p->y = 200;
}

Point *PntAdder(Point &ref1, Point &ref2){
    Point* p3 = new Point;
    p3->x = ref1.x + ref2.y;
    p3->y = ref1.y + ref2.y;
    return p3;
}

Point &PntAdder2(Point& ref1, Point& ref2){
    Point* p4 = new Point;
    p4->x = ref1.x + ref2.y;
    p4->y = ref1.y + ref2.y;
    return *p4;
}

int main(){
    Point* p1 = new Point;
    p1->x = 10;
    p1->y = 10;

    Point* p2 = new Point;
    p2->x = 20; // 포인터여서 화살표로 가르킴
    p2->y = 20;

    Pnt1(*p1);
    cout << "p1 : " << p1->x << ", " << p1->y << endl;

    Pnt2(p2);
    cout << "p2 : " << p2->x << ", " << p2->y << endl;
    
    Point *pref = PntAdder(*p1, *p2);
    cout << "pref : " << pref->x << ", " << pref->y << endl;

    Point &pref2 = PntAdder2(*p1, *p2);
    cout << "pref2 : " << pref2.x << ", " << pref2.y << endl;

    delete p1;
    delete p2;
    delete pref;
    delete &pref2; // 참조변수는 참조자로 해지

    return 0;
}