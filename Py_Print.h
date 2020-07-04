//
// Created by NickYang on 2020/7/4.
//

#ifndef PY_PRINT_H
#define PY_PRINT_H
#include <iostream>
using namespace std;
void print(){cout<<'\n';}

template<typename T, typename ...TAIL>
void print(const T &t, TAIL... tail)
{
    cout<<t<<' ';
    print(tail...);
}
#endif //PY_PRINT_H
