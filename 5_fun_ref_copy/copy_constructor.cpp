#include <iostream>
using namespace std;
/*
p1  [x      y]
    (10)    (20)

p2  [x      y]
    (10)    (20)
*/
class Point
{
private:
    int x, y;
public:
    Point() {
        cout << "Point()" << endl;
    }
    Point(int _x, int _y){
        cout << "Point(int _x, int _y)" << endl;
        x = _x, y = _y;
    }

    Point(const Point &ref) { // ���� ������
     // �ڱ� �����ڰ� ������, �ڱ� �ڽ��� ���۷����� ���ڷ� ����
     // �ȸ��� �˾Ƽ� default�� �������
        cout << "Point(const Point &ref)" << endl;
        x = ref.x; // �̼��� �� ���� ����
        y = ref.y; // �̼��� �� ���� ����
        // ���� �ÿ��� ������ �� ���� ������ ������� ��
    }

    void showData(){
        cout << x << ", " << y << endl;
    }
};

int main(){
    Point p1(10, 20);

    // ��ü�� ������ ���ÿ� ��ü�� �ʱ�ȭ �� �� ��������� ȣ��
    Point p2(p1); // Point p2 = p1
    p2.showData();

    return 0;
}