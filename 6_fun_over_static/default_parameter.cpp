#include <iostream>
using namespace std;
int BoxVolume(int x = 1, int y = 1, int z = 1);


int main() {
    cout << "BoxVolume(3, 3, 3) : " << BoxVolume(3, 3, 3) << endl;
    cout << "BoxVolume(5, 5) : " << BoxVolume(5, 5) << endl;
    cout << "BoxVolume(7) : " << BoxVolume(7) << endl;
    cout << "BoxVolume(0) : " << BoxVolume() << endl;
    return 0;
}

int BoxVolume(int x, int y, int z) {
    return x * y * z;
}