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

    while (!fin.eof()) { // ���� ���̸� true ��ȯ
        fin.read(buf, 100); // �����, ũ��
        int n = fin.gcount(); // ũ��
        cout.write(buf, n); // �����, ũ��

        // cout.write ��� ��밡��
        // buf[n-1] = '\0';
        // cout << buf << endl;;

        count += n;
    }
    cout << "���� ����Ʈ �� : " << count << endl;
    fin.close();
    
    return 0;
}