#include <iostream>
using namespace std;

const int OPEN = 1;
const int CLOSE = 0;

class Door
{
private:
    int state;

public:
    Door(){}

    void Open(){
        state = OPEN;
    }
    void Close(){
        state = CLOSE;
    }
    void showState(){
        cout << "현재 문의 상태 : ";
        cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
    }
};

int main(){
    Door d1;
    d1.showState();

    d1.Open();
    d1.showState();


    return 0;
}