#include <iostream>
using namespace std;
int CalSalary(int salary); // 반드시 선언 필요

int main(){
    int salary;

    while (1)
    {
        cout << "판매금액 : ";
        cin >> salary;

        if(salary == -1)
            break;
        

        cout << "이번달 금여 : " << CalSalary(salary)<< " 만원"<< endl;

    }
    cout << "종료합니다" << endl;
    
    return 0;
}

int CalSalary(int salary){
    return (int)(100 + 0.12 * salary);
}