#include <iostream>
#include <string>

using namespace std;

int main(){
    char _name[20];

    string name; // ũ�� ������ ����
    string comAddr;

    cout << "���� ? ";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "ȸ���ּ� ? ";
    getline(cin, comAddr); // global func.
    // cin >> comAddr; // �����̽� ������ �Է°���

    cout << name << ", " << comAddr << endl;

    return 0;
}