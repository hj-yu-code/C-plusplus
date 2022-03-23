#include <iostream>
using namespace std;

class AAA {
private:
	mutable int num;

public:
	AAA(int n) : num(n) {}

	void showData()	{
		cout << "void showData()" << endl;
		cout << "num : " << num << endl;
	}

	void showData() const {
		cout << "void showData() const" << endl;
		cout << "num : " << num << endl;
	}

	void Add(int n)	{
		num += n;
	}

	void Add(int n) const {
		num += n;
	}
};

int main() {
	AAA a1(200); // �Ϲݰ�ü 
	a1.showData();
	// �Ϲݸ޼���� �켱 ����, �Ϲݸ޼��尡 ���� ���� ���ȭ�� �޼���� ����
	
	const AAA a2(100); // ��� ��ü
	a2.showData(); // ����޼���� ���� // void showData() const

	a1.Add(50);
	a1.showData();

	return 0;
}