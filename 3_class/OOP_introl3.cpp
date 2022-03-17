#include <iostream>
using namespace std;
/*
    <stack>
    p1  [acid   pswd    name    bal]
        (1001)  (1234)  (kim\0) (1000)
        3000    3010    3020    3040

    p2  [acid   pswd    name    bal]
        ()      ()      ()      ()
        5000    5010    5020    5040  
*/
class Account
{  
private:
public:
    char accID[10]; // ¸â¹ö º¯¼ö
    char passWd[10];
    char name[20];
    int balance;

    void Deposit(int money){ // ¸â¹ö ¸Þ¼Òµå
        balance += money;
    }
    void Withdraw(int money){
        if(balance < money){
            cout << "ÀÜ°íºÎÁ·!! ÇöÀç ÀÜ°í : " << balance << endl;
            return;
        }
        balance -= money;
    }
};

int main(){
    // class ¸í, °´Ã¼º¯¼ö
    Account p1 = { "1001", "1234", "kim", 1000};
    cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

    p1.Deposit(10000);
    cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;
    p1.Withdraw(57000);
    cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

    // Account p2;
    // cout << p2.accID << ", " << p2.passWd << ", " << p2.name << ", " << p2.balance << endl;


    return 0;
}