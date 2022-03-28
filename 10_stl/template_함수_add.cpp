#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Add(T n1, T n2) {
    return n1 + n2;
}

template <typename T1, typename T2>
T1 Add(T1 n1, T2 n2) {
    return n1 + n2;
}

char* Add(char *sour, char *dest) { // Add(s1, s2)
    cout << "char* Add(char *sour, char *dest)" << endl;
    char* sumchar = new char[strlen(sour)+strlen(dest)+1];
    strcpy(sumchar, sour);
    strcat(sumchar, dest);

    return sumchar;
}
char* Add(const char *sour, const char *dest) { // Add("Multi", "Campus")
    cout << "char* Add(const char *sour, const char *dest)" << endl;
    char* sumchar = new char[strlen(sour)+strlen(dest)+1];
    strcpy(sumchar, sour);
    strcat(sumchar, dest);

    return sumchar;
}

template <typename T>
T Add(T *arr, int num) {
    cout << "T Add(T *arr, int num)" << endl;
    T total = 0;
    for(int i=0; i<num; i++) {
        total += *(arr+i);
    }
    return total;
}

int main() {
    cout << Add(10, 20) << endl;
    cout << Add(1.5, 20) << endl;

    char s1[] = "king", s2[] = "dom";
    
    char *ref = Add(s1, s2);
    cout << ref << endl;

    
    const char *ref2 = Add("Multi", "Campus");
    cout << ref2 << endl;

    delete ref;
    delete ref2;

    int aArr[5] = {10, 20, 30, 40, 50};
    cout << Add(aArr, 5) << endl;

    double daArr[5] = {10.1, 20.1, 30.1, 40.1, 50.1};
    cout << Add(daArr, 5) << endl;

    return 0;
}