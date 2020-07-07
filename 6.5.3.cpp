//
// Created by NickYang on 2020/7/5.
//
#include <iostream>
#include <cassert>
#include <vector>
#include <ctime>
#include <unordered_map>
//#include "My_Print.h"
using namespace std;

long long fact(int val)
{
    assert(val >= 0);
    if (val > 1){
        return val * fact(val - 1);
    }
    return 1;
}

long long dp_fact(int val)
{
    assert(val >= 0);
    if (val == 0) {return 1;}
    unordered_map<int, long long> res;
    res[0] = 1;
    for (auto i = 1; i != val + 1; ++i){
        res[i] = res[i - 1] * i;
    }
    return res[val];
}

long long loop_fact(int val)
{
    int ret = 1;
    while (val > 1){
        ret *= val--;
    }
    return ret;
}

int main()
{
    clock_t startTime, endTime;
    int TIME = 10000;

    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        fact(50);
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;

    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        dp_fact(50);
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;

    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        loop_fact(50);
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}
