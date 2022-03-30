#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<tuple<int, string, int>> v;

    v.push_back(make_tuple(1, "kim", 98));
    v.push_back(make_tuple(2, "lee", 67));
    v.push_back(make_tuple(3, "han", 51));
    v.push_back(make_tuple(4, "park", 79));
    v.push_back(make_tuple(5, "uk", 88));

    for(int i = 0; i < v.size(); i++) {
        cout << get<0>(v[i]) << ", " << get<1>(v[i]) << ", " << get<2>(v[i]) << endl;
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<tuple<int, string, int>>());
    for(int i = 0; i < v.size(); i++) {
        cout << get<0>(v[i]) << ", " << get<1>(v[i]) << ", " << get<2>(v[i]) << endl;
    }
    cout << endl;

    string tmp;
    int found;

    while (1) {
        found = 1;
        cout << "검색할 성명(검색종료:end) ? ";
        getline(cin, tmp);
        if(tmp == "end")
            break;
        for(int i = 0; i < v.size(); i++) {
            if(get<1>(v[i]) == tmp) {
                found = 0;
                cout << get<0>(v[i]) << ", " << get<1>(v[i]) << ", " << get<2>(v[i]) << endl;
            }
        }
        if(found)
            cout << tmp << " , not found !!!" << endl;
    }
    


    return 0;
}