#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    Circle();

    Circle(int r);

    int GetRedius();
};

Circle::Circle() : redius(4) {}
// ������ ���� ������ �ݷ� �ʱ�ȭ �Ҷ��� ���ȣ�� �� �ʿ���
// ���� cout ���� �����̱� ����!
// �Լ�ó�� �����ϱ�

int main(){
    Circle donut(10);
    cout << "������ : " << donut.GetRedius() << endl;

    Circle pizza;
    cout << "������ : " << pizza.GetRedius() << endl;

    return 0;
}