#include <iostream>
using namespace std;

class BBB; // ���漱�� : AAA Ŭ������ BBB Ŭ������ ����ϹǷ� �����ؾ� ��

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

// BBB Ŭ����(friend ����� Ŭ����) ���Ͽ� ����Ǿ��
// AAA Ŭ������ �޼��忡�� BBB �ڷ����� �ؼ��� �� ����
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