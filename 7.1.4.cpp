//
// Created by Feichi Yang on 2020/7/14.
//
#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data s1;
    s1 = Sales_data("xr", 5, 95);
    cout << s1.revenue << endl;
    //Sales_data("xr");
}