#include <iostream>
using namespace std;

int main(){
    int nArray[5], i;
    void* ptr = nArray;
    for(i = 0; i<5; i++){
        *( (int*)ptr + i) = 10 + i;
        // void�� Ÿ���� ��� ����Ҷ� Ÿ���� ��������� ��
    }

    for(i = 0; i<5; i++){
        cout << nArray[i] << ", ";
    }
    cout << endl;


    return 0;
}
