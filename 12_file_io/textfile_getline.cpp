#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    ifstream fin(file, ios::in);
//속도, 메모리사용 효율이 좋아서 char을 많이 씀
    if(!fin) {
        cout << "c:\\windows\\system.ini 파일열기 실패!!!" << endl;
        return -1;
    }
    char buffer[100];

    // 읽기를 성공하면 true 반환
    while (fin.getline(buffer, 100)) { // char style
        cout << buffer << endl;
    }

    fin.close();
    cout << "=========================" << endl;

    const char* file2 = "student.txt";
    ifstream fin2(file2, ios::in);

    if(!fin2) {
        cout << "student.txt 파일열기 실패!!!" << endl;
        return -1;
    }

    string line;
    while (getline(fin2, line)) { // string style
        cout << line << endl;
    }

    fin2.close();
    

    return 0;
}