#include <iostream>
using namespace std;
/*
inline �Լ�
- �Լ� ȣ���� ��ü(��ũ�ο� ����)
- ��ü �̹Ƿ� ª�� �ڵ常 ����ϱ�
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
    void Close(); // ���⼭ �����ϸ� inline �Լ��� �ڵ����� ó��
    void showState();
};
inline void Door::Open(){
    state = OPEN;
}
void Door::Close(){ // �ܺο��� ����Ǿ����Ƿ� inline�� �ƴ�
    state = CLOSE;
}
void Door::showState(){
    cout << "���� ���� ���� : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}

int main(){
    Door d1;

    d1.Open(); // open �Լ��� ��ü! (�Լ� ȣ���� �ƴ�)
    d1.showState();
    d1.Close();
    d1.showState();


    return 0;
}