#include <iostream>
using namespace std;

class AAA{
private:
    int value;

public:
    AAA() {    }

    // AAA(int n) {
    explicit AAA(int n) { // explicit : ����� ȣ�⸸ ���
        value = n;
    }
    void showData(){
        cout << "value : " << value << endl;
    }

};

int main() {
    int n1 = 30; // C style �ʱ�ȭ
    int n2(30); // C++ style �ʱ�ȭ
    cout << "n1: " << n1 << "n2: " << n2 << endl;

    AAA a1(100); // C++ style �ʱ�ȭ
    a1.showData();

    // C sytle�� �ʱ�ȭ �Ҷ��� ���ڰ� 1������ ��
    // AAA a2 = 200; // C style �ʱ�ȭ -> ���������� C++ style�� ��ȯ
    // a2.showData();

    return 0;
}