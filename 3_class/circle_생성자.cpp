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
    double GetArea();
};

double Circle::GetArea(){
    return redius*redius*3.15;
}

int main(){
    Circle donut; // ��ü�� ������ ���ÿ� ������ ȣ��

    cout << "������ : " << donut.GetRedius() << endl;
    // double area = donut.GetArea();
    // cout << "���� : " << donut.GetArea() << endl;

    Circle pizza(30);
    cout << "������ : " << pizza.GetRedius() << endl;

    return 0;
}