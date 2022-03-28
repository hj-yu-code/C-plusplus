#include <iostream>
using namespace std;

template<typename T>
class Point {
private:
    T x, y;
public:
    Point(const Point &ref) { // ���������
        cout << "Point(const Point &ref)" << endl;
        x = ref.x;
        y = ref.y;
    }
    Point(T _x = 0, T _y = 0) {
        x = _x, y = _y;
    }
    void showData() {
        cout << "x: " << x << ", y: " << y << endl;
    }
    Point operator+(const Point &ref) {
        cout << "Point operator+(const Point &ref) " << endl;
        return Point(x+ref.x, y+ref.y);
    }
    void operator=(const Point &ref) {
        cout << "void operator=(const Point &ref)" << endl;
        x = ref.x;
        y = ref.y;
    }
};

template<typename T>
T Add(T data1, T data2) {
    T tmp;  // ��������� ���� - ��ü ����&�ʱ�ȭ
    tmp = data1 + data2; // class operation �ʿ�
    return tmp;
}


int main() {
    Point<int> p1(1, 1);
    Point<int> p2(2, 2);
    Point<int> p3 = Add(p1, p2); // ��������� ���� - ��ü��ȯ
    p3.showData();
    cout << "=================================\n";

    Point<int> p7;
    p7 = p1; // p7.operator=(p1)
    p7.showData();

    Point<double> p4(1.1, 1.1);
    Point<double> p5(2.1, 2.1);
    Point<double> p6 = Add(p4, p5);
    p6.showData();

    return 0;
}