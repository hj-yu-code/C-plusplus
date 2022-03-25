#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // const char* file = "c:\\windows\\system.ini";
    const char* file = "student.txt";
    ifstream fin(file, ios::in);

    if(!fin) {
        cout << "파일열기 실패!!!" << endl;
        return -1;
    }
    char ch;
    int cn =0;

    while ((ch = fin.get()) != EOF) {
        cout << ch;
        cn ++;
    }
    cout << "읽은 바이트 수 : " << cn << endl;
    fin.close();

    return 0;
}