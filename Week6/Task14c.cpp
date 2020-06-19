#include <iostream>
#include <ctime> 
#include <fstream>
using namespace  std;
fstream f;
void main()
{
	f.open("Task8.txt", ios::out | ios::trunc);
	srand(time(NULL));

	int mas1[10];
	int mas2[10];
	

	for (int i = 0; i < 10; i++)
	{
		mas1[i] = rand() % 50 - 20;
		cout << mas1[i] << '\t';
		f << mas1[i] << '\t';
	}

	cout << endl;
	f << endl;

	for (int i = 0; i < 10; i++)
	{
		mas2[i] = rand() % 50 - 20;
		cout << mas2[i] << '\t';
		f << mas2[i] << '\t';
	}

	cout << endl;
	f << endl;

	int mas3[10];

	for (int i = 0; i < 10; i++)
	{
		mas3[i] = mas2[i] + mas1[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		
		cout << mas3[i] << '\t';
		f << mas3[i] << '\t';
		
	}

	f.close();
}
//Создать новый массив из двух других массивов путём: сложения



