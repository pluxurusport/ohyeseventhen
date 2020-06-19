#include <iostream>
#include <fstream>
using namespace std;
fstream f;
int main()
{
	int h = 0;
	int m = 0;
	int step = 0;
	f.open("Task4.txt", ios::out | ios::trunc);
	cout << "Enter range [h;m]" << endl;
	cout << "Enter h" << endl;
	cin >> h;
	cout << "Enter m" << endl;
	cin >> m;
	cout << "Enter step" << endl;
	cin >> step;

	

	while (h <= m)
	{
		cout << h << ' ';
		f << h << ' ';
		h = h + step;
	}
	f.close();
}
//Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если Н 10, М 35, Ш 5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М, Ш указываются пользователем (считываются с клавиатуры).
