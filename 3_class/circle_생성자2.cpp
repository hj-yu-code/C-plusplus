#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    // �̿� ������ ȣ�� : ������ �� ���ڸ� ����� �����ε��� �޼��带 ȣ���ϰ� ����
    Circle() : Circle(5)
    { 
        cout << "Circle()" << endl;
    }
    Circle(int r) : redius(r) // �ݷ� �ʱ�ȭ( �����ڸ� ��� ���� )
    {
        cout << "Circle(int r)" << endl;
        // redius = r;
    }
    
    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut;
    cout << "������ : " << donut.GetRedius() << endl;
    // �̿� ������ ������ 5�� ��

    Circle pizza(30);
    cout << "������ : " << pizza.GetRedius() << endl;

    return 0;
}