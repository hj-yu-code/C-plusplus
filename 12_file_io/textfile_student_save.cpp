#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[20], dept[30];
    int sid;

    cout << "���� ? ";
    cin >> name;
    cout << "�й�(����) ? ";
    cin >> sid;
    cout << "�а� ? ";
    cin >> dept;

    // ���Ͽ��¹� 1
    // ofstream fout; // ���� ���⿡ ���
    // fout.open("student.txt");

    // ���Ͽ��¹� 2
    ofstream fout("student.txt");

    if(!fout) { // ���⿡ �����ϸ� true
    // �ý��� �޸𸮻� �� �ȳ����� �� ���� �� �� ����
        cout << "���Ͽ��� ����!!!" << endl;
        return -1; // main ����
    }
    fout << sid << endl;
    fout << name << endl;
    fout << dept << endl;

    fout.close();
    cout << "student.txt Save." << endl; 

    return 0;
}