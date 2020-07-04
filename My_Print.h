//
// Created by NickYang on 2020/7/4.
//

#ifndef MY_PRINT_H
#define MY_PRINT_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(const string &str)
{
    cout << str << endl;
}

void print(const vector<int> &v)
{
    cout << "[";
    for (auto beg = v.begin(); beg != v.end() - 1; ++beg){
        cout << *beg << ", ";
    }
    cout << *(v.end() - 1) << "]" << endl;
}

void print(const vector<double> &v)
{
    cout << "[";
    for (auto beg = v.begin(); beg != v.end() - 1; ++beg){
        cout << *beg << ", ";
    }
    cout << *(v.end() - 1) << "]" << endl;
}

#endif //MY_PRINT_H
