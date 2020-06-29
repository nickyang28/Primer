//
// Created by Feichi Yang on 2020/6/28.
//
#include <iostream>
#include "Chapter6.h"
using namespace std;

void reset(int *ip)
{
    *ip = 84;
}

int main()
{
    int n = 0, i = 42;
    myFact(i);
    cout << i << endl; // 改动不会影响i的值。

    reset(&i);
    cout << i << endl;

    return 0;
}