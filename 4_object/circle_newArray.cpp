#include <iostream>
using namespace std;

/*
    CircleP
    (4000)

    P --> funCircle() �����鼭 ����
    (4000)
    ----------------
    [0      1       2]
    ()      ()      ()
    4000    4004    4008
    
*/
class Circle{
private:
    int radius;
public:
    Circle() { 
        // cout << "Circle()" << endl;
        radius = 1;
        }
    ~Circle() {
        cout << "~Circle() :" << radius << endl;
        }
    Circle(int r) { 
        // cout << "Circle(int r)" << endl;
        radius = r;
        }
    int getRadius(){
        return radius;
    }
    void setRadius(int r){
        radius = r;
    }
    double getArea(){
        return radius * radius * 3.15;
    }
};

Circle *funCircle(int n){
    Circle *P = new Circle[n];
    int r;

    for(int i = 0; i < n; i++){
        cout << "������ ? ";
        cin >> r;
        P[i].setRadius(r);
        // (P+i)->setRadius(r);
    }
    return P;
}

int main(){
    int N;
    cout << " ������ Circle ���� ? ";
    cin >> N;
    
    Circle *CircleP = funCircle(N);

    for(int i = 0; i < N; i++){
        cout << "Circle " << i << "���� ���� : " << CircleP[i].getArea() << endl;
    }
    
    delete[] CircleP;


    return 0;
}