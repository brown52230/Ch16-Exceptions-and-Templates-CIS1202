//  Sam Brown
//  CIS 1202 101
//  April 21, 2022

#include "SamPersonalLibrary.h"

template <typename T>
T half(T number);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    endProgram();
}

template <typename T>
T half(T number)
{
    return number / 2;
}