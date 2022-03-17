#include <iostream>
#include <cstring>
using namespace std;
/*
    <stack> --> NULL�� �ʱ�ȭ
    num(4)  str(4)  array(4)    N(4)
    (3000)  (4000)  (5000)      (6000)
    200     210     220         230

    -------------------------------------------
    <heap> --> delete �ϸ� heap������ ������
    __(4)   __(20)              __(20)      __(4)
    (100)   ("hello world")     ([10, 20])  (200)
    3000    4000                5000 5004   6000

*/

int main(){
    int *num = new int;
    int *N = new int (200); // �޸� �Ҵ�� ���ÿ� �ʱ�ȭ

    char *str = new char[20];
    int *Array = new int[5];

    *num = 100;
    strcpy(str, "hello world.");
    *(Array + 0) = 10;
    *(Array + 1) = 20;

    cout << *num <<endl;
    cout << *N <<endl;
    cout << str << endl;
    cout << Array[0] << ", " << Array[1] << endl;
    cout << Array[2] << ", " << Array[3] << endl; //garbage
    
    // heap ������ ����
    delete num;
    delete N;
    delete[] Array;
    delete[] str;

    // stack ������ �ʱ�ȭ
    num = NULL; // c ���
    N = NULL;
    Array = nullptr; // c++ �߰� ���
    str = nullptr;

    return 0;
}