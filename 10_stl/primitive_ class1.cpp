#include <iostream>
using namespace std;


class Type
{
private: 

	int n;
public: 
	Type(int _n) // 인자를 하나 갖는 생성자 : 변환 생성자 
	{ 
		cout << "Type(int _n)" << endl;
		n = _n;
	}
	int getN()
	{
		return n;
	}
	//operator int
	explicit operator int() // 형변환 연산자 : 명시적 호출만 허락할게 
	{
		return n;
	}


};
int main()
{
	Type data1(100);


	data1 = 200; // 묵시적 변환 생성자 
	//data1 = (Type)200; // 200 을 타입 객체로 형변환 시킴 
	cout << "data1.getN" << data1.getN() << endl;
	cout << "================================\n" << endl;
	//int num = data1; // 묵시적임 명시적 only 호출은 안돼
	// int num = (int)data1;  // 데이터가 다른 변수형태로 바꾸고 싶을때 정수형 변환 연산자를 사용 한다. (명시적 호출C)
	
	int num = static_cast<int>(data1); // (명시적 호출C++ )
	cout << "num : " << num << endl;

	//int num = data1;
	return 0;
}