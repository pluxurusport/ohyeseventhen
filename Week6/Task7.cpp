#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task7.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas[10];
	int sap = 0;
	int saotr = 0;

	int sapF = 0;
	int saotrF = 0;

	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 50 - 20;
		cout << mas[i] << '\t';
		f << mas[i] << '\t';
	}
	cout << endl;
	f << endl;
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] > 0)
		{
			sap = sap + mas[i];
			sapF++;
		}
		else
		{
			saotr = saotr + mas[i];
			saotrF++;
		}
	}
	cout << "Srednne orefm > 0 = " << sap / sapF << endl;
	cout << "Srednne orefm < 0 = " << saotr / saotrF << endl;

	f << "Srednne orefm > 0 = " << sap / sapF << endl;
	f << "Srednne orefm < 0 = " << saotr / saotrF << endl;

	f.close();
}
//Найти среднее арифметическое всех/положительных/отрицательных

