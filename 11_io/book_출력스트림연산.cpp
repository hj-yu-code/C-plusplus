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

	Book book("든든한 프로그래밍", "연두에디션", "김원선"); // Book객체 생성 
	
	//operator << (cout ,book) 
	cout << book << endl; // book 객체 book 화면에 출력

}