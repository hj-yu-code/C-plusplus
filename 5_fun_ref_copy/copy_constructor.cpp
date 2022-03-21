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

    Point(const Point &ref) { // 복사 생성자
     // 자기 생성자가 같으며, 자기 자신의 레퍼런스를 인자로 가짐
     // 안만들어도 알아서 default로 만들어짐
        cout << "Point(const Point &ref)" << endl;
        x = ref.x; // 미선언 시 내부 내용
        y = ref.y; // 미선언 시 내부 내용
        // 선언 시에는 무조건 다 내부 내용을 적어줘야 함
    }

    void showData(){
        cout << x << ", " << y << endl;
    }
};

int main(){
    Point p1(10, 20);

    // 객체가 생성과 동시에 객체로 초기화 될 때 복사생성자 호출
    Point p2(p1); // Point p2 = p1
    p2.showData();

    return 0;
}