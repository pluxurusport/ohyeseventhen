#include <iostream> 
#include <fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("Task10.txt", ios::out | ios::trunc);

    char a[50000], s[50000];
    char b;

    int n = 0, d = 1, i, j = 0;

    cout << ("Enter the string and finish it with point:\n\n");
    f << ("Enter the string and finish it with point:\n\n");
    do
    {
        b = getchar();
        a[n] = b;
        f << a[n];
        ++n;
    } while (b != '.');

    f << endl;
    --n;
    

    cout << ("\nFinished String:\n\n");
    f << ("\nFinished String:\n\n");

    for (i = 0; i < n; ++i)
    {

        if (d)
        {
            a[i] = 0;
            d = 0;
            continue;
        }

        if (a[i] == ' ')
        {
            d = 1;
        }

        if (a[i] != '0')
        {
            s[j] = a[i];
            ++j;
        }

    }

    for (i = 0; i < j; ++i)
    {
        cout << (s[i]);
        f << (s[i]);
    }
    return 0;
}
//������� �� ������ ������ ����� ����. (������. ������� ������: Crystal Method. ���������: rystal ethod).
