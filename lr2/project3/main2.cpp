// Задание №3
// Конвертируйте двоичные числа в десятичную систему счисления.
// 1101 -> 13
// 101110 -> 46

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter a binary number: ";
    int bin_n;
    cin >> bin_n;

    int dec_n = 0;
    int ost = 0;
    for(int i = 0; bin_n > 0; i++)
    {
        ost = bin_n % 10;
        dec_n += ost * pow(2, i);
        bin_n /= 10;
    }

    cout << "Decimal number is " << dec_n << endl;

    system("pause");
    return 0;
}