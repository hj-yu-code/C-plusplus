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
    Point operator+(int value){
        Point temp;
        temp.x = this->x+value;
        temp.y = this->y+value;
        return temp;
    }
    Point(const Point &ref) {
        cout << "Point(const Point &ref)" << endl;
        x = ref.x;
        y = ref.y;
    }
};
int main() {
    Point p1(1, 2);
    p1.showData();

             // operator + (30)
    Point p2 = p1 + 30;
    p2.showData();

    return 0;
}