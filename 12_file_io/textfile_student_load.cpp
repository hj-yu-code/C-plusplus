#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[20], dept[30];
    int sid;

    // ifstream fin("student.txt", ios::in); //같은것
    ifstream fin("student.txt");

    if (!fin) {
    // 파일 이름이 없을 때 에러 날 수 있음
        cout << "파일열기 실패!!!" << endl;
        return -1;
    }
    fin >> sid;
    fin >> name;
    fin >> dept;

    fin.close();
    cout << sid << ", " << name << ", " << dept << endl;

    return 0;
}