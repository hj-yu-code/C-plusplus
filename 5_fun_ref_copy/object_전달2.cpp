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
    int r = cir->getRedius();
    cir->setRedius(r + 1);
}

void Increse4(Circle &cir){
    int r = cir.getRedius();
    cir.setRedius(r+2);
}

int main(){

    Circle waffle(30);

    Increse1(waffle);
    cout << "waffle.getRedius() : " << waffle.getRedius() << endl;

    Increse2(&waffle);
    cout << "waffle.getRedius() : " << waffle.getRedius() << endl;

    Increse4(waffle); // 참조자로 호출
    cout << "waffle.getRedius() : " << waffle.getRedius() << endl;

    return 0;
}