#include <iostream>
#include "door.h"

using namespace std;

// void Door::Open(){
//     state = OPEN;
// }
void Door::Close(){
    state = CLOSE;
}
void Door::showState(){
    cout << "���� ���� ���� : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}