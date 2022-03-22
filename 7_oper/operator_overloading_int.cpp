#include <iostream>
using namespace std;
// ù��° ���ڰ� this�� �ȵ� ���
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

Point operator+(int n, const Point &ref){ // �����Լ�
    Point temp(n+ref.x, n+ref.y);
    return temp;
}

int main() {
    Point p1(1, 1);
                        // this : �ɹ� ��ü
    Point p2 = 30 + p1; // 30.operator+(p1) -> �����Լ��� ����
                        // operator(30, p1)
    p2.showData();
    return 0;
}