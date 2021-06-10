#include <iostream>
using namespace std;

int main()
{
    // Задание №1
    // Вычислить значения выражений.

    cout << (5 > 3 && 4 < 8) << endl
        << (4 > 6 && true) << endl
        << (3 >= 3 || false) << endl
        << ((true || false) ? 4 : 5) << endl;
    
    // Задание №2
    // Вычислить значения выражений.

    cout << 7 / 4 << endl
        << 14 % 5 << endl;

    system("pause");
    return 0;
}