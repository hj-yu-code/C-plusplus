#include <iostream>
using namespace std;
int main(){
    cout << "키보드로 데이터 입력" << std::endl;

    int wid, hei;
    cout << "너비 : ";
    if(cin.fail()){ //문자 입력 -> 문자 저장 -> fail bit 설정
        cin.clear(); // fail bit 초기화
        cin.ignore(100, '\n'); // 입력버퍼를 비움 : 문자 100개 혹은 '\n'을 읽고 버림
    }
    cin >> wid;
    cout << "높이 : ";
    cin >> hei;

    int area = wid * hei;
    cout << "면적은 : " << area << endl;

    return 0;
}