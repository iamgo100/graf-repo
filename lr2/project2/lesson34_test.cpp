/*
    Задание
    Что такое простое число? Правильно!
    Это целое положительное число больше единицы,
    которое делится без остатка либо на себя, либо на единицу.
    Напишите программу, которая просит пользователя ввести
    простое целое число, меньшее 10. Если пользователь ввел одно
    из следующих чисел: 2, 3, 5 или 7 — программа должна вывести
    The digit is prime, в противном случае — The digit is not prime.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number less than 10: ";
    int a;
    cin >> a;
    if (a == 2 || a == 3 || a == 5 || a == 7)
        cout << "The digit is prime" << endl;
    else
        cout << "The digit is not prime" << endl;
    
    system("pause");
    return 0;
}