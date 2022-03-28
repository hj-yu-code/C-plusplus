#include <iostream>
#include <cstring>
using namespace std;

/*
    a1      b1
    (4000)  (4500)

    ---------------------------------------
    [str1   str2]       [str1   str2]
    (5000)  (5100)      (6000)  (6100)
    4000    4004        4500    4504

    [(Good) (morning)]  [(Good) (evening)]
    5000    5100        6000    6100

*/

class AAA
{
private:
	char* str1;

public:
	AAA(const char* s1)
	{
		str1 = new char[strlen(s1) + 1];
		strcpy(str1, s1);
	}

	virtual void showData() // 가상함수
	{
		cout << str1 << ", ";
	}

	virtual ~AAA() // 소멸자에서의 virtual >> 파생 클래스의 소멸자를 호출
	{
        cout << "~AAA()" << endl;
		delete[] str1;
	}
};

class BBB : public AAA
{
private:
	char* str2;

public:
	BBB(const char* s1, const char* s2) : AAA(s1)
	{
		str2 = new char[strlen(s2) + 1];
		strcpy(str2, s2);
	}

	void showData()
	{
        AAA::showData();
		cout << str2 << endl;
	}

	~BBB()
	{
        cout << "~BBB()" << endl;
		delete[] str2;
	}
};


int main()
{
	AAA* a1 = new BBB("Good", "morning"); // 기반클래스 타입 포인터
    a1->showData();

    BBB* b1 = new BBB("Good", "evening"); // 파생클래스 타입 포인터
    b1->showData();

    delete a1; // 기반 클래스 소멸자만 호출 -> AAA소멸자를 가상함수 서넌
    delete b1; // 파생 클래스 소멸자 부르기 전에 기반 클래스 소멸자 호출
	return 0;

}