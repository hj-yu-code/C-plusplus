#include <iostream>
using namespace std;

class Point {
protected: // 상속관계에서 사용
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
        cout << "(" << x << ", " << y << ")" << endl; // protected 여서 상속 가능
        // showPoint();
    }
    bool equals(const ColorPoint &ref) {
        if ((this->x == ref.x) && (this->y == ref.y)) {
            return true;
        }
        return false;
    }
};


int main() {
    ColorPoint cp;
    cp.set(10, 20);
    cp.setColor("Red");

    cp.showColorPoint();

    ColorPoint cp2;
    cp2.set(10, 20);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

    cp2.set(20, 20);
    cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

    return 0;
}