#include <iostream>
using namespace std;
class Counter
{
private:
    int value;

public:
    Counter() : value(0) {}
    void showData() {
        cout << "value : " << value << endl;
    }
    friend void setValue(Counter &ref, int n);
    // friend : 외부접근을 가능하게 하는 키워드
};

// 전역함수에서 객체 private 맴버 접근 (class에서 friend 선언)
void setValue(Counter &ref, int n) {
    ref.value = n;
}

int main(){
    Counter cnt;
    cnt.showData();

    setValue(cnt, 5000);
    cnt.showData();
    return 0;
}