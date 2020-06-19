#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task1.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas[10];

	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 20 - 10;
		cout << mas[i] << '\t';
		f << mas[i] << '\t';
	}
	f.close();
}

/*Сгенерировать массив со случайными числами в диапазоне:
[-10,10]
*/