#include <iostream>
using namespace std;


class Type
{
private: 

	int n;
public: 
	Type(int _n) // ���ڸ� �ϳ� ���� ������ : ��ȯ ������ 
	{ 
		cout << "Type(int _n)" << endl;
		n = _n;
	}
	int getN()
	{
		return n;
	}
	//operator int
	explicit operator int() // ����ȯ ������ : ����� ȣ�⸸ ����Ұ� 
	{
		return n;
	}


};
int main()
{
	Type data1(100);


	data1 = 200; // ������ ��ȯ ������ 
	//data1 = (Type)200; // 200 �� Ÿ�� ��ü�� ����ȯ ��Ŵ 
	cout << "data1.getN" << data1.getN() << endl;
	cout << "================================\n" << endl;
	//int num = data1; // �������� ����� only ȣ���� �ȵ�
	// int num = (int)data1;  // �����Ͱ� �ٸ� �������·� �ٲٰ� ������ ������ ��ȯ �����ڸ� ��� �Ѵ�. (����� ȣ��C)
	
	int num = static_cast<int>(data1); // (����� ȣ��C++ )
	cout << "num : " << num << endl;

	//int num = data1;
	return 0;
}