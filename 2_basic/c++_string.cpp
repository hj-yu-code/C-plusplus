#include <iostream>
#include <string>

using namespace std;

int main(){
    char _name[20];

    string name; // 크기 제한이 없음
    string comAddr;

    cout << "성명 ? ";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "회사주소 ? ";
    getline(cin, comAddr); // global func.
    // cin >> comAddr; // 스페이스 까지만 입력가능

    cout << name << ", " << comAddr << endl;

    return 0;
}