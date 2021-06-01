#pragma once
#include"Gauss.h"
#include"Cramers.h"
#include<iostream> /// include standartr Library
#include <chrono>/// include time Library
using namespace std; /// include Using namespace std


/// <summary>
///<para>author:author Trafimov Makar</para>
/// </summary>

/// <summary>
///<para> This Function calculate Time.</para>
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
	char s;
	s = 0;

/// <summary>
/// This switch case is responsible for choosing Solution method.
/// </summary>
	do {
		cout << "Solution Method 1-Cramers.2-Gaus.3-Matrixs(choose number)" << endl;
		cin >> Solu;

		switch (Solu)
		{
		case '1':
			/// <summary>
			///<para> This Function calls Cramers method.</para>
			///<para> This Function output Final Matrix and determninator</para>
			/// </summary>
			main1();
			Time(eleased_ms);
			break;
		case'2':
			/// <summary>
			///<para> This Function calls Gauss method.</para>
			///<para> This Function calls the other functions of calculating</para>
			/// </summary>
			main2();
			Time(eleased_ms);
			break;
			
		}
		cout << "Enter 66 for exit" << endl;
		cin >> s;
	} while (s = 66);
	return 0;
}

