#include <iostream>
using namespace std;

/*
    name
    [(M)    (i)     (k)     (e)     (\0)]
    3000            [ref]

    S
    (3000)

*/

char &find(char s[], int index){
    return s[index];
}

int main() {
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S'; // 참조자 반환 값에 'S' 대입
    cout << name << endl;

    char& ref = find(name, 2); // 참조자 반환 값을 변수로 지정
    ref = 't';
    cout << name << endl;

    return 0;
}