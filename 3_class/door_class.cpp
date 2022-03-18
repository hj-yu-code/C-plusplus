#include <iostream>
using namespace std;
/*
inline 함수
- 함수 호출의 대체(매크로와 유사)
- 대체 이므로 짧은 코드만 사용하기
*/
const int OPEN = 1;
const int CLOSE = 0;

class Door
{
private:
    int state;

public:
    Door(){}

    inline void Open();
    void Close(); // 여기서 정의하면 inline 함수로 자동으로 처리
    void showState();
};
inline void Door::Open(){
    state = OPEN;
}
void Door::Close(){ // 외부에서 선언되었으므로 inline이 아님
    state = CLOSE;
}
void Door::showState(){
    cout << "현재 문의 상태 : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}

int main(){
    Door d1;

    d1.Open(); // open 함수로 대체! (함수 호출이 아님)
    d1.showState();
    d1.Close();
    d1.showState();


    return 0;
}