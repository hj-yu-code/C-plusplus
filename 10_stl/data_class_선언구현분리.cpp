#include <iostream>
using namespace std;

template<typename T>
class Data {
private:
    T data;
public:
    Data(T n);
    void setData(T n);
    T getData();
};
template<typename T> // 아래 T가 템플릿임을 선언
Data<T>::Data(T n) { // T 타입인 템플릿으로 정의된, Data 클래스
    data = n;
}
template<typename T>
void Data<T>::setData(T n) {
    data = n;
}
template<typename T>
T Data<T>::getData() {
    return data;
}

int main() {
    Data<int> d1(100);
    cout << "d1.getData(): " << d1.getData() << endl;

    Data<double> d2(1.5);
    cout << "d2.getData(): " << d2.getData() << endl;

    Data<char> d3('A');
    cout << "d3.getData(): " << d3.getData() << endl;

    return 0;
}