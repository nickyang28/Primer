//
// Created by NickYang on 2020/7/16.
//
#include <iostream>
using namespace std;

class Debug{
public:
    constexpr explicit Debug(bool b = true): hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o){}
    constexpr bool any() const {return hw || io || other;}
private:
    bool hw;
    bool io;
    bool other;
};


int main()
{
    constexpr Debug io_sub(false, true, false);
    if (io_sub.any()){
        cerr << "Print appropriate error message." << endl;
    }
    constexpr Debug prod(false);
    if (prod.any()){
        cerr << "Print an error message." << endl;
    }
}