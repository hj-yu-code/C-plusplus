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

    Point operator+(Point &ref);
    friend Point operator-(const Point &ref1, const Point &ref2);
};

Point Point::operator+(Point &ref){ // 맴버함수
    Point temp(x+ref.x, y+ref.y);
    return temp;
}
Point operator-(const Point &ref1, const Point &ref2){ // 전역함수
    Point temp(ref1.x-ref2.x, ref1.y-ref2.y);
    return temp;
}

int main() {
    Point p1(1, 1);
    Point p2(2, 2);
    Point p3 = p1 + p2; // p1.operator+(p2) (3, 3)
    p3.showData();

    p3 = p3 + p2; // (5, 5)
    Point p4 = p3 - p1; // operator-(p3. p1) (4, 4)
    p4.showData();

    return 0;
}