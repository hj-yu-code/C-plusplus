#include <iostream>
#include <string>
using namespace std; 
class Book
{
	string title;
	string press;
	string author;
public: 
	Book(string _title, string  _press, string  _author )
	{
		title = _title;
		press = _press;
		author = _author;
	}
	friend ostream& operator << (ostream& os, Book& ref);
};

ostream &operator << (ostream& os, Book& ref)
{
	os << ref.title << " , " << ref.press << ", " << ref.author << endl;
}
int main()
{

	Book book("����� ���α׷���", "���ο����", "�����"); // Book��ü ���� 
	
	//operator << (cout ,book) 
	cout << book << endl; // book ��ü book ȭ�鿡 ���

}