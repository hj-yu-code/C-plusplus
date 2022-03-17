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

class Circle{ // class 안에서 선언(declaration)
public:
    int redius;
    int GetRedius(){
        return redius;
    }
    double GetArea();
};
double Circle::GetArea(){ // class 밖에서 구현(implementation)
    return redius*redius*3.15;
}

int main(){
    Circle donut;
    donut.redius = 1;

    cout << "반지름 : " << donut.GetRedius() << endl;
    double area = donut.GetArea();
    cout << "면적 : " << donut.GetArea() << endl;

    Circle pizza;
    pizza.redius = 5;
    cout << "면적 : " << pizza.GetArea() << endl;

    return 0;
}