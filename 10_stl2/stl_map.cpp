#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
/*
map의 특징
- 자료를 찾기 위해 순회할 필요가 없음
- key 값의 중복이 없음
- 못찾으면 end에 위치해 있음
- 빠른 속도로 data를 찾을 수 있음
    - 하나를 찾으면 더이상 찾을 필요가 없음
*/


/* 출력 결과
aaa, 사랑
apple, 사과
cherry, 체리
cloud, 구름
love, 사랑
dic.size() : 5
*/
// key값의 오름차순으로 정렬되어 저장
// 같은 key 값이 들어올 경우는, 처음 데이터만 유지됨


int main() {
    map<string, string> dic;

    dic.insert(make_pair("love", "사랑"));
    dic.insert(make_pair("apple", "사과"));
    dic["cherry"] = "체리";
    dic.insert({"cloud", "구름"});
    dic.insert(make_pair("love", "aaa"));
    dic.insert(make_pair("aaa", "사랑"));

    map<string, string> ::iterator it;

    for(it = dic.begin(); it!=dic.end();it++) {
        cout << it->first << ", " << it->second << endl;
    }

    cout << "dic.size() : " << dic.size() << endl;

    string str;
    while (1)
    {
        cout << "검색할 key (종료:end)) ? ";
        getline(cin, str);

        if(str == "end")
            break;
        if(dic.find(str) == dic.end())
            cout << str << ", not found !!!" << endl;
        else
            cout << dic[str] << endl;
    }
    

}