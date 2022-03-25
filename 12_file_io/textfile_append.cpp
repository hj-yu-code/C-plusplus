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
        cout << "���Ͽ��� ����!!!" << endl;
        return -1;
    }
    if(!fout) { 
        cout << "���Ͽ��� ����!!!" << endl;
        return -1;
    }

    char ch;

    while ((ch = fin.get()) != EOF) {
        // fout << ch; // ��ɾ�� ���
        fout.put(ch); // �Լ��� ���
    }
    cout << "���� �߰� �Ϸ�" << endl;
    fin.close();
    fout.close();

    return 0;
}