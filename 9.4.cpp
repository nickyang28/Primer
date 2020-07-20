//
// Created by NickYang on 2020/7/20.
//
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <string>
#include <iostream>
#include "My_Print.h"
#include "Sales_data.h"

using namespace std;
int SIZE = 24;

int main()
{
    vector<int> v1;
    for (auto ix = 0; ix != SIZE; ++ix){
        v1.push_back(ix);
    }
    v1.reserve(128);
    cout << "Size: " << v1.size() << " " << "Capacity: " << v1.capacity() << endl;
    return 0;
}