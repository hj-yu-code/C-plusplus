#include <iostream>
using namespace std;

/*

�⺻ ������
1. Ŭ������ �����ڰ� �ϳ��� ����Ǿ� ���� �ʴ� ���,
�����Ϸ��� ��� �������ִ� ������(�Ű� ���� ���� ������)

2. �⺻ �����ڰ� �ڵ����� �����Ǵ� ���
- �����ڰ� �ϳ��� �ۼ��Ǿ� ���� �ʴ� ���

3. �⺻ �����ڰ� �ڵ����� �������� �ʴ� ���
- �����ڰ� �ϳ��� ����� Ŭ������ ���
ex) �Ʒ��� ���� Circle(int r)�� ����Ǿ� �ִٸ�, 
main() ���� Circle pizza; �θ� ��� ����!

*/

class Circle{
private:
    int redius;

public:
    Circle() // ����Ʈ �����ڴ�, ����� ���� �����ڰ� ���� �� ȣ��ȴ�.
    {
        cout << "Circle()" << endl;
    }

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