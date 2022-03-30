#include <iostream>
using namespace std;

class CTestData
{

private : 
	int mData;
public: 
	CTestData(int _data) //������ ���� ������ 
	{
		cout << "CTestData(int _data)" << endl;
		mData = _data;
	}
	~CTestData() // �Ҹ��� 
	{
		//cout << "~CTestData(int _data)" << endl;
		
	}
	int getData()
	{
		return mData; // �����͸� �ް� 
	}

	void setData(int _param)
	{
		mData = _param; // �������� �Ѿ� �� 
	}


	operator int() //����ȯ ������ 
	{
		cout << "operator int()\n" ;
		return mData;
	}
	friend ostream& operator << (ostream& os, CTestData& ref);
};

void TestFunc(CTestData param) // �ι�°  ��ü�� �����ǰ� 
{
	cout << "TestFunc(CTestData param)" << endl;
	cout << param.getData() << endl; // 5  // �ӽ� ��ü�� ȣ�� �Ѵ�. 
	param.setData(200);// 200 �� �ְ� 
	cout << param.getData()<< endl; // 200
}

ostream &operator << (ostream& os, CTestData& ref) 
{
	cout << "&operator << (ostream& os, CTestData& ref)" << endl;
	os << ref.mData << endl;

	return os;
}


/*
void TestFunc(int num) // ��� ���������� ������ �ش�. 
{
	cout << "TestFunc(int num)" << endl;
}
*/

int main()
{
	TestFunc(5); // ������ ȣ�� [������ �����鼭 ���� ���� ȣ���ڸ� �θ�] 
	// ���� ���� ���� ȣ���� -> Test func ->  ��ü�� ���� �ǰ� ->  get���� ���� ������-> set ���� ��ȯ
	//TestFunc(CTestData(5)); // ��ü ���� �Ǹ鼭 ����  // ����� ȣ�� 

	cout << "========================\n";

	CTestData c1(50); //��ü�� ��� 

	//operator << (cout, c1) // �������� ������ �Ѵ�. 
	cout << c1 << endl; // ������ ȣ��   ostream 

	cout << (int)c1 << endl; // ��������ȯ �����ε�  operator int  
//	cout << static_cast<int>(c1) << endl; // C++ ��Ÿ�� 
	return 0;
}