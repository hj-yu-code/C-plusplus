#include <iostream>
#include <cstring> // c ������� ����� : .h�� ������, �տ� c �߰�

using namespace std;

int main(){
    char name[20];
    char comAddr[50];

    cout << "���� ? ";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "ȸ���ּ� ? ";
    // cin >> comAddr;
    cin.getline(comAddr, 50); // �ɹ� �޼���
    // cin.getline(comAddr, 50, '.'); // '.'�� ���ö����� ���ڸ� ����


    cout << name << ", " << comAddr << endl;
    cout << "strupr(name) : " << strupr(name) << endl;
    cout << "strlwr(comAddr) : " << strlwr(comAddr) << endl;

    if (strcmp(name, "KIM") == 0)
        cout << "Equal." << endl;
    else
        cout << "Not Equal." << endl;

    return 0;
}