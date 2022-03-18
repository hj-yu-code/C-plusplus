#include <iostream>
#include "door.h"
#include "door.h" // 헤더에서 중복 사용 허용함

using namespace std;

int main(){
    Door d1;

    d1.Open();
    d1.showState();
    d1.Close();
    d1.showState();


    return 0;
}