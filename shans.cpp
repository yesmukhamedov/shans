#include <iomanip>
#include <math.h>
#include <Windows.h>

using namespace std;
#include <iostream>
// Laba-9
int main()
{

    setlocale(LC_CTYPE, "rus");
/*
    double n = 0, m1 = 0, m2 = 0;
    cout << "Dolya 1: ";
    cin >> n;
    cout << "Probablity 1: ";
    cin >> m1;
    cout << "Probablity 2: ";
    cin >> m2;

    cout << "\n\nResult probablity for 1st event:" << (n * m1) / (n * m1 + (1 - n) * m2) << "\n\n";
    cout << "Result probablity for 2nd event:" << 1 - (n * m1) / (n * m1 + (1 - n) * m2) << "\n\n";
*/


    int a = 0;
    cout << "Число случаев: ";
    cin >> a;
    while (a < 2) {
        cout << "Число случаев(это не может быть меньше двух): "; cin >> a;
    }
    double* b = new double[a]();
    double* c = new double[a]();
    for (int i = 0; i < a; i++) {
        cout << "Доля от 1 => "; cin >> b[i];
        cout << "Bероятность => "; cin >> c[i];
    }
    double sumB = 0, sumC = 0;
    for (int i = 0; i < a; i++) {
        sumB+= b[i];
        sumC+= c[i];
    }
    if (sumB == 1) {
        for (int i = 0; i < a; i++) {
            cout << "\n\nВероятность успеха в "<<i+1<<"-ом  случ:" << (b[i] * c[i]) / (b[i] * c[i] + (sumB - b[i]) * (sumC-c[i])) << "\n\n";
        }
    }
    else {
        cout << "Данные неправильные (все случии в сумме не должно превышать 1)";
    }
    char render;
    cin >> render;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"