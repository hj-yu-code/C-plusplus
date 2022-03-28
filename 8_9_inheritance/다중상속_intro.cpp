#include <iostream>
using namespace std;

class AAA {
public:
    void string() {
        cout << "AAA: string()" << endl;
    }
};

class BBB {
public:
    void string() {
        cout << "BBB: string()" << endl;
    }
};

class CCC : public AAA, public BBB { // 다중상속
public:
    void showString() {
        cout << "CCC: showString()" << endl;
    }
};

int main() {
    CCC c1;
    // c1.string() // 모호성
    c1.AAA::string();
    c1.BBB::string();
    c1.showString();
    return 0;
}