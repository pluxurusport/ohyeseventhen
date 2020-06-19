#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task2.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas[10];

	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 20 - 10;
		cout << mas[i] << '\t';
		f << mas[i] << '\t';
	}
	cout << endl;
	f << endl;
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] > 5)
		{
			cout << mas[i] << ' ';
			f << mas[i] << ' ';
		}
	}
	f.close();
}
//Вычислить сумму элементов массива,
//больших 5,
