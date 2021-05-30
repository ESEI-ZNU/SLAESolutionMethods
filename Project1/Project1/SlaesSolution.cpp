#include"HeaderPam1.h"
#include"HeaderPam.h"
#include<iostream> //Підключення стандартної бібліотеки
using namespace std; //Підключення стандартного простору імен


int main()
{
	setlocale(LC_ALL, "Russian");
	char chooms;
	cout << "chooms 1.2.3" << endl;
	cin >> chooms;
	switch (chooms)
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