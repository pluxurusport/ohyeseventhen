#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
	fstream f;
	srand(time(NULL));
	f.open("Task9.txt", ios::out | ios::trunc);

	struct Pixel
	{
		int R;
		int G;
		int B;
	};

	int x = 0;
	int y = 0;
	int  const l = 10;

	Pixel arr[l][l];

	cout << "Enter the position of Pixel" << endl << "X: " << endl;
	cin >> x;
	cout << "Y: " << endl;
	cin >> y;
	f << "X:" << x << endl;
	f << "Y:" << y << endl;
	x = x - 1;
	y = y - 1;
	

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j].R = rand() % 225;
		}
	}

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j].G = rand() % 225;
		}
	}

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j].B = rand() % 225;
		}
	}


	cout << "R:" << arr[x][y].R << endl;
	cout << "G:" << arr[x][y].G << endl;
	cout << "B:" << arr[x][y].B << endl;

	f << "R:" << arr[x][y].R << endl;
	f << "G:" << arr[x][y].G << endl;
	f << "B:" << arr[x][y].B << endl;
}
//Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
//Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель характеризуется яркостью цветовых каналов: красный, синий, зелёный. 
