#ifndef IO_H
#define IO_H

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

#endif