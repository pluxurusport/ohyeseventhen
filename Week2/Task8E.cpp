#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x = 3.6;
	float e = exp(1.0);
	float equation = pow(e, (x - 2)) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
	cout << equation;

	getchar();  
	getchar();
	return 0;
}

//Вычислите значение выражения. при x=3.6 Ответ: -156.1276 

