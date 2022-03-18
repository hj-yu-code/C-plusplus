#ifndef _DOOR_H_ // #include "door.h"를 호출 시 최초로 1번만 호출되게 함
#define _DOOR_H_

const int OPEN = 1;
const int CLOSE = 0;

class Door
{
private:
    int state;

public:
    Door(){}

    inline void Open();
    // 실행코드에는 inline을 대체할 수 있어야 함

    // void Open();
    void Close();
    void showState();
};

// 선언부와 정의부가 다르다면
// inline 함수는 헤더파일에 정의해야 에러 안남
inline void Door::Open(){
    state = OPEN;
}

#endif