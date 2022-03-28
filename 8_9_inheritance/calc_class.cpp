#include <iostream>
using namespace std;

class Calculator
{
	void input()
	{
		cout << "���� 2 ���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;

public:
	Calculator(int a=1, int b=1) {  }
	virtual int calc(int a, int b) {
		return 0;
	}
	// virtual int calc(int a, int b) = 0; // ���� �����Լ� ȭ
	void run()	{
		input();
		cout << "���� ���� " << calc(a, b) << endl;
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