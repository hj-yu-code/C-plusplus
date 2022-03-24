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

	virtual void showData() // �����Լ�
	{
		cout << str1 << ", ";
	}

	virtual ~AAA() // �Ҹ��ڿ����� virtual >> �Ļ� Ŭ������ �Ҹ��ڸ� ȣ��
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
	AAA* a1 = new BBB("Good", "morning"); // ���Ŭ���� Ÿ�� ������
    a1->showData();

    BBB* b1 = new BBB("Good", "evening"); // �Ļ�Ŭ���� Ÿ�� ������
    b1->showData();

    delete a1; // ��� Ŭ���� �Ҹ��ڸ� ȣ�� -> AAA�Ҹ��ڸ� �����Լ� ����
    delete b1; // �Ļ� Ŭ���� �Ҹ��� �θ��� ���� ��� Ŭ���� �Ҹ��� ȣ��
	return 0;

}