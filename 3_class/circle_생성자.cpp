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
    double GetArea();
};

double Circle::GetArea(){
    return redius*redius*3.15;
}

int main(){
    Circle donut; // 객체는 생성과 동시에 생성자 호출

    cout << "반지름 : " << donut.GetRedius() << endl;
    // double area = donut.GetArea();
    // cout << "면적 : " << donut.GetArea() << endl;

    Circle pizza(30);
    cout << "반지름 : " << pizza.GetRedius() << endl;

    return 0;
}