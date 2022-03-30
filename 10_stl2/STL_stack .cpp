#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack <int> myStack;
	for (int i = 0; i < 5; i++)
	{
		myStack.push(i + 10);

	}
	cout << "myStack.size  : " << myStack.size() << endl;
	cout << "myStack.top : " << myStack.top() << endl; //top��� ��� 
	myStack.pop(); // top�� �ִ� ��� ���� 
	cout << "myStack.size  : " << myStack.size() << endl;

	//cout << 100 << 3.4 << endl;  // ostream ��ȯ���� ���� �������� ��� 
	while (myStack.empty() == false) // ����ִ�-?
	{
		cout << myStack.top() << ", ";
		myStack.pop();
	}


	cout << "myStack.size()" << myStack.size() << endl;

	stack<string> myStrStack;
	string tmp;
	for (int i = 0; i < 3; i++)
	{
		cout << "input string ?";
		getline(cin, tmp);
		myStrStack.push(tmp);

	}
	while (myStack.empty() == false) // ����ִ�-?
	{
		cout << myStack.top() << ", ";
		myStack.pop();
	}
	cout<< "\n "<<myStrStack.top();


	return 0;
}