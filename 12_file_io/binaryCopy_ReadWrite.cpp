#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* sour = "��ȭ.jpg";
    const char* dest = "��ȭCopy.jpg";

    fstream fin(sour, ios::in | ios::binary);

    if(!fin) {
        cout << "��ȭ.jpg ���Ͽ��� ����!!!" << endl;
        return -1;
    }

    fstream fout(dest, ios::out | ios::binary);

    if(!fout) {
        cout << "��ȭCopy.jpg ���Ͽ��� ����!!!" << endl;
        return -1;
    }

    char buffer[1024];
    while(!fin.eof()) {
        fin.read(buffer, 1024); // �����, ũ��
        int n = fin.gcount();
        fout.write(buffer, n);
    }
    fin.close();
    fout.close();
    cout << "���� ���� ���� �Ϸ�" << endl;
    
    return 0;
}