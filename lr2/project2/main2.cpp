/*
    Задание №4

    Это уже немного сложнее. Напишите небольшую программу-симулятор падения мячика с башни.
    Сначала пользователю предлагается ввести высоту башни в метрах. Не забывайте о гравитации (9,8м/с2)
    и о том, что у мячика нет начальной скорости (его держат в руках). Программа должна выводить
    расстояние от земли, на котором находится мячик после 0, 1, 2, 3, 4 и 5 секунд падения.
    Минимальная высота составляет 0 метров (ниже мячику падать нельзя).

    В вашей программе должен быть заголовочный файл constants.h с пространством имен myConstants.
    В myConstants определите символьную константу для хранения значения силы тяжести на Земле (9.8).

    Напишите функцию для вычисления высоты мячика через х секунд падения. Используйте следующую формулу:
    высота мячика над землей = константа_гравитации * x_секунд^2/2.

    Пример результата выполнения программы:

    Enter the initial height of the tower in meters: 100
    At 0 seconds, the ball is at height: 100 meters
    At 1 seconds, the ball is at height: 95.1 meters
    At 2 seconds, the ball is at height: 80.4 meters
    At 3 seconds, the ball is at height: 55.9 meters
    At 4 seconds, the ball is at height: 21.6 meters
    At 5 seconds, the ball is on the ground.
*/

#include <iostream>
#include "constants.h"
using namespace std;

double getHeight(int sec)
{
    double res = myConstants::gravity * sec * sec / 2;
    return res;
}

int main()
{
    cout << "Enter the initial height of the tower in meters: ";
    double height;
    cin >> height;
    const double initial_height = height;

    for(int i = 0; i <= 5; i++)
    {
        height = initial_height - getHeight(i);
        if (height > 0)
            cout << "At " << i << " seconds, the ball is at height: " << height << " meters" << endl;
        else
            cout << "At " << i << " seconds, the ball is on the ground" << endl;
    }

    system("pause");
    return 0;
}