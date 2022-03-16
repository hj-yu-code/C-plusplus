#include <iostream>
using namespace std;
/*
(����)  ref     pref    dpref
(����)  num     ptr     dptr
        (12)    (3000)  (4000)
(�ּ�)  3000    4000    5000
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
    // ��� 12 �� ����

    const char *str = "kingdom";
    // c++�� ������ const�� �ʿ���
    const char *(strRef) = str;

    cout << "str : " << str << ", strRef : " << strRef << endl;
    // ��� kingdom �� ����

    return 0;
}