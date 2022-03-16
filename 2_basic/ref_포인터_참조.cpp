#include <iostream>
using namespace std;
/*
(참조)  ref     pref    dpref
(변수)  num     ptr     dptr
        (12)    (3000)  (4000)
(주소)  3000    4000    5000
*/
int main(){
    int num = 12;
    int* ptr = &num;
    int ** dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << "num : " << num << ", ref : " << ref << endl;
    cout << "*ptr : " << *ptr << ", *pref : " << *pref << endl;
    cout << "**dptr : " << **dptr << ", **dpref : " << **dpref << endl;
    // 모두 12 가 나옴

    const char *str = "kingdom";
    // c++은 무조건 const가 필요함
    const char *(strRef) = str;

    cout << "str : " << str << ", strRef : " << strRef << endl;
    // 모두 kingdom 이 나옴

    return 0;
}