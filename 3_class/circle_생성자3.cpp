#include <iostream>
using namespace std;

class Circle{
private:
    int redius = 0;

public:
    Circle() // 디폴트 생성자는, 사용자 정의 생성자가 없을 때 호출된다.
    {
        cout << "Circle()" << endl;
    }

    Circle(int r)
    {
        cout << "Circle(int r)" << endl;
        redius = r;
    }

    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut(10);
    cout << "반지름 : " << donut.GetRedius() << endl;

    Circle pizza;
    cout << "반지름 : " << pizza.GetRedius() << endl;

    return 0;
}