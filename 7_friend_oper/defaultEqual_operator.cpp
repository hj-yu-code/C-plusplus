#include <iostream>
using namespace std;

class Point 
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) {
        x = _x;
        y = _y;
    }

    void showData()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
    Point(const Point &ref) { // ���� ������
        cout << "Point(const Point &ref)" << endl;
        x = ref.x;
        y = ref.y;
    }
    Point &operator=(const Point &ref) {
        cout << "operator=(const Point &ref)" << endl;
        this->x = ref.x;
        this->y = ref.y;
        return *this;
    }
};

int main() {
    Point p1(1, 5);
    Point p2(p1);
    
    p1.showData();
    p2.showData(); // ���� ������, ��ü�� ������ ���ÿ� ��ü�� ���� �� ȣ��

    Point p3;
    p3 = p1; // ����Ʈ ���� ������ �ż��� ����, ��ü�� ���Թ����� ��ü�� ���Թ��� �� ȣ��
            // p3 = p1.operator=()
    p3.showData();
    cout << "=================" << endl;
    Point p4, p5;
    p5 = p4 = p1; // void �� �ƴ� Point &�� �ָ� ����
    p4.showData();
    p5.showData();
    return 0;
}