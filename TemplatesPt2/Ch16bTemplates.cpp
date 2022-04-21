//  Sam Brown
//  CIS 1202 101
//  April 21, 2022

#include "SamPersonalLibrary.h"

template <typename T>
T half(T);
int half(int);

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

int half(int number)
{
    float num = static_cast<float>(number) / 2;
    num = ceil(num);
    return static_cast<int>(num);
}