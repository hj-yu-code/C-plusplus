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
    cout << "현재 문의 상태 : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}