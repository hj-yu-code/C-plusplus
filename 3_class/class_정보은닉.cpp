#include <iostream>
using namespace std;

class Point{
private:
int x, y; // 1~100 ���̸� ����
public:
    int getX(){ return x; }

    int getY(){ return y; }

    bool setX(int &_x) { // ������ ��밡��
        if(_x < 1 || _x > 100){
            cout << "x ��ǥ ����, ��ǥ�� 1~100 ���� ����." << endl;
            return false;
        }
        x = _x;
        return true;
    }
    bool setY(int _y){
        if(_y < 1 || _y > 100){
            cout << "y ��ǥ ����, ��ǥ�� 1~100 ���� ����." << endl;
            return false;
        }
        y = _y;
        return true;
    }

    void showXY(){
        cout << "x: " << x << ", y: " << y << endl;
    }
};


class A{
public:
    void print(Point &refP){ // �̷��� ����� �� ������ ĸ��ȭ�� �ǹ̰� �϶�
        cout << "class A, print(Point &refP) " << endl;
        refP.showXY();
    }
};

int main(){
    int x, y;
    cout << "��ǥ x, y ? ";
    cin >> x >> y;

    Point p1;
    bool b1, b2;

    b1 = p1.setX(x);
    b2 = p1.setY(y);

    if(b1 && b2){
        cout << "�Էµ� ��ǥ�� ����Ͽ� image �۾� ����." << endl;
        cout << "x: " << p1.getX() << ", y: " << p1.getY() << endl;
    }else{
        cout << "��ǥ�� �ٸ��� �ʽ��ϴ�." << endl;
        p1.showXY();
    }

    A tmp;
    tmp.print(p1);

    return 0;
}