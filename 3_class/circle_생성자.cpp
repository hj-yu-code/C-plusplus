#include <iostream>
using namespace std;

class Circle{
private:
    int redius;

public:
    Circle(){ // ������ : Ŭ���� �̸��� ������ ��� �Լ�
        cout << "Circle()" << endl;
        redius = 0;
    }
    Circle(int r){ // int ���ڷ� ���� ������
        cout << "Circle(int r)" << endl;
        redius = r;
    }
    

    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut; // ��ü�� ������ ���ÿ� ������ ȣ��

    cout << "������ : " << donut.GetRedius() << endl;

    Circle pizza(30);
    cout << "������ : " << pizza.GetRedius() << endl;
    cout << "============================" << endl;

    Circle c1;          // Circle()
    Circle c2(1);       // Circle(int r)
    Circle c3 = Circle(); // ������ ����� ȣ��, Circle()
    Circle c4 = Circle(3); // Circle(int r)


    return 0;
}