#include <iostream>
using namespace std;

// size ��ŭ ���� �Ҵ� �� ������ �Է��ϰ�, ���� �Ҵ� �ּ� ��ȯ
int* NumAdd(int size){
    int *arr = new int(size);
    for (int i =0; i < size; i++){
        cout << "input ? ";
        cin >> *(arr + i);
    }
    return arr;
}

int main(){
    int size;
    cout << "�Է��� ������ �� ? ";
    cin >> size; // 5

    int *Arr = NumAdd(size);
    for(int i =0; i < size; i++){
        cout << *(Arr + i) << ", ";
    }
    cout << endl;

    delete[] Arr;
    Arr = NULL;

    return 0;
}