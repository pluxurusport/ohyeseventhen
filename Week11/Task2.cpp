#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    fstream f;
    f.open("Task2.txt", ios::out | ios::trunc);
    srand(time(NULL));

    int const n = 5;
    int a[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            a[i][j] = rand() % 10;
        }
    }
    cout  << "Initial Matrix: " << endl;
    f << "Initial Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
            f << a[i][j] << " ";
        }
        cout << endl;
        f << endl;
    }
    cout << "Result: " << endl;
    f <<  "Result: " << endl;

    for (int i = 0; i < n; i++)
    {
   
        for (int j = 0; j < n; j++)
        {
            if (j != 1)
            {
                a[i][j] = a[i][1] * a[i][j];
                cout << a[i][j] << " ";
                f << a[i][j] << " ";
            }
            else
                cout << a[i][1] * a[i][1] << " ";
                f << a[i][1] * a[i][1] << " ";
        }
        cout << endl;
        f << endl;
    }
    return 0;
}
//Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки. 
