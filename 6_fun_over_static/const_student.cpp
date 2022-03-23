#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
	const int id;
	int num = 0;

	char name[20];
	char major[20];

	mutable int age; // ���ȭ�� �޼��忡���� ���� ����
public:
	Student(int _id, const char *_name, const char *_major, int _age) : id(_id)
	{
		//id = _id; // ���(���ȭ�� ���)�� �ݵ�� �ݷ��ʱ�ȭ

		strcpy(name, _name);
		strcpy(major, _major);
		age = _age;
	}

	// void showStudentIntro() // �Ϲݸ޼���
	// {
	// 	cout << "== �л����� ��� ==" << endl;
	// }

	void showStudentIntro() const // ���ȭ�� �޼���(1)
	{
		cout << "== �л����� ��� ==" << endl;
	}

	void ShowData() const // ���ȭ�� �޼��忡���� ���ȭ�� �޼���(1)�� ȣ�Ⱑ��
	{
		showStudentIntro();

		//mutable ���������� ������ �ɹ� ���� ����
		age = 27; // �޼���� ���ȭ���ѵθ� �� ���� �Ұ���

		// �Ϲ� �ɹ� ���� �Ұ�
		// strcpy(name, "AAA"); // �����Ұ�, mutable ���� X
		// num += 1;  // �����Ұ�, mutable ���� X
		cout << id << ", " << name << ", " << major << ", " << age << endl;
	}

	//char* getName() const // �ּҰ� ��ȯ�Ǹ� const �Ұ���
	//{
	//	return name;
	//}

	const char* getName() const// �ּҰ� ��ȯ�Ǹ� const �Ұ���
	{
		return name;
	}
	char* gName() {
		return name;
	}
};

int main()
{
	Student st1(1001, "kim", "computer", 25);
	
	st1.ShowData();

	cout << "���� : " << st1.getName() << endl;

	const char* ptrName = st1.getName();
	cout << "���� : " << ptrName << endl;

	cout << "����2: " << st1.gName() << endl;

	return 0;
}