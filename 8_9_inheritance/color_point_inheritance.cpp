#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    void set(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void showPoint() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class ColorPoint : public Point
{
    string color;
public:
    ColorPoint() {}
    void setColor(string _color) {
        color = _color;
    }
    void showColorPoint() {
        cout << color << ": ";
        // cout << "(" << x << ", " << y << ")" << endl; // private 여서 상속 안됨
        showPoint();
    }
};


int main() {
    ColorPoint cp;
    cp.set(10, 20);
    cp.setColor("Red");

    cp.showColorPoint();

    return 0;
}