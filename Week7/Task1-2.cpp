#include <iostream>
#include <ctime> 
#include <fstream>

using namespace std;

//������� 1 (������������� ������ �� ���������� ������� � ��������� �� -10 �� 30)
/*
int main()
{
    setlocale(LC_ALL, "rus");
    int mas[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 40 - 10;
    }
    cout << endl << "������ c ������� o� -25 �� 15: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << "  ";
    }
    cout << endl;
    return 0;
}*/

//������� 2 
fstream f;

void mainSort(int n);
void ChoicesSort(int*, int); 
void bubbleSort(int*, int);
int main()
{
    f.open("Task1-2.txt", ios::out | ios::trunc);
    setlocale(LC_ALL, "Russian");
    mainSort(100);
    mainSort(500);
    mainSort(1000);
    mainSort(2000);
    mainSort(6000);
}

int b = 0;

void ChoicesSort(int* Perestanovka, int length) 
{
    for (int j = 0; j < length; j++)
    {
        int temp = Perestanovka[0]; 
        for (int z = j + 1; z < length; z++)
        {
            if (Perestanovka[j] > Perestanovka[z])
            {
                b++;
                temp = Perestanovka[j];
                b++;
                Perestanovka[j] = Perestanovka[z];
                b++;
                Perestanovka[z] = temp;
            }
        }
    }
    cout << "���������� �������� ������������ ���������� �������: " << endl;
    cout << b << " " << endl;
    f << "���������� �������� ������������ ���������� �������: " << endl;
    f << b << " " << endl;
}

int b_2 = 0;
void bubbleSort(int* arr, int size)  
{
    int tmp;

    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - 1; ++j) 
        {
            if (arr[j + 1] < arr[j])
            {
                b_2++;
                tmp = arr[j + 1];
                b_2++;
                arr[j + 1] = arr[j];
                b_2++;
                arr[j] = tmp;
            }
        }
    }
    cout << "���������� �������� ������������ ���������� ���������: " << endl;
    cout << b_2 << " " << endl;
    f << "���������� �������� ������������ ���������� ���������: " << endl;
    f << b_2 << " " << endl;
}
void mainSort(int n) {

    int* mainSort_1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        mainSort_1[i] = rand() % 40 - 10;

    }
    int* mas = new int[n];
    srand(time(NULL));
    cout << "������ �������:" << n << " " << endl;
    f << "������ �������:" << n << " " << endl;

    ChoicesSort(mainSort_1, n);
    for (int i = 0; i < n; i++)
    {
        mainSort_1[i] = rand() % 40 - 10;

    }
    bubbleSort(mainSort_1, n);

}