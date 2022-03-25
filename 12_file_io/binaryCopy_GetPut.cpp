#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* sour = "국화.jpg";
    const char* dest = "국화Copy.jpg";

    fstream fin(sour, ios::in | ios::binary);

    if(!fin) {
        cout << "국화.jpg 파일열기 실패!!!" << endl;
        return -1;
    }

    fstream fout(dest, ios::out | ios::binary);

    
    if(!fout) {
        cout << "국화Copy.jpg 파일열기 실패!!!" << endl;
        return -1;
    }
    int ch;
    while((ch=fin.get()) != EOF) {
        fout.put(ch);
    }
    fin.close();
    fout.close();
    cout << "이진 파일 복사 완료" << endl;
    
    return 0;
}