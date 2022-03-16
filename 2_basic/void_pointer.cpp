#include <iostream>
using namespace std;

int main(){
    int nArray[5], i;
    void* ptr = nArray;
    for(i = 0; i<5; i++){
        *( (int*)ptr + i) = 10 + i;
        // void는 타입이 없어서 사용할때 타입을 지정해줘야 함
    }

    for(i = 0; i<5; i++){
        cout << nArray[i] << ", ";
    }
    cout << endl;


    return 0;
}
