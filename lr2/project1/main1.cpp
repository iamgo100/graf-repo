/*
    Задание №1
    
    Напишите однофайловую программу (с именем main.cpp), которая запрашивает у пользователя
    два целых числа, складывает их, а затем выводит результат.
    В программе должно быть 3 функции:
    - функция readNumber(), которая запрашивает у пользователя целое число, а затем возвращает его в main();
    - функция writeAnswer(), которая выводит результат на экран. Функция должна быть без возвращаемого
    значения и иметь только один параметр;
    - функция main(), которая соединяет всё и вся.
*/

#include <iostream>

using namespace std;

int readNumber(string number)
{
    int a;
    cout << "Enter " << number << " number: ";
    cin >> a;
    return a;
}

void writeAnswer(int answ)
{
    cout << "Result: " << answ << endl;
}

int main()
{
    int a, b;
    a = readNumber("first");
    b = readNumber("second");
    writeAnswer(a+b);
    system("pause");
    return 0;
}