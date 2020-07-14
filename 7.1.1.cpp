//
// Created by Feichi Yang on 2020/7/14.
//
#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data total;
    if (read(cin, total)){
        Sales_data trans;
        while(read(cin, trans)){
            if (total.isbn() == trans.isbn()){
                //total.combine(trans);
                total = add(total, trans);
            }
            else{
                print(cout, total) << endl;
            }
        }
        print(cout, total) <<endl;
    }
    else{
        cerr << "No data?!" << endl;
    }
}
