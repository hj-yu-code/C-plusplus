#include <iostream>
#include <stdint.h>
using namespace std;

int main()
{
	// 다양한 타입의 변수를 정의한다.
	int i = 65;
	// long long int i = 65;
	float f = 1.123;  //접미사 생략가능
	double d = 5.12345;
	char c = 'C';

	cout << sizeof(i) << ", " << sizeof(f) << ", " << sizeof(d) << ", " << sizeof(c) << endl;
	cout << i << ", " << f << ", " << d << ", " << c << endl << endl;
	cout << fixed; //소수점이하 6자리
	cout << i << ", " << f << ", " << d << ", " << c << endl << endl;

	float i2f;
	char i2c;
	double i2d;

// 대입할 형변환(묵시적)
	i2f = i;	// int -> float
	i2c = i;	// int -> char
	i2d = i;	// int -> double

	cout << "int : " << i << "\n\tto float : "
		<< i2f << "\n\tto char : "
		<< i2c << "\n\tto double : " << i2d << "\n\n";

// 명시적으로 형변환
	cout << "int i = " << i << "\n";
	cout << "(char)i= " << (char)i << "\n";
	cout << "(float)i= " << (float)i << "\n";
	cout << "(double)i= " << (double)i << "\n\n";

//8바이트 정수형
	__int64 n1 = 2800000000;
	long long int n2= 3100000000;
	 
	cout << "_int64 n1 sizeof :" << sizeof(n1) << "  , " << sizeof(n1) << endl;
	cout << n1 << " , " << n2 << endl;

	// c++에 추가된 내용
	auto t1 = 3.5; // 선언과 동시에 초기화 필요
	cout << "typeid(i).name() : " << typeid(i).name() << ",  typeid(t1).name() : " << typeid(t1).name() << endl;
	cout << "t1 : " << t1 << ", sizeof(t1) : " << sizeof(t1) << ",  typeid(t1).name() : " << typeid(t1).name() << endl;

	// typeid() : 변수 자료형 알려주는 함수


	return 0;
}
