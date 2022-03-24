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

class CCC : public AAA, public BBB { // ���߻��
public:
    void showString() {
        cout << "CCC: showString()" << endl;
    }
};

int main() {
    CCC c1;
    // c1.string() // ��ȣ��
    c1.AAA::string();
    c1.BBB::string();
    c1.showString();
    return 0;
}