#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string s1[] = { "2+2=?","12+3=?","��� ������ ������������� � ������������?", "����� �� �����...", "������� ������� �� ����?" };
	int count = 0;
	
	cout << "������ ����� 1: " << s1[0] << endl;
	cout << "1. " << "5" << endl << "2. " << "3" << endl << "3. " << "4" << endl;
	int q1;
	cin >> q1;
	if (q1 == 3)
	{
		count++;
	}

	cout << "������ ����� 2: " << s1[1] << endl;
	cout << "1. " << "15" << endl << "2. " << "26" << endl << "3. " << "999999999" << endl;
	int q2;
	cin >> q2;
	if (q2 == 1)
	{
		count++;
	}

	cout << "������ ����� 3: " << s1[2] << endl;
	cout << "1. " << "����� �." << endl << "2. " << "����� �.�." << endl << "3. " << "��������� �.�." << endl;
	int q3;
	cin >> q3;
	if (q3 == 2)
	{
		count++;
	}

	cout << "������ ����� 4: " << s1[3] << endl;
	cout << "1. " << "3" << endl << "2. " << "1" << endl << "3. " << "3.14" << endl;
	int q4;
	cin >> q4;
	if (q4 == 3)
	{
		count++;
	}

	cout << "������ ����� 5: " << s1[4] << endl;
	cout << "1. " << "5" << endl << "2. " << "6" << endl << "3. " << "742,14" << endl;
	int q5;
	cin >> q5;
	if (q5 == 1)
	{
		count++;
	}

	cout << "���� ������: " << count << " �� 5��" << endl;


}

/*��������� ���������-����: �� ������ �� ������� ���������� ������� � �������� �������. � ����� ������ ��������� ������ ���������� ������������ ������ �� ����������� ������.  (������� � ������ ��������� ��������������. ������� 5 ��������). ����������� ������� ������������� �������, �� ����� ��������� ������� � ������ �� �����.*/

