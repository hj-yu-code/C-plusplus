#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    // return a < b ; // ASC
    return a > b ; // DESC
}

bool compare2(string a, string b) {
    // return a.size() < b.size(); // ASC
    return a.size() > b.size(); // DESC
}

int main() {
    vector<int> v;
    vector<int> ::iterator it;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(10);
	v.push_back(4); 
	v.push_back(50);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    // it = v.begin();
    for(it=v.begin(); it != v.end(); it++) { // iterator로 반복문 진행
        cout << *it << ", ";
    }
    cout << endl;

    sort(v.begin(), v.end(), compare); // 세번째 인자에 사용자 함수로 대입
    for(it=v.begin(); it != v.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl << endl;

    vector<string> vec2;
    string strArr[] = {"watermelon", "peach", "apple", "banana", "blueberry", "grape"};
    vec2.assign(strArr, strArr+6);

    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << ", ";
    }
    cout << endl;

    sort(vec2.begin(), vec2.end()); // ASCII code 순으로 정렬
    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << ", ";
    }
    cout << endl;

    sort(vec2.begin(), vec2.end(), compare2); // 문자열 길이 순으로 정렬
    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << ", ";
    }
    cout << endl;



    return 0;
}