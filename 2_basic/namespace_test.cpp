#include <iostream>
using namespace std;

namespace BestCom{
    void ShowMsg(); // �Լ� ����
    void simpleFunc(){
        cout << "BestCom simpleFunc() \n";
        ShowMsg(); // �Լ� ���� �ʿ�
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