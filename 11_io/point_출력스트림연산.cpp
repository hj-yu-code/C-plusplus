#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0) {
        x = _x, y = _y;
    }
    friend ostream &operator<<(ostream &os, Point &ref);
};

ostream &operator<<(ostream &os, Point &ref) {
    os << ref.x << ", " << ref.y << endl;
    return os;
}

int main() {
    Point p1(3, 5);

    // cout.operator<<(p1) // 맴버함수
    // operator<<(cout, p1) // 전역함수
    cout << p1 << endl;
    return 0;
}