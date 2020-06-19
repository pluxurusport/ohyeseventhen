#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	fstream f;
	f.open("Task3a.txt", ios::out | ios::trunc);
	cout << "Enter x" << endl;
	cin >> x;
	if (x > 0)
	{
		y = 2 * x - 1;
	}
	else
	{
		if (x == 0)
		{
			y = 0;
		}
		else
		{
			y = 2 * abs(x) - 5;
		}

	}
	cout << "Y = " << y;
	f << "Y = " << y;
}	

/*Дана функция y=f(x). Найти значение функции по x:


y = 2x - 10, если x > 0
y = 0, если x = 0
y = 2 * |x| - 1, если x < 0

*/

