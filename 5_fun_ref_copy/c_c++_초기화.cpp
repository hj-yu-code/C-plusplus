#include <iostream>
using namespace std;

class AAA{
private:
    int value;

public:
    AAA() {    }

    // AAA(int n) {
    explicit AAA(int n) { // explicit : 명시적 호출만 허용
        value = n;
    }
    void showData(){
        cout << "value : " << value << endl;
    }

};

int main() {
    int n1 = 30; // C style 초기화
    int n2(30); // C++ style 초기화
    cout << "n1: " << n1 << "n2: " << n2 << endl;

    AAA a1(100); // C++ style 초기화
    a1.showData();

    // C sytle로 초기화 할때는 인자가 1개여야 함
    // AAA a2 = 200; // C style 초기화 -> 묵시적으로 C++ style로 변환
    // a2.showData();

    return 0;
}