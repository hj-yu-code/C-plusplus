#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    ifstream fin(file, ios::in);
//�ӵ�, �޸𸮻�� ȿ���� ���Ƽ� char�� ���� ��
    if(!fin) {
        cout << "c:\\windows\\system.ini ���Ͽ��� ����!!!" << endl;
        return -1;
    }
    char buffer[100];

    // �б⸦ �����ϸ� true ��ȯ
    while (fin.getline(buffer, 100)) { // char style
        cout << buffer << endl;
    }

    fin.close();
    cout << "=========================" << endl;

    const char* file2 = "student.txt";
    ifstream fin2(file2, ios::in);

    if(!fin2) {
        cout << "student.txt ���Ͽ��� ����!!!" << endl;
        return -1;
    }

    string line;
    while (getline(fin2, line)) { // string style
        cout << line << endl;
    }

    fin2.close();
    

    return 0;
}