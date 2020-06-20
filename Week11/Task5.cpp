#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    fstream f;
    f.open("Task5.txt", ios::out | ios::trunc);
    const int n = 5;
    const int m = 5;
    int matrix[n][m];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "Initial Matrix: " << endl;
    f << "Initial Matrix: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            f << matrix[i][j] << " ";
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        f << endl;
    }
    cout << '\n';
    cout << "Result: " << endl;
    f << "Result: " << endl;

    for (int i = 0; i < n; i++)
    {
        int min = matrix[i][0];
        int z = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                z = j;
            }
        }
        int d = matrix[i][i];
        matrix[i][i] = min;
        matrix[i][z] = d;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
            f << matrix[i][j] << " ";
        }
        cout << endl;
        f << endl;
    }
    cout << endl;
    f << endl;
}

//¬ квадратной матрице дл€ каждой строки найти минимальный элемент и переставить его с элементом, сто€щим в этой строке на главной диагонали.
