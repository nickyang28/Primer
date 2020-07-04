//
// Created by NickYang on 2020/7/4.
//
#include <iostream>
#include <vector>
#include <string>
#include "My_Print.h"
using namespace std;



int main()
{
    vector<int> v1({1, 2, 3});
    vector<double> v2({1.13489,2.2,3.3});
    string s("Test!");
    print(s);
    print(v1);
    print(v2);
    puts("abag");
    return 0;
}