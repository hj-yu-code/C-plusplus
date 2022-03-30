#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 10;
    float fnum = 1.5;

    auto ch = 'A';
    auto pi = 3.14159;
    auto ten = 10;
    auto *p = &ten;

    cout << "typeid(num).name() : " << typeid(num).name() << 
        ", typeid(fnum).name() : " << typeid(fnum).name() << endl;

    cout << "typeid(ch).name() : " << typeid(ch).name() << endl;
    cout << "typeid(pi).name() : " << typeid(pi).name() << endl;

    cout << "&p : " << *p << endl;
    cout << "typeid(p).name() : " << typeid(p).name() << endl;


    vector<int> v = { 1, 2, 3, 4, 5, 6};
    vector<int> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    vector<string> v2 = {"kim", "lee", "han", "park"};
    for(auto it2=v2.begin(); it2!=v2.end(); it2++) { // iterator 도 자동으로 선언가능
        cout << *it2 << ", ";
    }
    cout << endl;

    return 0;
}