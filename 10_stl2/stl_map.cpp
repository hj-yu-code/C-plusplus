#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
/*
map�� Ư¡
- �ڷḦ ã�� ���� ��ȸ�� �ʿ䰡 ����
- key ���� �ߺ��� ����
- ��ã���� end�� ��ġ�� ����
- ���� �ӵ��� data�� ã�� �� ����
    - �ϳ��� ã���� ���̻� ã�� �ʿ䰡 ����
*/


/* ��� ���
aaa, ���
apple, ���
cherry, ü��
cloud, ����
love, ���
dic.size() : 5
*/
// key���� ������������ ���ĵǾ� ����
// ���� key ���� ���� ����, ó�� �����͸� ������


int main() {
    map<string, string> dic;

    dic.insert(make_pair("love", "���"));
    dic.insert(make_pair("apple", "���"));
    dic["cherry"] = "ü��";
    dic.insert({"cloud", "����"});
    dic.insert(make_pair("love", "aaa"));
    dic.insert(make_pair("aaa", "���"));

    map<string, string> ::iterator it;

    for(it = dic.begin(); it!=dic.end();it++) {
        cout << it->first << ", " << it->second << endl;
    }

    cout << "dic.size() : " << dic.size() << endl;

    string str;
    while (1)
    {
        cout << "�˻��� key (����:end)) ? ";
        getline(cin, str);

        if(str == "end")
            break;
        if(dic.find(str) == dic.end())
            cout << str << ", not found !!!" << endl;
        else
            cout << dic[str] << endl;
    }
    

}