#include <iostream>
using namespace std;
int Sub(int num1=5, int num2=3); // �޼��� ����
// default ���� ���� �ݵ�� ����ο� �α�

int Add(int num1=1, int num2=3){
    return num1+num2;
}

int main(){
    cout << Add() << endl;  // 4
    cout << Add(10) << endl; // 13
    // Add(int num1=1, int num2) : error
    // default ���ڴ� �������� �;� ��
    cout << Add(10, 20) << endl; //30

    cout << Sub() << endl;  // 2
    cout << Sub(10) << endl; // 7
    cout << Sub(10, 5) << endl; // 5

    return 0;
}
int Sub(int num1, int num2){ // �޼��� ���๮
    //default ���� ���� ���๮�� ���� �ʱ�
    return num1-num2;
}