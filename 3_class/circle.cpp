#include <iostream>
using namespace std;

/*
class Circle{
public:
    int redius;
    int GetRedius(){
        return redius;
    }
    double GetArea(){
        return redius*redius*3.15;
    }
};
*/

class Circle{ // class �ȿ��� ����(declaration)
public:
    int redius;
    int GetRedius(){
        return redius;
    }
    double GetArea();
};
double Circle::GetArea(){ // class �ۿ��� ����(implementation)
    return redius*redius*3.15;
}

int main(){
    Circle donut;
    donut.redius = 1;

    cout << "������ : " << donut.GetRedius() << endl;
    double area = donut.GetArea();
    cout << "���� : " << donut.GetArea() << endl;

    Circle pizza;
    pizza.redius = 5;
    cout << "���� : " << pizza.GetArea() << endl;

    return 0;
}