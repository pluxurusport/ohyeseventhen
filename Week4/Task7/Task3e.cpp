#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	fstream f;
	f.open("Task3e.txt", ios::out | ios::trunc);
	cout << "Enter x" << endl;
	cin >> x;
	if (x > 2)
	{
		y = 2 * x -15;
	}
	else
	{
		if (x == 1)
		{
			y = 3;
		}
		else
		{
			y = 3 * abs(x-1) - 8;
		}

	}
	cout << "Y = " << y;
	f << "Y = " << y;
}

/*���� ������� y=f(x). ����� �������� ������� �� x:
y = 2x - 15, ���� x > 2
y = 5, ���� x = 2
y = 3 * |x-1| - 8, ���� x < 2

*/

