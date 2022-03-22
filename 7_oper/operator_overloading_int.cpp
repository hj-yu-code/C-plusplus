#include <iostream>
using namespace std;
// 첫번째 인자가 this가 안될 경우
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
    friend Point operator+(int n, const Point &ref);
};

Point operator+(int n, const Point &ref){ // 전역함수
    Point temp(n+ref.x, n+ref.y);
    return temp;
}

int main() {
    Point p1(1, 1);
                        // this : 맴버 객체
    Point p2 = 30 + p1; // 30.operator+(p1) -> 전역함수로 선언
                        // operator(30, p1)
    p2.showData();
    return 0;
}