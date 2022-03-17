#include <iostream>
using namespace std;

class Point{
private:
int x, y; // 1~100 사이만 저장
public:
    int getX(){ return x; }

    int getY(){ return y; }

    bool setX(int &_x) { // 참조형 사용가능
        if(_x < 1 || _x > 100){
            cout << "x 좌표 오류, 좌표는 1~100 사이 학인." << endl;
            return false;
        }
        x = _x;
        return true;
    }
    bool setY(int _y){
        if(_y < 1 || _y > 100){
            cout << "y 좌표 오류, 좌표는 1~100 사이 학인." << endl;
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
    void print(Point &refP){ // 이렇게 사용할 수 있으나 캡슐화의 의미가 하락
        cout << "class A, print(Point &refP) " << endl;
        refP.showXY();
    }
};

int main(){
    int x, y;
    cout << "좌표 x, y ? ";
    cin >> x >> y;

    Point p1;
    bool b1, b2;

    b1 = p1.setX(x);
    b2 = p1.setY(y);

    if(b1 && b2){
        cout << "입력된 자표를 사용하여 image 작업 시작." << endl;
        cout << "x: " << p1.getX() << ", y: " << p1.getY() << endl;
    }else{
        cout << "좌표가 바르지 않습니다." << endl;
        p1.showXY();
    }

    A tmp;
    tmp.print(p1);

    return 0;
}