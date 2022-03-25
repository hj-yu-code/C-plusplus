#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    int main[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, tnum[10];
    double dnum[5] = {1.1, 2.1, 3.1, 4.1, 5.1}, tdnum[5];
    char msg[30] = "multi campus.", tmsg[30];

    // write
    const char* file1 = "array.dat";
    ofstream fout(file1, ios::out | ios::binary);

    if(!fout) {
        cout << "array.dat 실패" << endl;
        return -1;
    }

    char buf[100];
    int i;
    fout.write((char*)main, sizeof(main));
    fout.write((char*)dnum, sizeof(dnum));
    fout.write(tmsg, sizeof(tmsg));
    fout.close();
    
    // read
    const char* file2 = "array.dat";
    ifstream fin(file2, ios::in | ios::binary);

    if(!fin) {
        cout << "array.dat 실패" << endl;
        return -1;
    }
    fin.read((char*)tnum, sizeof(tnum));
    fin.read((char*)tdnum, sizeof(tdnum));
    fin.read(tmsg, sizeof(tmsg));
    fin.close();

    // print
    for(i=0; i<10; i++) {
        cout << tnum[i] << ", ";
    } cout << endl;
    for(i=0; i<5; i++) {
        cout << tdnum[i] << ", ";
    } cout << endl;
    cout << "tmsg : " << msg << endl;

    fin.close();
    return 0;
}