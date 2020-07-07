//
// Created by Feichi Yang on 2020/6/28.
//

#ifndef CHAPTER6_H
#define CHAPTER6_H
int fact(int val)
{
    int ret = 1;
    while (val > 1){
        ret *= val--;
    }
    return ret;
}

int myFact(int val)
{
    if (val == 1){
        return 1;
    }
    return val * myFact(val - 1);
}

#endif //CHAPTER6_H
