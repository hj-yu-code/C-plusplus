#include <iostream>
#include "door.h"
#include "door.h" // ������� �ߺ� ��� �����

using namespace std;

int main(){
    Door d1;

    d1.Open();
    d1.showState();
    d1.Close();
    d1.showState();


    return 0;
}