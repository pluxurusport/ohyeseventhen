#include <iostream>
#include <iomanip>  
#include <fstream>
#include <cmath>
using namespace std;

fstream f;
int main()
{

    float dx;
    float x;
    float z;

    f.open("Task2F.txt", ios::out | ios::trunc);
    cout << "Solve function. \nEnter dx: ";
    cin >> dx;
    cout << "Enter function range [x;z]\n";
    cout << "Enter x\n";
    cin >> x;
    cout << "Enter z\n";
    cin >> z;
    f << "\tx\t\ty" << endl;
    f.precision(5);

    while (x < z) {
        float y = abs(-(1 + 3 * x) / 2) + 3*x;
        f << "\t"
            << x
            << "\t\t"
            << y
            << endl;

        cout << "\t"
            << x
            << "\t\t"
            << y
            << endl;

        x += dx;
    }
    f.close();

    return 0;
}
//Протабулировать функцию (шаг и диапазон задаёт пользователь):

