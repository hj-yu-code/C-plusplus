#include <iostream>
using namespace std;

class Circle{
private:
    int redius;
    
public:
    Circle() {
        cout << "Circle() " << endl;
    }
    Circle(int r){
        redius = r;
    }
    ~Circle() {
        cout << "~Circle() : " << redius << endl;
    }
    void setRedius(int r){
        redius = r;
    }
    int getRedius(){
        return redius;
    }
    double getArea(){
        return redius * redius * 3.15;
    }
};

void Increse1(Circle cir){
    int r = cir.getRedius();
    cir.setRedius(r + 1);
}
void Increse2(Circle *cir){
    int r = cir->getRedius(); //포인터 주의!
    cir->setRedius(r + 1);
}

Circle Increse3(){
    Circle tmp;
    tmp.setRedius(20);
    return tmp;
}

int main(){

    Circle waffle(30);

    Increse1(waffle); // call by value
    cout << "waffle.getRedius() : " << waffle.getRedius() << endl;

    Increse2(&waffle); // call by reference
    cout << "waffle.getRedius() : " << waffle.getRedius() << endl;

    Circle pizza = Increse3(); // 객체 반환(리턴)
    cout << "waffle.getRedius() : " << pizza.getRedius() << endl;

    Circle donut = pizza; // 객체 대입(치환)
    cout << "donut.getRedius() : " << donut.getRedius() << endl;

    return 0;
}