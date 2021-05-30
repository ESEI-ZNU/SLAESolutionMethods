#pragma once
#pragma once
#include<iostream>
#include<iomanip>
#include<cmath>
#define N 3
using namespace std;
float Matrix[N][N + 1], x[N];
float temp, s;
int i, j, k;

void cinMat() {
    cout << "Введите матрицу на " << N << " строчики и " << N + 1 << " столбца" << endl;
    cout << fixed;

    for (i = 0; i < N; i++)
    {
        cout << "Ââåäèòå ñòðîêó  " << i + 1 << endl;
        for (j = 0; j < N + 1; j++)
            cin >> Matrix[i][j];
    }
}

void solution() {
    // äåëàåì ìàòðèöó òðåóãîëüíîé
    for (j = 0; j < N - 1; j++)
    {
        for (i = j + 1; i < N; i++)
        {
            temp = Matrix[i][j] / Matrix[j][j];

            for (k = 0; k < N + 1; k++)
                Matrix[i][k] -= Matrix[j][k] * temp;
        }
    }
}

void coutMat() {
    //âûâîäèì òðåóãîëüíóþ ìàòðèöó

    cout << "\n ---------------------------------\n";
    cout << "\n Âûâîäèì òðåóãîëüíóþ ìàòðèöó:\n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
            cout << Matrix[i][j] << " ";
        cout << endl;
    }
}

void searchRes() {
    //èùåì ðåøåíèÿ

    cout << "\n ---------------------------------\n";

    for (i = N - 1; i >= 0; i--)
    {
        s = 0;
        for (j = i + 1; j < N; j++)
            s += Matrix[i][j] * x[j];
        x[i] = (Matrix[i][N] - s) / Matrix[i][i];
    }
}

void coutRes() {
    // âûâîäèì ðåøåíèÿ

    cout << "Ðåøåíèå:" << endl;
    for (i = 0; i < N; i++)
        cout << "x[" << setw(3) << i + 1 << "]=" << setw(7) << setprecision(4) << x[i] << endl;
}

int main2()
{
    setlocale(LC_ALL, "Russian");


    cinMat();

    solution();

    coutMat();

    searchRes();

    coutRes();


    return 0;
}
