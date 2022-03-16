#include <iostream>
using namespace std;

#include "NameSP.h"

namespace BestCom{
    void simpleFunc(){
        cout << "BestCom simpleFunc() \n";
        ShowMsg();
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