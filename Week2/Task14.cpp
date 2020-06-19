#include <iostream>

using namespace std;
float cooki;
float candy;
float bay1;
float bay2;

int bay11(float candy, float cooki)
{
	bay1 = candy * 0.3 + cooki * 0.4;
	return 0;
}

int bay22(float candy, float cooki)
{
	bay2 = 3 * (cooki * 2 + candy * 1.8);
	return 0;
}

int main() {

	cout << "Enter the cost of 1 KG of sweets" << endl;
	cin >> candy;
	cout << "Enter the cost of 1 KG of cookies" << endl;
	cin >> cooki;

	bay11(candy, cooki);
	bay22(candy, cooki);
	
	

	cout << "Purchase value 1 =" << bay1 << endl;
	cout << "Purchase value 2 =" << bay2 << endl;

	getchar();  
	getchar();
	return 0;

}
//14 Организовать предыдущее задание с помощью функций.
//13 Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет.
