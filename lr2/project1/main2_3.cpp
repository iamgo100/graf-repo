/*
    Задание №2

    Измените программу из задания №1 так, чтобы функции readNumber() и writeAnswer()
    находились в отдельном файле io.cpp. Используйте предварительные объявления для доступа
    к этим функциям с функции main().

    Задание №3
    
    Измените программу из задания №2 так, чтобы она использовала заголовочный файл io.h
    для доступа к функциям (вместо использования предварительных объявлений).
    Убедитесь, что ваш заголовочный файл использует header guards.

    КОММЕНТАРИЙ ПО ВЫПОЛНЕНИЮ ЗАДАНИЯ.
    Так как я работаю в VSCode мне не доступны многофайловые проекты,
    поэтому я делаю сразу задание через заголовочные файлы с расширением ".h".
*/

#include <iostream>
#include "io.h"

using namespace std;

int main()
{
    int a, b;
    a = readNumber("first");
    b = readNumber("second");
    writeAnswer(a+b);
    system("pause");
    return 0;
}