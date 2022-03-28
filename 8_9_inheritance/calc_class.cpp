#include <iostream>
using namespace std;

class Calculator
{
	void input()
	{
		cout << "정수 2 개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;

public:
	Calculator(int a=1, int b=1) {  }
	virtual int calc(int a, int b) {
		return 0;
	}
	// virtual int calc(int a, int b) = 0; // 순수 가상함수 화
	void run()	{
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator
{
public:
	int calc(int a, int b) {
		return a+b;
	}
};

class Subtractor : public Calculator
{
protected:
	int calc(int a, int b) {
		return a-b;
	}
};

class Multiply : public Calculator
{
protected:
	int calc(int a, int b) {
		return a*b;
	}
};

class Divide : public Calculator
{
protected:
	int calc(int a, int b) {
		return a/b;
	}
};

int main()
{
	Adder adder;
	Subtractor subtractor;
	Multiply multiply;
	Divide divide;

	adder.run();
	subtractor.run();
	multiply.run();
	divide.run();

	return 0;
}