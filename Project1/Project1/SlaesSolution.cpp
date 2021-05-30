#include"HeaderPam1.h"
#include"HeaderPam.h"
#include<iostream> //Підключення стандартної бібліотеки
#include <chrono>
using namespace std; //Підключення стандартного простору імен



/// <summary>
/// This Function calculate Time  .
/// </summary>

int Time(double eleased_ms)
{
	auto begin = std::chrono::steady_clock::now();
	getchar();
	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	std::cout << "The time: " << elapsed_ms.count() << " ms\n";
	return eleased_ms;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	char Solu;
	double eleased_ms;
	eleased_ms = 0;
	cout << "Solution Method 1-Cramers.2-Gaus.3-Matrixs(choose number)" << endl;
	cin >> Solu;
/// <summary>
/// This switch case is responsible for choosing Solution method.
/// </summary>
	switch (Solu)
	{
	case '1':
		main1();
		Time(eleased_ms);
		break;
	case'2':
		main2();
		Time(eleased_ms);
		break;
	}
	return 0;
}

