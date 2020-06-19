#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task8.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas[10];
	int pol = 0;
	int otr = 0;


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
			pol++;
		}
		else
		{
			otr++;
		}
	}
	cout << " > 0 = " << pol << endl;
	cout << "< 0 = " << otr << endl;

	f << " > 0 = " << pol << endl;
	f << "< 0 = " << otr << endl;

	f.close();
}
//ѕосчитать количество положительных/отрицательных элементов массива

