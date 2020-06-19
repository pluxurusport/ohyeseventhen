#include <iostream>

using namespace std;
float c;
float k;
float f;
int Select;
float initialValue;

int main() {


	cout << "Select the initial number system:" << endl
		<< "1.bytes \n"
		"2.bites\n"
		"3.killobytes " << endl;
	cin >> Select;
	cout << "Enter a value to convert" << endl;
	cin >> initialValue;

	switch (Select) {
	case 1:
		cout << "1.bytes = " << initialValue << endl;
		cout << "2.bites = " << initialValue / 8 << endl;
		cout << "3.killobytes = " << initialValue / 1024  << endl;
		break;
	case 2:
		cout << "1.bytes = " << initialValue * 8 << endl;
		cout << "2.bites = " << initialValue << endl;
		cout << "3.K = " << initialValue / 1024 << endl;
		break;
	case 3:
		cout << "1.bytes = " << initialValue * 1024 * 8 << endl;
		cout << "2.bites = " << initialValue * 1024 << endl;
		cout << "3.killobytes = " << initialValue << endl;
		break;
	}

	getchar();  
	getchar();
	return 0;

}

//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.  k - Информация (байты, килобайты, биты
