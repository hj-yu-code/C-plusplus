#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // const char* tofile = "c:\\windows\\system.ini";
    const char* file1 = "student.txt";
    const char* file2 = "student.bak";
    // ifstream fin(tofile, ios::in);
    // ofstream fout(file1, ios::out | ios::app);
    fstream fin(file1, ios::in);
    fstream fout(file2, ios::out);
    

    if(!fin) {
        cout << "파일열기 실패!!!" << endl;
        return -1;
    }
    if(!fout) { 
        cout << "파일열기 실패!!!" << endl;
        return -1;
    }

    char ch;

    while ((ch = fin.get()) != EOF) {
        // fout << ch; // 명령어로 사용
        fout.put(ch); // 함수로 사용
    }
    cout << "파일 추가 완료" << endl;
    fin.close();
    fout.close();

    return 0;
}