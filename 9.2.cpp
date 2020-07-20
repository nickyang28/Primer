//
// Created by NickYang on 2020/7/18.
//
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <string>
#include <iostream>
#include "My_Print.h"

using namespace std;

int main()
{
    array<double, 10> arr{};
    arr[4] = 15;
    cout << arr[0] << endl;
    list<int> lst1{1,2,3};
    auto iter1 = lst1.begin();
    auto iter2 = lst1.cend();
    while (iter2 != iter1){
        cout << *iter1 << endl;
        ++iter1;
    }
    lst1.push_back(4);
    vector<double> v1{0,0,0,0,0,0};
    v1.insert(v1.cbegin() + 1, {1, 2, 3, 4, 5});
    print(v1);
    return 0;
}
