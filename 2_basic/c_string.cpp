#include <iostream>
#include <cstring> // c 헤더파일 사용방법 : .h는 버리고, 앞에 c 추가

using namespace std;

int main(){
    char name[20];
    char comAddr[50];

    cout << "성명 ? ";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "회사주소 ? ";
    // cin >> comAddr;
    cin.getline(comAddr, 50); // 맴버 메서드
    // cin.getline(comAddr, 50, '.'); // '.'이 나올때까지 문자를 받음


    cout << name << ", " << comAddr << endl;
    cout << "strupr(name) : " << strupr(name) << endl;
    cout << "strlwr(comAddr) : " << strlwr(comAddr) << endl;

    if (strcmp(name, "KIM") == 0)
        cout << "Equal." << endl;
    else
        cout << "Not Equal." << endl;

    return 0;
}