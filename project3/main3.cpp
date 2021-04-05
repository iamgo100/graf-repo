// Задание №4
// Конвертируйте десятичные числа в двоичную систему счисления.
// 15 -> 1111
// 53 -> 110101

#include <iostream>
using namespace std;

int len_of_array(int dec_n)
{
    int sum = 0;
    for (int i = 0; dec_n > 0; i++)
    {
        dec_n /= 2;
        sum++;
    }
    return sum;
}

int main()
{
    cout << "Enter a decimal number: ";
    int dec_n;
    cin >> dec_n;
    const int len_of_bin_n = len_of_array(dec_n);
    int bin_n[len_of_bin_n] = {0};
    for (int i = 0; i < len_of_bin_n; i++)
    {
        bin_n[i] = dec_n % 2;
        dec_n /= 2;
    }
    for (int i = len_of_bin_n - 1; i >= 0; i--)
    {
        cout << bin_n[i];
    }
    cout << endl;

    system("pause");
    return 0;
}