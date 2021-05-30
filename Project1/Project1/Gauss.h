#include<iostream>
#include<iomanip>
#include<cmath>
#define N 3
using namespace std;
float Matrix[N][N + 1], x[N];
float temp, s;
int i, j, k;

void cinMat() {
	cout << "Vvedite matritsu na " << N << " strochiki i " << N + 1 << " stolbtsa" << endl;
	//1
	for (i = 0; i < N; i++)
	{
		cout << "Vvedite stroku  " << i + 1 << endl;
		for (j = 0; j < N + 1; j++) //vvod elementov matritsy
			cin >> Matrix[i][j];
	}
}

void solution() {
	// delayem matritsu treugol'noy
	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			temp = Matrix[j][i] / Matrix[i][i];
			for (k = 0; k < N + 1; k++) {
				Matrix[j][k] -= Matrix[i][k] * temp; //schitayem novyy element matritsy
			}
		}
	}
}

void coutMat() {
	//vyvodim treugol'nuyu matritsu

	cout << "\n ---------------------------------\n";
	cout << "\n Vyvodim treugol'nuyu matritsu:\n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N + 1; j++)
			cout << Matrix[i][j] << " ";
		cout << endl;
	}
}

void searchRes() {
	//ishchem resheniya

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
	// vyvodim resheniya

	cout << "Resheniye:" << endl;
	for (i = 0; i < N; i++)
		cout << "x[" << setw(3) << i + 1 << "]=" << setw(7) << setprecision(4) << x[i] << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cinMat();

	solution();

	coutMat();

	searchRes();

	coutRes();


	return 0;
}