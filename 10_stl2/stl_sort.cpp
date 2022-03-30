#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<char> vec; // 동적 배열
    vector<char> ::iterator it;

    vec.push_back(65);
    vec.push_back('B');
    vec.push_back('a');
    vec.push_back('D');
    vec.push_back('z');

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ", ";
    }
    cout << endl;

    sort(vec.begin(), vec.end()); // default : ASC
    // sort(vec.begin(), vec.end(), less<char>()); // ASC
    for(int i=0; i<vec.size();i++) {
        cout << vec[i] << ", ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), greater<char>()); // DESC
    for(int i=0; i<vec.size();i++) {
        cout << vec[i] << ", ";
    }
    cout << endl << endl;

    char arr[5] = {'D', 'a', 'f', 'z', 'A'}; // 고정 배열
    sort(arr, arr+5);
    for(int i=0; i<5;i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;

    sort(arr, arr+5, greater<char>());
    for(int i=0; i<5;i++) {
        cout << arr[i] << ", ";
    }
    cout << endl << endl;


    return 0;
}