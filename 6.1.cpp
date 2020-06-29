//
// Created by Feichi Yang on 2020/6/28.
//
#include <iostream>
#include <ctime>
#include "Chapter6.h"
using namespace std;

int main()
{
    clock_t startTime, endTime;
    int TIME = 100000000;
    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        fact(5);
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;

    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        myFact(5);
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;

    return 0;
}