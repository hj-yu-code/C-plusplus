#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[20]; // C sytle ���ڿ�
    // cin.getline(name, 20)

	//���ڿ��߰�, ����, ��,

	string str1 = "I like ";
	string str2 = "C++ J++ C#";
    // string�� ���� �޼ҵ尡 ���� (class ����)

//str1
	int len = str1.length(); // \0�� �� ��
	cout << "str1 len : " << len << endl;

	//str1.assign("C++");  //�����������������
	str1 = "C++";
	cout << "str1.assign(test) : " << str1 << endl;

	//str1.append(" Programming");
	str1 += " Programming";
	cout << "str1.append( 'Programming') : " << str1 << endl;

	//str1.clear();  //���ڿ�����
	//cout<<"str1.clear() : "<<str1<<endl;

	int n1 = str1.find("Prog");  //��ҹ��ڱ���
	cout << "str1.find(Prog) : " << n1 << endl;

    cout << endl;
//str2
	cout << "str2:" << str2 << endl;
	str2.replace(4, 3, "java");  //J#����
	cout << "str2.replace(4,3,'java') : " << str2 << endl;

	string str3 = str2.substr(0, 3);  //C++
	cout << "str2.substr(0,3) : " << str3 << endl;

	str3 = str2.substr(4, 4);  //java
	cout << "str2.substr(4,4) : " << str3 << endl;

	string s_num = "123";
	string s_fnum = "123.45";
	int num = stoi(s_num);  // atoi() : C style ���ڿ���
	double dnum = stof(s_fnum); // atof
	cout << typeid(num).name() << ", " << num << endl;
	cout << typeid(dnum).name() << ", " << dnum << endl;

	return 0;
}