#include <iostream>
using namespace std;

class Circle{
private:
    int redius = 0;

public:
    // Circle() // ����Ʈ �����ڴ�, ����� ���� �����ڰ� ���� �� ȣ��ȴ�.
    // {
    //     cout << "Circle()" << endl;
    // }

    Circle(int r)
    {
        cout << "Circle(int r)" << endl;
        redius = r;
    }

    int GetRedius(){  return redius;  }
};

int main(){
    Circle donut(10);
    cout << "������ : " << donut.GetRedius() << endl;

    Circle pizza;
    cout << "������ : " << pizza.GetRedius() << endl;

    return 0;
}