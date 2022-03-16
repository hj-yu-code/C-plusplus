#include <iostream>
#include <stdint.h>
using namespace std;

int main()
{
	// �پ��� Ÿ���� ������ �����Ѵ�.
	int i = 65;
	// long long int i = 65;
	float f = 1.123;  //���̻� ��������
	double d = 5.12345;
	char c = 'C';

	cout << sizeof(i) << ", " << sizeof(f) << ", " << sizeof(d) << ", " << sizeof(c) << endl;
	cout << i << ", " << f << ", " << d << ", " << c << endl << endl;
	cout << fixed; //�Ҽ������� 6�ڸ�
	cout << i << ", " << f << ", " << d << ", " << c << endl << endl;

	float i2f;
	char i2c;
	double i2d;

// ������ ����ȯ(������)
	i2f = i;	// int -> float
	i2c = i;	// int -> char
	i2d = i;	// int -> double

	cout << "int : " << i << "\n\tto float : "
		<< i2f << "\n\tto char : "
		<< i2c << "\n\tto double : " << i2d << "\n\n";

// ��������� ����ȯ
	cout << "int i = " << i << "\n";
	cout << "(char)i= " << (char)i << "\n";
	cout << "(float)i= " << (float)i << "\n";
	cout << "(double)i= " << (double)i << "\n\n";

//8����Ʈ ������
	__int64 n1 = 2800000000;
	long long int n2= 3100000000;
	 
	cout << "_int64 n1 sizeof :" << sizeof(n1) << "  , " << sizeof(n1) << endl;
	cout << n1 << " , " << n2 << endl;

	// c++�� �߰��� ����
	auto t1 = 3.5; // ����� ���ÿ� �ʱ�ȭ �ʿ�
	cout << "typeid(i).name() : " << typeid(i).name() << ",  typeid(t1).name() : " << typeid(t1).name() << endl;
	cout << "t1 : " << t1 << ", sizeof(t1) : " << sizeof(t1) << ",  typeid(t1).name() : " << typeid(t1).name() << endl;

	// typeid() : ���� �ڷ��� �˷��ִ� �Լ�


	return 0;
}
