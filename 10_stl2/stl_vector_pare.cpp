#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    // return a.second < b.second; // ASC
    return a.second < b.second; // DESC
}

int main() {
    vector<pair<int, int>> v;

    v.push_back(make_pair(10, 30));
    v.push_back(make_pair(10, 20));
    v.push_back(make_pair(50, 40));
    v.push_back(make_pair(100, 70));
    v.push_back(make_pair(30, 20));

    sort(v.begin(), v.end()); // 첫번째-두번째 순으로 정렬
    for (int i = 0; i < v.size(); i ++) {
        cout << v[i].first << ", " << v[i].second << endl;
    }
    cout << endl << endl;;


    vector<pair<int, int>> v2;
    v2.push_back(make_pair(101, 35000));
    v2.push_back(make_pair(102, 27000));
    v2.push_back(make_pair(103, 37000));
    v2.push_back(make_pair(104, 59000));
    v2.push_back(make_pair(105, 23000));

    sort(v2.begin(), v2.end(), compare);
    for (int i = 0; i < v2.size(); i ++) {
        cout << v2[i].first << ", " << v2[i].second << endl;
    }
    cout << endl;

    return 0;

}