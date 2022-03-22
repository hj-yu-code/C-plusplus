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
    // friend : �ܺ������� �����ϰ� �ϴ� Ű����
};

// �����Լ����� ��ü private �ɹ� ���� (class���� friend ����)
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