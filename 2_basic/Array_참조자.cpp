#include <iostream>
using namespace std;

int Array1D(int *tmp, int size){
// int ArrayID(int tmp[], int size){
    int sum = 0;
    for(int i= 0; i< size; i++){
        sum += *(tmp+i);
        // sum += tmp[i];
    }
    return sum;
}

// int Array2D(int (*tmp)[4], int r, int c){ // 2���� �迭, 4���� �迭 ������
int Array2D(int tmp[][4], int r, int c){ // ���� ��������
    int sum = 0;
    for(int i= 0; i< r; i++){
        for (int j = 0; j < c; j++)
            sum += tmp[i][j];
    }
    return sum;
}

int main(){
    int num1[5] = { 10, 20, 30, 40, 50 };
    int tot, i;
    tot = Array1D(num1, 5);
    cout << "ArrayID �迭�� �� : " << tot << endl;

    int num2[2][4] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int row = sizeof(num2)/sizeof(num2[0]);
    int col = sizeof(num2[0])/sizeof(num2[0][0]);
    tot = Array2D(num2, row, col);

    cout << "ArrayID �迭�� �� : " << tot << endl;

    for (i = 0; i < 5; i ++){
        num1[i] += 1;
        cout << num1[i] << ", ";
    }
    cout << endl;

    for(auto &n : num1){ // �����ڷ� ����
        n += 1;
        cout << n << ", ";
    }
    cout << endl;

    // �ݿ���
    for (i = 0; i < 5; i ++){
        cout << num1[i] << ", ";
    }
    cout << endl;

    return 0;
}