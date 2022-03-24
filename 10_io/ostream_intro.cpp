/*
��-��� �ý���(IStraam, OStream)
OStream�� �����ϱ� ���� cout ��ü�� ����
<< : ��� ��Ʈ�� ������
*/

#include <cstdio>
// using namespace std;

namespace myStd {
    const char *endl= "\n";

    class ostream {
    public:
        ostream& operator << (const char * str) {
            printf("%s", str);
            return *this; // �������� ����� �� �ְ� ����
        }
        ostream& operator << (int n) {
            printf("%d", n);
            return *this;
        }
        ostream& operator << (double n) {
            printf("%lf", n);
            return *this;
        }
    };
    ostream cout; // ostream ��ü cout ����


}
using namespace myStd;
int main() {
    cout << "hello world" << endl;
    cout << 3.124 << ", " << 1000 << endl;


    return 0;
}