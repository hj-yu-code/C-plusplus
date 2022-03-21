#include <iostream>
#include <cstring>
using namespace std;

/*
������ ���� �����ϴ� �Լ� �ߺ����Ǹ� �ۼ��Ͻÿ�.

������
30 20
100 50
Z A
5.555 1.111
campus multi
ķ�۽� ��Ƽ
*/
void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swap(int &ref1, int &ref2) { // �����ڷ� �޴°� ����صα�!
    int tmp = ref1;
    ref1 = ref2;
    ref2 = tmp;
}
void swap(char *p1, char *p2) {
    char tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
void swap(double *p1, double *p2) {
    double tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swap(string &ref1, string &ref2) {
    string tmp = ref1;
    ref1 = ref2;
    ref2 = tmp;
}

void swap(char *p1, char *p2, int size) {
    char *tmp = new char[size];
    strcpy(tmp, p1);
    strcpy(p1, p2);
    strcpy(p2, tmp);
    delete[] tmp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	num1 = 50, num2 = 100;
	swap(num1, num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;

	string s1 = "multi", s2 = "campus";
	swap(s1, s2);
	cout << s1 << ' ' << s2 << endl;

	char s3[20] = "��Ƽ", s4[20] = "ķ�۽�";
	swap(s3, s4, sizeof(s3));
	cout << s3 << ' ' << s4 << endl;

	return 0;
}