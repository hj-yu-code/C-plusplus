//STL_vector
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//vector�� ���� �迭 ���� (�������� �߰�/������ �� �ǹ� ����)

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
		cout << v[i] << " , "; // vector i �� ������ �ִ� �迭�� ���� 
	cout << endl;

	v[0] = 10; // 0���� ���� 10���� 
	int num = v[2];  
	v.at(3) = 3; // 3���� 3���� �ٲ�  // �� �� ���Ҹ� ����Ų��. ->  at�� ������ �˻��ϰ� �´��� Ȯ���� �ش�. 

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " , "; // vector i �� ������ �ִ� �迭�� ���� 
	cout << endl;

	cout << "v.size()" << v.size() << endl; //���� ��ȿ�� �迭 ����� ũ�� 
	cout << "v.capacity()" << v.capacity() << endl; // ���� �뷮 : �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ�� ������ �� �ڵ����� �þ  

	vector<int> ::iterator it;

	it = v.begin();
	v.erase(it); //���� ��ġ�� �༭ ���� 
	cout << "v.size()" << v.size() << endl; //���� ��ȿ�� �迭 ����� ũ�� 
	cout << "v.capacity()" << v.capacity() << endl;

	v.pop_back(); // ������ �׸� ���� 
	cout << "v.size()" << v.size() << endl; //���� ��ȿ�� �迭 ����� ũ�� 
	cout << "v.capacity()" << v.capacity() << endl; // �����͸� �������� ���� 

	v.shrink_to_fit();
	cout << "v.size()" << v.size() << endl; //���� ��ȿ�� �迭 ����� ũ�� 
	cout << "v.capacity()" << v.capacity() << endl << endl;

	v.resize(10); // ���� ũ�� ���� :  ä�� �������� 0  ���� �Ұ� ���� �� ���� ���� push �ϸ� �׳� �Ҵ��
	
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " , "; // vector i �� ������ �ִ� �迭�� ���� 
	cout << endl;
	
	cout << "v.size()" << v.size() << endl; //���� ��ȿ�� �迭 ����� ũ�� 
	cout << "v.capacity()" << v.capacity() << endl << endl;




	return 0;
}