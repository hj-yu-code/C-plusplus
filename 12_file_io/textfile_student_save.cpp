#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[20], dept[30];
    int sid;

    cout << "성명 ? ";
    cin >> name;
    cout << "학번(숫자) ? ";
    cin >> sid;
    cout << "학과 ? ";
    cin >> dept;

    // 파일여는법 1
    // ofstream fout; // 파일 쓰기에 사용
    // fout.open("student.txt");

    // 파일여는법 2
    ofstream fout("student.txt");

    if(!fout) { // 열기에 성공하면 true
    // 시스템 메모리상 얼마 안남았을 때 에러 날 수 있음
        cout << "파일열기 실패!!!" << endl;
        return -1; // main 끝남
    }
    fout << sid << endl;
    fout << name << endl;
    fout << dept << endl;

    fout.close();
    cout << "student.txt Save." << endl; 

    return 0;
}