#include <iostream>
using namespace std;
int &refFuncOne(int &ref){
    ref++;
    return ref; //�����ڷ� �޾Ƽ� �����ڷ� ��ȯ 
}
int &refFuncTwo(int &ref){
    ref++;
    return ref; //���� ��ȯ 2 
}
int main(){
    int num1 = 1;
    int& num2 = refFuncOne(num1);
    num1++;
    num2++; // �Ѵ� ���� �޸𸮸� ���� �����Ƿ� �� �� 4�� 
    cout << num1 << ", " << num2 << endl;


    num1 = 1;
    int num3 = refFuncTwo(num1); // ���� ������ �����ڵ� ��ȯ ���� 
    num1++; // 3
    num3++; // 1 ref ���� ���� �޴´�. 
    cout << num1 << ", " << num3 << endl;

    return 0;
}