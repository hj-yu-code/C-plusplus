#include <iostream>
using namespace std;

bool IsPositive(int N){
    if(N>=0)
        return true;
    else
        return false;

}
int main(){
    int N;
    cout << "Á¤¼ö ? ";
    cin >> N;

    cout << (IsPositive(N) ? "Positive": "Negative") << " number" << endl;
    return 0;
}