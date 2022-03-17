#include <iostream>
using namespace std;

// size 만큼 동적 할당 후 데이터 입력하고, 동적 할당 주소 반환
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
    cout << "입력할 정수의 수 ? ";
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