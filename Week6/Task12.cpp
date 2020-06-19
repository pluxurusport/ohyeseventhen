#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task12.txt", ios::out | ios::trunc);
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
		if ( (i+1) % 2 == 0)
		{
			mas[i] = mas[i] * 2;
		}
		else
		{
			mas[i] = mas[i] + 3;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{

		cout << mas[i] << '\t';
		f << mas[i] << '\t';
	}
	
	f.close();
}
//Увеличить все нечётные элементы массива на 3, а чётные в 2 раза

