#include <iostream>

using namespace std; 

int TestFunc(int&& param)
{
	cout << "TestFunc(int&& param)" <<param++ << endl;
	return param; 

}
int main()
{
	int x = 100;
	int& x1 = x; // 참조자 

	x1 = 150; 
	cout << "x: " << x << ", x1 : " << x1 << endl << endl;

	const int& a = 10 + 20; // R - value 
	
	int&& y = 10 + 20; // R - value 참조자
	y++;
	cout << "y : " << y << endl; //임시 객체를 버리지 않고 보관 하며 수정도 가능하다. 

	int tmp = TestFunc(10 + 20); 
	cout << "tmp  : " << tmp << endl;

	return 0; 

}