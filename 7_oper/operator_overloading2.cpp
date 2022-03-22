#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0) {
        x = _x, y = _y;
    }
    void showData() {
        cout << "x: " << x << ", y: " << y << endl;
    }
    Point &operator++() {
        this->x++;
        y++;
        return *this;
    }
    Point operator++(int){
        Point temp(x++, y++);
        return temp;
    }
    friend Point& operator--(Point &ref);
    friend Point operator--(Point &ref, int);
};
Point& operator--(Point &ref) { // 값을 수정하므로 const하면 안됨
    ref.x--;
    ref.y--;
    return ref;
}

Point operator--(Point &ref, int) { 
    Point temp(ref.x--, ref.y--);
    return temp;
}

int main() {
    Point p1(1, 1);

    ++p1; // p1.operator++() 맴버 함수
    p1.showData();

    ++(++p1);
    p1.showData();

    --p1; // operator--(p1) 전역 함수
    p1.showData();

    cout << "========================" << endl;
    //p1++; : p1.operator++(int) 후위연산
    //++p1; : p1.operator++() 선위연산

    Point p2(1, 1);
    Point p3 = p2++; // p1.operator++(int)

    p2.showData(); // 2, 2
    p3.showData(); // 1, 1

    Point p4 = p2--; // operator--(p1, int)
    p2.showData(); // 1, 1
    p4.showData(); // 2, 2
    cout << "========================" << endl;

    return 0;
}