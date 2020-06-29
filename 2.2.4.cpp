//
// Created by Feichi Yang on 2020/6/23.
//
#include <iostream>
int main()
{
    int i = 100, sum = 0;
    for (int j = 0; j != 10; ++j){
        sum += j;
    }
    std::cout << i << " " << sum << std::endl;
}
