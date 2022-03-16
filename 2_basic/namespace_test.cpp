#include <iostream>
using namespace std;

namespace BestCom{
    void ShowMsg(); // 함수 선언문
    void simpleFunc(){
        cout << "BestCom simpleFunc() \n";
        ShowMsg(); // 함수 선언문 필요
    }
    void ShowMsg(){
        cout << "BestCom ShowMsg() \n";
    }
}
namespace ProgCom{
    void simpleFunc(){
        cout << "ProgCom simpleFunc() \n";
    }
}
using namespace BestCom;
int main(){
    simpleFunc();
    BestCom::simpleFunc();
    ShowMsg();
    ProgCom::simpleFunc();
    return 0;
}