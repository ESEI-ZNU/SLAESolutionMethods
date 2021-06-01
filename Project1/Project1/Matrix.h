#pragma once
#include<iostream>

using namespace std;

int main3() {
    float determinant = 0;
    int N = 0;
    double mat[100][101], x[100], b[100];
    cout << "Vvedite razmernost' matritsy : ";
    cin >> N;
    cout << "Vvedite matritsu na " << N << " strochiki i " << N + 1 << " stolbtsa" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Vvedite stroku  " << i + 1 << endl;
        for (int j = 0; j < N + 1; j++) //vvod elementov matritsy
            cin >> mat[i][j];
    }
    for (int i = 0; i < N; i++) {
        b[i] = mat[i][N];
    }
    cout << "Vyvodim matritsu : " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    //poisk determenanta

    for (int i = 0; i < N; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]));
    cout << "\n\ndeterminant: " << determinant;
    cout << "\n\nInverse of matrix is: \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            mat[i][j] = ((mat[(j + 1) % 3][(i + 1) % 3] * mat[(j + 2) % 3][(i + 2) % 3]) - (mat[(j + 1) % 3][(i + 2) % 3] * mat[(j + 2) % 3][(i + 1) % 3])) / determinant;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    float s = 0;
    for (int i = 0; i < N; i++) {
        s = 0;
        for (int j = 0; j < N; j++) {
            s += mat[i][j] * b[i];
            cout << mat[i][j] << "=" << i << " " << j;
        }
        cout << endl;
        x[i] = s;
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << x[i] << " ";
    }
    return 0;
}