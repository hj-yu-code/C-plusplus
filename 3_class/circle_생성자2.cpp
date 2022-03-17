#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    // 이웃 생성자 호출 : 생성자 중 인자를 사용할 오버로딩된 메서드를 호출하고 실행
    Circle() : Circle(5)
    { 
        cout << "Circle()" << endl;
    }
    Circle(int r) : redius(r) // 콜론 초기화( 생성자만 사용 가능 )
    {
        cout << "Circle(int r)" << endl;
        // redius = r;
    }
    
    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut;
    cout << "반지름 : " << donut.GetRedius() << endl;
    // 이웃 생성자 때문에 5가 들어감

    Circle pizza(30);
    cout << "반지름 : " << pizza.GetRedius() << endl;

    return 0;
}