#include <iostream>
using namespace std;

class BBB; // 전방선언 : AAA 클래스가 BBB 클래스를 사용하므로 선언해야 함

class AAA{
// private:
public:
    void setData(BBB &ref, int value);
    void getData(BBB &ref);
};

class BBB{
private:
    int data = 0;
public:
    void showData() {
        cout << "showData() : " << data << endl;
    }

    friend void AAA::setData(BBB &ref, int value);
    friend void AAA::getData(BBB &ref);
};

// BBB 클래스(friend 선언된 클래스) 이하에 선언되어야
// AAA 클래스의 메서드에서 BBB 자료형을 해석할 수 있음
void AAA::setData(BBB &ref, int value) {
    ref.data = value;
}
void AAA::getData(BBB &ref) {
    cout << "ref.data : " << ref.data << endl;
}

int main() {
    AAA a1;
    BBB b1;
    b1.showData();

    a1.setData(b1, 100);
    b1.showData();
    a1.getData(b1);

    return 0;
}