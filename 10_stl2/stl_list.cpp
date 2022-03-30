#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {

    list<int> intList;
    list<int> ::iterator it;

    for(int i = 0; i<10; i++) {
        intList.push_back( i+10 );
    }
    for(it = intList.begin(); it!= intList.end(); it++)
        cout << *it << ", ";
    cout << endl; // 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 


    cout << "intList.size() : " << intList.size() <<endl; // ������ ����
    // for(int i = 0; i<intList.size(); i++ )
    //     cout << intList[i] << endl; // �迭�� �ƴ϶� �迭 �������� �Ұ�

    intList.remove(15); // �� ����
    for(it = intList.begin(); it!= intList.end(); it++)
        cout << *it << ", ";
    cout << endl; // 10, 11, 12, 13, 14, 16, 17, 18, 19, 

    intList.push_back(100); // �� �Է�
    intList.push_back(200);
    intList.push_front(300);
    for(it = intList.begin(); it!= intList.end(); it++)
        cout << *it << ", ";
    cout << endl; // 300, 10, 11, 12, 13, 14, 16, 17, 18, 19, 100, 200,

    it = intList.begin();
    it++;
    it++;
    it = intList.erase(it); // ���� ��ġ �� ����
    it = intList.insert(it, 500); // ���� ��ġ�� ����

    for(it = intList.begin(); it!= intList.end(); it++)
        cout << *it << ", ";
    cout << endl << endl; // 300, 10, 500, 12, 13, 14, 16, 17, 18, 19, 100, 200,


    list<string> strList;
    strList.push_back("�����");
    strList.push_back("�λ��");
    strList.push_back("������");
    strList.push_back("����");

    list<string> ::iterator it2;
    for(it2 = strList.begin(); it2!= strList.end(); it2++)
        cout << *it2 << ", ";
    cout << endl;
    return 0;
}