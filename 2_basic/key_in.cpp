#include <iostream>
using namespace std;
int main(){
    cout << "Ű����� ������ �Է�" << std::endl;

    int wid, hei;
    cout << "�ʺ� : ";
    if(cin.fail()){ //���� �Է� -> ���� ���� -> fail bit ����
        cin.clear(); // fail bit �ʱ�ȭ
        cin.ignore(100, '\n'); // �Է¹��۸� ��� : ���� 100�� Ȥ�� '\n'�� �а� ����
    }
    cin >> wid;
    cout << "���� : ";
    cin >> hei;

    int area = wid * hei;
    cout << "������ : " << area << endl;

    return 0;
}