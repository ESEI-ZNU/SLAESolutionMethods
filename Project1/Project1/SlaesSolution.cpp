#include"HeaderPam1.h"
#include"HeaderPam.h"
#include<iostream> //ϳ��������� ���������� ��������
using namespace std; //ϳ��������� ������������ �������� ����


int main()
{
	setlocale(LC_ALL, "Russian");
	char Solu;
	cout << "Solution Method 1-Cramers.2-Gaus.3-Matrixs(choose number)" << endl;
	cin >> Solu;
	switch (Solu)
	{
	case '1':
		main1();
		break;
	case'2':
		main2();
		break;
	}
	return 0;
}