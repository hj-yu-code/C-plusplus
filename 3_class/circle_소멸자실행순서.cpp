#include <iostream> 
using namespace std; 

//생성소멸은 생성 반대로 실행
/*
 소멸자
 - 객체가 소멸되는 시점에서 자동으로 호출되는 함수
 - 리턴 타입도 없고, 매개 변수도 없음
*/

class Circle
{
public:
	int radius;
	Circle(); 
	Circle(int r);
	~Circle(); 
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "Circle(int r) : " << radius <<  endl;
}

Circle::~Circle() {
	cout << "~Circle() :" << radius << " 소멸" << endl;
}

double Circle::getArea()  //멤버메서드
{
	return 3.14*radius*radius;
}

//전역 객체변수
Circle globalDonut(1000);    
Circle globalPizza(2000);    

void f() //로컬함수
{
	Circle fDonut(100);    
	Circle fPizza(200);    
}

int main()
{
	Circle mainDonut;       
	Circle mainPizza(30);   

	f();
} // main이 종료되면서 함수 스택에 생성된 객체 소멸