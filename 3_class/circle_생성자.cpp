#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    Circle(){ // 생성자 : 클래스 이름과 동일한 멤버 함수
        cout << "Circle()" << endl;
        redius = 0;
    }
    Circle(int r){ // int 인자로 갖는 생성자
        cout << "Circle(int r)" << endl;
        redius = r;
    }
    
    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut; // 객체는 생성과 동시에 생성자 호출

    cout << "반지름 : " << donut.GetRedius() << endl;

    Circle pizza(30);
    cout << "반지름 : " << pizza.GetRedius() << endl;
    cout << "============================" << endl;

    Circle c1;          // Circle()
    Circle c2(1);       // Circle(int r)
    Circle c3 = Circle(); // 생성자 명시적 호출, Circle()
    Circle c4 = Circle(3); // Circle(int r)


    return 0;
}