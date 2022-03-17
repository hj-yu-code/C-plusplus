#include <iostream>
using namespace std;

// public : 
class Counter{
private:  // 내부접근 허락, default
    int val2 = 100;
    
public:  // 외부접근 허락
    int val;
    void InCrement(){
        val++; // 내부접근
        val2++; // 내부접근
    }
    int getValue(){
        return val2; // 내부접근
    }
};

int main(){
    Counter cnt;

    cnt.val = 1; // 외부접근
    cnt.InCrement(); // 외부접근

    cout << "cnt.val : " << cnt.val << endl;

    // cout << "cnt.val : " << cnt.val2 << endl; // error
    cout << "cnt.val : " << cnt.getValue() << endl;


    return 0;
}