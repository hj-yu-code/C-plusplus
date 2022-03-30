//STL_vector
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//vector는 동적 배열 구조 (마지막에 추가/삭제할 때 의미 있음)

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(10);
	v.push_back(4); 
	v.push_back(50);


	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " , "; // vector i 가 가지고 있는 배열을 찍어봐 
	cout << endl;

	v[0] = 10; // 0열의 값을 10으로 
	int num = v[2];  
	v.at(3) = 3; // 3열을 3으로 바꿔  // 둘 다 원소를 가리킨다. ->  at은 범위를 검사하고 맞는지 확인해 준다. 

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " , "; // vector i 가 가지고 있는 배열을 찍어봐 
	cout << endl;

	cout << "v.size()" << v.size() << endl; //실제 유효한 배열 요소의 크기 
	cout << "v.capacity()" << v.capacity() << endl; // 벡터 용량 : 메모리가 할당되어 있는 공간의 크기 부족할 때 자동으로 늘어남  

	vector<int> ::iterator it;

	it = v.begin();
	v.erase(it); //현재 위치를 줘서 삭제 
	cout << "v.size()" << v.size() << endl; //실제 유효한 배열 요소의 크기 
	cout << "v.capacity()" << v.capacity() << endl;

	v.pop_back(); // 마지막 항목 삭제 
	cout << "v.size()" << v.size() << endl; //실제 유효한 배열 요소의 크기 
	cout << "v.capacity()" << v.capacity() << endl; // 데이터를 가져가도 안줌 

	v.shrink_to_fit();
	cout << "v.size()" << v.size() << endl; //실제 유효한 배열 요소의 크기 
	cout << "v.capacity()" << v.capacity() << endl << endl;

	v.resize(10); // 벡터 크기 변동 :  채운 나머지는 0  굳이 할건 없고 값 넣을 때는 push 하면 그냥 할당돼
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " , "; // vector i 가 가지고 있는 배열을 찍어봐 
	cout << endl;
	
	cout << "v.size()" << v.size() << endl; //실제 유효한 배열 요소의 크기 
	cout << "v.capacity()" << v.capacity() << endl << endl;




	return 0;
}