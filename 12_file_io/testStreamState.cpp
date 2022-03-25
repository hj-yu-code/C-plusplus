#include <iostream>
#include <fstream>
using namespace std;

void showStreamState(ios& stream)
{
	cout << "eof() " << stream.eof() << endl;   //���� �� 1
	cout << "fail() " << stream.fail() << endl; // I/O ���� 1
	cout << "=====================" << endl;
}

int main() 
{
	const char* existFile = "c:\\temp\\student.txt"; // �����ϴ� ���ϸ�
	const char* noExistFile = "c:\\temp\\noexist.txt"; // �������� �ʴ� ���ϸ�
	
	ifstream fin(noExistFile); // �������� �ʴ� ���� ����
	if(!fin) 
	{ 
		cout << noExistFile << " ���� ����" << endl;
		showStreamState(fin); // ��Ʈ�� ���� ���

		cout << existFile << " ���� ����" << endl;
		fin.open(existFile);	
		showStreamState(fin); // ��Ʈ�� ���� ���
	}

	// ��Ʈ���� ������ �а� ȭ�鿡 ���
	int c;
	while((c=fin.get()) != EOF) 
		cout.put((char)c);
	
	cout << endl;
	showStreamState(fin); // ��Ʈ�� ���

	fin.close();
}
/*
c:\temp\noexist.txt ���� ����
eof() 0
fail() 1
=====================
c:\temp\student.txt ���� ����
eof() 0
fail() 0
=====================
kim
111
computer

eof() 1
fail() 1
=====================
*/