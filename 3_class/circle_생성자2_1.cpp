#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    Circle();

    Circle(int r);

    int GetRedius();
};

Circle::Circle() : redius(4) {}
// 구현부 에서 생성자 콜론 초기화 할때는 대괄호가 꼭 필요함
// 기존 cout 문을 뺀것이기 때문!
// 함수처럼 생각하기

int main(){
    Circle donut(10);
    cout << "반지름 : " << donut.GetRedius() << endl;

    Circle pizza;
    cout << "반지름 : " << pizza.GetRedius() << endl;

    return 0;
}