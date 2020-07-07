//
// Created by NickYang on 2020/7/7.
//
#include <iostream>
#include <cassert>
#include <vector>
#include <ctime>
#include <unordered_map>
using namespace std;

inline bool lenComp(const string &str1, const string &str2) {return str1 > str2;}

inline bool (*pf)(const string &, const string &);

string::size_type sumLength(const string&, const string&);

bool cstringCompare(const char*, const char*);

inline int add(const int &i1, const int &i2)
{
    return i1 + i2;
}

int main()
{
    pf = lenComp;
    pf = &lenComp;
    bool b1 = lenComp("hello", "goodbye");
    cout << b1 << endl;
    bool b2 = (*pf)("hello", "goodbye");
    cout << b2 << endl;
    bool b3 = pf("hello", "goodbye");
    cout << b3 << endl;

    pf = nullptr;
    //pf = sumLength;
    //pf = cstringCompare;
    pf = lenComp;

    using PF = int(*)(int &, int &);
    return 0;
}
