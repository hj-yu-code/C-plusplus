#include <iostream>
using namespace std;
int CalSalary(int salary); // �ݵ�� ���� �ʿ�

int main(){
    int salary;

    while (1)
    {
        cout << "�Ǹűݾ� : ";
        cin >> salary;

        if(salary == -1)
            break;
        

        cout << "�̹��� �ݿ� : " << CalSalary(salary)<< " ����"<< endl;

    }
    cout << "�����մϴ�" << endl;
    
    return 0;
}

int CalSalary(int salary){
    return (int)(100 + 0.12 * salary);
}