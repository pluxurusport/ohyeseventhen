#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("Task1.txt", ios::out | ios::trunc);
    int n;
    cin >> n;
    n = n++;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++)
        {
            cout << 0;
            f << 0;
        }
        cout << endl;
        f << endl;
    }

    std::getchar();
    std::getchar();
    return 0;
}

//������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������ ����� ������ ������. ���������� ����� � ������ ������������ (����� �� �����).
