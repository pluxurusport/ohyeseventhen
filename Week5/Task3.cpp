#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task3.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas[10];
	int sumchet = 0;
	int sumnechet = 0;

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
		if ((i+1) % 2 == 0)
		{
			sumchet = sumchet + mas[i];
		}
		else
		{
			sumnechet = sumnechet + mas[i];
		}
	}
	cout << sumchet << endl;
	cout << sumnechet << endl;
	f << sumchet << endl;
	f << sumnechet << endl;
	f.close();
}
//Вычислить сумму нечётных/чётных элементов массива

