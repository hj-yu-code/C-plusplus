#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

void funcA(array<int, 10> tmp) {
    cout << sizeof(tmp) << ", " << tmp.size() << endl; // 40, 10
    // 보통이라면 포인터로 접근하기 때문에 '4, 4'가 나옴
    // array는 배열 자체 정보를 넘김
}


int main() {
    array<int, 10> arr1 = {10, 20, 30, 40, 50, 60, 70};
    cout << "arr1.size() : " << arr1.size() << endl;
    for(int i = 0; i <arr1.size(); i++)
        cout << arr1[i] << ", ";
    cout << endl;

    cout << "arr1.at(0) : " << arr1.at(0) << endl;
    cout << "arr1.at(1) : " << arr1.at(1) << endl;
    cout << "arr1.at(2) : " << arr1.at(2) << endl;

    cout << "arr1[0] : " << arr1[0] << endl;
    cout << "arr1[1] : " << arr1[1] << endl;
    cout << "arr1[2] : " << arr1[2] << endl;

    cout << "배열주소" << endl;
    cout << "arr1.data() : " << arr1.data() << endl; // 배열의 시작 주소
    cout << "*(arr1.data()) : " << *(arr1.data()) << endl;
    cout << "*(arr1.data()+1) : " << *(arr1.data()+1) << endl;
    cout << "*(arr1.data()+2) : " << *(arr1.data()+2) << endl;

    cout << "arr1.front() : " << arr1.front() << endl; // 배열의 처음 값
    cout << "arr1.back() : " << arr1.back() << endl; // 배열의 마지막 값

    arr1.fill(0); // 0으로 다 체우기

    array<int, 10> ::iterator it;
    for(it = arr1.begin(); it != arr1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    array<string, 3> arr2 = { "사과", "바나나", "포도" };
    array<string, 3> arr3 = { "apple", "banana", "grape" };

    arr2.swap(arr3);
    for(int i =0; i <arr2.size(); i++)
        cout << arr2[i] << ", ";
    cout << endl; // apple, banana, grape


    cout << sizeof(arr1) << ", " << sizeof(arr1[0]) << endl;
    funcA(arr1);


    return 0;
}