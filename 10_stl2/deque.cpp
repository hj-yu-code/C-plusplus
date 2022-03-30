#include <iostream>
#include <deque>

using namespace std;
/*
덱 자료구조는 Queue와 다른 점으로 삽입과 삭제를 한쪽이 아닌 앞, 뒤 양쪽에서 할 수 있다. 
따라서 Deque는 Stack과 Queue의 장점을 모은 것으로 FIFO 방식과 LIFO 방식 둘 다 사용할 수 있다.
*/
int main() 
{
	deque<int> deque1, deque2;

	deque<int> ::iterator itr; //어떤 자료구조인지 알려줘야 한다.  deque의 정수 형 데이터를 가리킬꺼야 

	deque1.push_front(100);
	deque1.push_back(200);
	deque1.push_back(300);
	deque1.push_front(400);    // 400 100 200 300

	cout << "< push_front & push_back >" << '\n';
	for (int i = 0; i < deque1.size(); i++)  
		cout << deque1[i] << " ";
	cout << '\n';

	cout << "< front % back >" << '\n';
	cout << deque1.front() << '\n';  //400 , 원소 반환
	cout << deque1.back() << '\n';   //300

	cout << "=========================" << endl;

	cout << "< pop_front & pop_back >" << '\n';
	deque1.pop_front();  //front 위치 원소삭제
	deque1.pop_back();   //마지막 위치 원소삭제
	for (int i = 0; i < deque1.size(); i++)   //100, 200
		cout << deque1[i] << " ";
	cout << '\n';

	cout << "< 반복자로 접근 >" << '\n';
	itr = deque1.begin(); 
	cout << *itr << '\n';  //100
	++itr;
	cout << *itr << '\n';  //200

	cout << '\n' << "< insert >" << '\n';
	itr = deque1.begin();
	deque1.insert(itr, 500);   //500, 100, 200

	itr = deque1.begin();  // !!!중요 : insert()되어서 다시 itr 지정하기!!!
	++itr;
	deque1.insert(itr, 3, 700);  //500, 700, 700, 700, 100, 200 (할곳 , 개수, 넣을 숫자) 
	for (int i = 0; i < deque1.size(); i++) 
		cout << deque1[i] << " ";
	cout << "\n==================\n\n";

	deque2.push_back(20);
	deque2.push_back(30);
	deque2.push_back(40);
	itr = deque1.begin();
	deque1.insert(++itr, deque2.begin(), deque2.end());  //다른 dequeue의 추가  // begin -> end 알아서 순회하는 애 
	for (int i = 0; i < deque1.size(); i++) 
		cout << deque1[i] << " ";
	cout << '\n';

	cout << '\n' << "< erase >" << '\n';
	deque1.erase(deque1.begin(), deque1.begin() + 4); //700,700, 700, 100, 200 4개 
	for (int i = 0; i < deque1.size(); i++) 
		cout << deque1[i] << " ";
	cout << '\n';

	cout << "< clear >" << '\n'; // 다 지워 
	deque1.clear();

	cout << "< empty >" << '\n'; 
	cout << (deque1.empty() ? "true" : "false") << '\n';
}