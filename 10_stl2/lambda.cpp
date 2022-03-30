#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
lambda ���� : [ĸó] (�Ű�����)->����Ÿ�� {�Լ� ����} (ȣ������)

ĸ�� : ���ٽĿ��� ����ϰ��� �ϴ� �Լ� �ٱ��� ���� ���
�Ű����� : ���� �Լ��� �Ű� ���� ����Ʈ�� ����
���� Ÿ�� : ��������
�Լ� ���� : ���ٽ��� ���� �Լ� �ڵ�
ȣ������ : �Ű� ������ ���� ��
*/
// lambda �Լ��� �ζ��� �Լ�ó�� ��ü�� �̷��� ����

void sum1(int x, int y) {
    cout << "sum1() : " << x+y << endl;
}

int main() {
    //1. �Ϲ��Լ� ȣ��
    sum1(10, 20);

    //2. �����Լ� ȣ��
    [](int x, int y){
        cout << "sum1()�� ������ lambda �Լ� : " << x+y << endl;
    }(10, 30);

    //3. ���� ���ϴ� ������ �����ϴ� ����(ĸó ���)
    int sum = 0;
    [&sum](int x, int y) { sum = x+y;}(10, 30);
    cout << "sum : " << sum << endl;

    // 4. for_each�� ����ϴ� ����
    vector<int> v = { 1, 2, 3, 4, 5 };
    for_each(v.begin(), v.end(), [](int n){cout << n << ", ";} );
    // for_each : algorithm ����� ����
    // ù��° ���ں��� �ι�° ���ڱ��� �ݺ��ϰ�, �� ���� ����° ���ڷ� �׼��� ����

    int sum2 = 0;
    for_each(v.begin(), v.end(), [&sum2](int n){sum2 += n;} );
    cout << "\nsum2 : " << sum2 << endl;

    double pi = 3.14159;
    // 5. ���ٸ� ����ϴ� �����Լ�
    auto calc = [pi](int r)->double {return pi *r*r;}; // ���ٸ� : calc
    cout << "���� : " << calc(5) << endl;

    int num = 10, num2;
    auto f1 = [num]() {cout << num*num << endl;};
    f1();

    auto f2 = [num]()->int {return num * num;};
    cout << f2() << endl;

    auto f3 = [num, &num2](){num2 = num*num;}; // num : ���, &num2 : ����
    f3();
    cout << "num2 : " << num2 << endl;

    return 0;
}