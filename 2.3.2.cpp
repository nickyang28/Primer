//
// Created by Feichi Yang on 2020/6/23.
//
#include <iostream>
int main()
{
    double dval = 12.34;
    double *pd = &dval;
    double *pd2 = pd;
    *pd = 0; //改变了指针所指东西的值
    //pd = 0; //改变了指针所在地址
    std::cout << *pd << "\t" << *pd2 << "\t" << dval << std::endl;
    int i = 15;
    int *dp = &i;
    std::cout << dp << "\t" << i << std::endl;
    return 0;
}
