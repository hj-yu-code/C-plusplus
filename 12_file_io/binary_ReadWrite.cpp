#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* file1 = "c:\\windows\\system.ini";
    ifstream fin(file1, ios::in);

    if(!fin) {
        cout << "" << endl;
        return -1;
    }
    int count = 0;
    char buf[100];

    while (!fin.eof()) { // 파일 끝이면 true 반환
        fin.read(buf, 100); // 저장소, 크기
        int n = fin.gcount(); // 크기
        cout.write(buf, n); // 저장소, 크기

        // cout.write 대신 사용가능
        // buf[n-1] = '\0';
        // cout << buf << endl;;

        count += n;
    }
    cout << "읽은 바이트 수 : " << count << endl;
    fin.close();
    
    return 0;
}