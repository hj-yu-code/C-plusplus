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

    find(name, 0) = 'S'; // ������ ��ȯ ���� 'S' ����
    cout << name << endl;

    char& ref = find(name, 2); // ������ ��ȯ ���� ������ ����
    ref = 't';
    cout << name << endl;

    return 0;
}