#include <iostream>
using namespace std;

class CTestData
{

private : 
	int mData;
public: 
	CTestData(int _data) //정수를 갖는 생성자 
	{
		cout << "CTestData(int _data)" << endl;
		mData = _data;
	}
	~CTestData() // 소멸자 
	{
		//cout << "~CTestData(int _data)" << endl;
		
	}
	int getData()
	{
		return mData; // 데이터를 받고 
	}

	void setData(int _param)
	{
		mData = _param; // 이쪽으로 넘어 옴 
	}


	operator int() //형변환 연산자 
	{
		cout << "operator int()\n" ;
		return mData;
	}
	friend ostream& operator << (ostream& os, CTestData& ref);
};

void TestFunc(CTestData param) // 두번째  객체가 생성되고 
{
	cout << "TestFunc(CTestData param)" << endl;
	cout << param.getData() << endl; // 5  // 임시 객체를 호출 한다. 
	param.setData(200);// 200 을 넣고 
	cout << param.getData()<< endl; // 200
}

ostream &operator << (ostream& os, CTestData& ref) 
{
	cout << "&operator << (ostream& os, CTestData& ref)" << endl;
	os << ref.mData << endl;

	return os;
}


/*
void TestFunc(int num) // 없어도 묵시적으로 지정해 준다. 
{
	cout << "TestFunc(int num)" << endl;
}
*/

int main()
{
	TestFunc(5); // 묵시적 호출 [정수를 넣으면서 정수 지정 호출자를 부름] 
	// 순서 정수 지정 호출자 -> Test func ->  객체가 생성 되고 ->  get에서 값을 넣으면-> set 으로 반환
	//TestFunc(CTestData(5)); // 객체 생성 되면서 보냄  // 명시적 호출 

	cout << "========================\n";

	CTestData c1(50); //객체를 출력 

	//operator << (cout, c1) // 전역으로 만들어야 한다. 
	cout << c1 << endl; // 묵시적 호출   ostream 

	cout << (int)c1 << endl; // 정수형변환 오버로딩  operator int  
//	cout << static_cast<int>(c1) << endl; // C++ 스타일 
	return 0;
}