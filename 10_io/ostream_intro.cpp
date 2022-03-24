/*
입-출력 시스템(IStraam, OStream)
OStream을 이해하기 위해 cout 객체를 구현
<< : 출력 스트림 연산자
*/

#include <cstdio>
// using namespace std;

namespace myStd {
    const char *endl= "\n";

    class ostream {
    public:
        ostream& operator << (const char * str) {
            printf("%s", str);
            return *this; // 연속으로 사용할 수 있게 선언
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
    ostream cout; // ostream 객체 cout 생성
}

using namespace myStd;
int main() {
    cout << "hello world" << endl;
    cout << 3.124 << ", " << 1000 << endl;


    return 0;
}