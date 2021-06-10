/*
    Задание №3

    Напишите следующую программу. Сначала пользователю предлагается ввести 2 числа
    типа с плавающей точкой (используйте тип double). Затем предлагается ввести
    один из следующих математических символов: +, -, * или /. Программа выполняет
    выбранную пользователем математическую операцию между двумя числами, а затем
    выводит результат на экран. Если пользователь ввел некорректный символ, то
    программа ничего не должна выводить.
    
    Например:
    Enter a double value: 7
    Enter a double value: 5
    Enter one of the following: +, -, *, or /: *
    7 * 5 = 35
*/

#include <iostream>
using namespace std;

double getNumber()
{
    cout << "Enter a number: ";
    double x;
    cin >> x;
    return x;
}

int main()
{
    double a, b;
    a = getNumber();
    b = getNumber();
    cout << "Enter one of the following: +, -, *, or /: ";
    char oprt;
    cin >> oprt;
    switch (oprt)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    default:
        break;
    }

    system("pause");
    return 0;
}