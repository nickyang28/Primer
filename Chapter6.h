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

int Fact(int res, int val)
{
    if (val == 1){
        return res;
    }
    else{
        return val * Fact(res, val - 1);
    }
}

int myFact(int val)
{
    return Fact(1, val);
}

#endif //CHAPTER6_H
