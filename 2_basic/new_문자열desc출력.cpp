#include <iostream>
#include <cstring>
using namespace std;
/*
    org                 copy        src(4)  dest    len(4)
    (Multi Campus\0)    (5000) ...  (3000)  (5000)  (13)
    3000                3100        4000            4100
    ----------------------------------------------
    __(14)
    (\0supmaC itluM\0)
    5000
*/
char *ReverseString(const char * src, int len){
    char *dest = new char[len + 1];

    for (int i =0; i < len+1; i++){
        *(dest + i) = *(src + len -1 - i);
    }
    
    dest[len] = NULL;
    return dest;
}

int main(){
    const char original[] = "Multi Campus.";
    char* copy = ReverseString(original, strlen(original));
    cout << original << "\n";
    cout << copy << "\n";

    delete[] copy;
    copy = NULL;

    return 0;
}