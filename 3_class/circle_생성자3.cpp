#include <iostream>
using namespace std;

/*

기본 생성자
1. 클래스에 생성자가 하나도 선언되어 있지 않는 경우,
컴파일러가 대신 삽입해주는 생성자(매개 변수 없는 생성자)

2. 기본 생성자가 자동으로 생성되는 경우
- 생성자가 하나도 작성되어 있지 않는 경우

3. 기본 생성자가 자동으로 생성되지 않는 경우
- 생성자가 하나라도 선언된 클래스의 경우
ex) 아래와 같이 Circle(int r)이 선언되어 있다면, 
main() 에서 Circle pizza; 부를 경우 에러!

*/

class Circle{
private:
    int redius;

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