#include <iostream>
using namespace std;

// public : 
class Counter{
private:  // �������� ���, default
    int val2 = 100;
    
public:  // �ܺ����� ���
    int val;
    void InCrement(){
        val++; // ��������
        val2++; // ��������
    }
    int getValue(){
        return val2; // ��������
    }
};

int main(){
    Counter cnt;

    cnt.val = 1; // �ܺ�����
    cnt.InCrement(); // �ܺ�����

    cout << "cnt.val : " << cnt.val << endl;

    // cout << "cnt.val : " << cnt.val2 << endl; // error
    cout << "cnt.val : " << cnt.getValue() << endl;


    return 0;
}