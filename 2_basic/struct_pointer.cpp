#include <iostream>
using namespace std;

struct RetValue{
    int retValue1;
    int retValue2;
};

RetValue PlusMinus(int n1, int n2){
    RetValue A;
    A.retValue1 = n1 + n2;
    A.retValue2 = n1 * n2;
    return A;
}

int main(){
    RetValue R;
    R = PlusMinus(100, 30);
    cout << "100 + 30 = " << R.retValue1 << endl;
    cout << "100 * 30 = " << R.retValue2 << endl;


    return 0;
}
