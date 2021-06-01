#pragma once
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double Matrix[100][100], x[100];\
/// <summary>
///<para>author:author Ñhistikov Vadim</para>
/// </summary>

/// <summary>
///<para> vyvodimx matritsu.</para>
/// </summary>
void cinMat(int N) {
	cout << "Vvedite matritsu na " << N << " strochiki i " << N + 1 << " stolbtsa" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Vvedite stroku  " << i + 1 << endl;
		for (int j = 0; j < N + 1; j++) //vvod elementov matritsy
			cin >> Matrix[i][j];
	}
}

/// <summary>
///<para> delayem matritsu treugol'noy.</para>
/// </summary>
void solution(int N) {
	double temp = 0;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			temp = Matrix[j][i] / Matrix[i][i];
			for (int k = 0; k < N + 1; k++) {
				Matrix[j][k] -= Matrix[i][k] * temp; //schitayem novyy element matritsy
			}
		}
	}
}

/// <summary>
///<para> vyvodim treugol'nuyu matritsu.</para>
/// </summary>
void coutMat(int N) {
	cout << "\n ---------------------------------\n";
	cout << "\n Vyvodim treugol'nuyu matritsu:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N + 1; j++)
			cout << Matrix[i][j] << " ";
		cout << endl;
	}
}

/// <summary>
///<para> ishchem resheniya.</para>
/// </summary>
void searchRes(int N) {
	cout << "\n ---------------------------------\n";
	double s = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		s = 0;
		for (int j = i + 1; j < N; j++)
			s += Matrix[i][j] * x[j];
		x[i] = (Matrix[i][N] - s) / Matrix[i][i];
	}
}

/// <summary>
///<para> vyvodim resheniya.</para>
/// </summary>
void coutRes(int N) {
	cout << "Resheniye:" << endl;
	for (int i = 0; i < N; i++)
		cout << "x[" << i + 1 << "]=" << setw(7) << setprecision(4) << x[i] << endl;
}


int main2()
{
	setlocale(LC_ALL, "Russian");

	cout << "Vvedite razmernost' matritsy : ";
	int N = 0;
	cin >> N;

	cinMat(N);

	solution(N);

	coutMat(N);

	searchRes(N);

	coutRes(N);

	return 0;
}