//
// Created by Feichi Yang on 2020/6/28.
//
#include <iostream>
#include <initializer_list>
#include "Chapter6.h"
using namespace std;

void reset(int *ip)
{
    *ip = 84;
}

void error_msg(initializer_list<string> il)
{
    for (auto &msg : il){
        cout << msg << " ";
    }
    cout << endl;
}

int main()
{
    int n = 0, i = 42;
    myFact(i);
    cout << i << endl; // 改动不会影响i的值。

    reset(&i);
    cout << i << endl;

    string expected, actual;
    expected = "Two"; actual = "One";
    error_msg({"functionX", expected, actual});
    return 0;
}