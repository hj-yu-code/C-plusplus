#include <iostream>
using namespace std;
/*
�����ڸ� ����ϴ� ����
1. �Լ��� ���μ��� ����Ҷ� �Լ� ���ο��� �Ҵ��ϴ� �޸𸮰� ���� �ʿ����� ����
2. �Լ� �ܿ����� �ӽð����� ���� ���� �ٷ� ����� ���� ����
*/


// int Add1(int x, int y){
int Add1(int &x, int &y){ // ����� ������, �Ҵ��ϴ� �޸𸮰� ����
    return x+y;
}
int Add2(const int& x, const int& y){ // �ӽð������� �Ի� �ٷ� ����
    return x+y;
}

int main(){
    const int N = 100 * 200;
    const int& ref_N = 100 + 200; // �ӽð����� �Ҵ��Ͽ� ����

    // ����� �����ϴ� ����
    int n1 = 100, n2 =200;

    int ret1 = Add1(n1, n2);
    cout << " Add1(n1, n2) : " << ret1 << endl;

    int ret2 = Add2(100, 200); // ���� �޸� �ʿ� ����
    cout << " Add2(100, 200) : " << ret1 << endl;

    return 0;
}