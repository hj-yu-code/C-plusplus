#include <iostream>
#include <cstdlib>
using namespace std;

const int SZ = 3;

class Arr
{
private : 
	int idx; 
	int nArr[SZ];
public : 
	Arr() : idx(0)
	{	}

	int getIdx()
	{
		return idx;
	}
	int &operator [](int index) //index - >  0,1,2,//3,4
	{
		cout << "int &operator [](int index)" << endl;
		if (index < 0 || index >= SZ)
		{
			cout << "배열 첨자오류 !!! " << endl;
			exit(1);
		}
		idx = index;
		return nArr[index];
	}
};


int main()
{
	Arr arr; 

	//배열의 요소에 접근 
	// arr.operator [](0)
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	int idx = arr.getIdx();
	for (int i = 0; i < idx; i++)
		cout << arr[i] << endl; // 함수를 실행할 때마다 함수가 불려지고 있다.  // 객체를 배열처럼 쓸 수 있다. 
	
	return 0;
}

/*
arr     idx [  0 ] 
        nArr [100 ][200 ][300 ]           



*/