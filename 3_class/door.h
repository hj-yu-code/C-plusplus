#ifndef _DOOR_H_ // #include "door.h"�� ȣ�� �� ���ʷ� 1���� ȣ��ǰ� ��
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
    // �����ڵ忡�� inline�� ��ü�� �� �־�� ��

    // void Open();
    void Close();
    void showState();
};

// ����ο� ���Ǻΰ� �ٸ��ٸ�
// inline �Լ��� ������Ͽ� �����ؾ� ���� �ȳ�
inline void Door::Open(){
    state = OPEN;
}

#endif