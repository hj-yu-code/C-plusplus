#include <iostream>
using namespace std;

// �Լ� �ߺ� ����(method overloading)
void MyFunc(){
    cout << "void MyFunc()"<< endl;
}
void MyFunc(int x){
    cout << "void MyFunc(int x) : " << x << endl;
}
void MyFunc(const char* str){
// void MyFunc(string str){ // �޸𸮿� ���ѹ��� ������ string�� ���̾�
    cout << "void MyFunc(const char* str) : " << str << endl;
}
void MyFunc(int x, double y){
    cout << "void MyFunc(int x, double y) : " << x * y << endl;
}

int main(){
    MyFunc();
    MyFunc(100);
    MyFunc("���Ǵ�Ʈ �ｺ�ɾ�");
    MyFunc(100, 3.5);

    return 0;
}