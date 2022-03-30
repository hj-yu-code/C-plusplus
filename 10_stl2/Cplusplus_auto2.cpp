#include <iostream>
#include <vector>
using namespace std;

int square(int n) {
    return n*n;
}

// �Ű������� �����Ͻ� ������ Ÿ���� �߷��� �� �����Ƿ� auto Ű���� �Ұ�
// int add(auto a, auto b) { // error
int add(int a, int b) {
    return a + b;
}
auto add_2(int a, double b) { // double�� �˾Ƽ� �� ��ȯ
    return a + b ;
}

template<typename T1, typename T2>
auto ADD(T1 a, T1 b) { // template������ auto Ÿ�� ��ȯ ����
    return a + b;
}


int main() {
    auto ret = square(3); // �Ѿ���� ���� int �̹Ƿ� auto������ int�� ����
    cout << "ret : " << ret << endl;

    auto sum = add(10, 20);
    cout << "sum : " << sum << endl;
    auto sum_2 = add_2(10, 20);
    cout << "sum_2 : " << sum_2 << endl;

    auto t1 = ADD<int, float>(100, 1.5);
    auto t2 = ADD<int, char>(1, 'A');
    // auto t3 = ADD(100, 2.0); // visual studio������ �� �����
    auto t3 = ADD<int, int>(100, 2.0);

    cout << typeid(t1).name() << ", " << typeid(t2).name() << ", " << typeid(t3).name() << endl;

    auto add2 = add_2; // �Լ������� ����
    // �������� �� �ȵǹǷ� ��뿡 �����ؾ� ��
    auto sum2 = add2(100, 7.1);
    cout << "sum2 : " << sum2 << endl;
    return 0;
}