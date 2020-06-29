//
// Created by Feichi Yang on 2020/6/23.
//
# include <iostream>
# include <string>
# include "Sales_data.h"
using std::cout; // C++11中要分开声明
using std::cin;
using std::endl;

int main()
{
    Sales_data data1, data2;
    cin >> data1.bookNo >> data1.units_sold >> data1.price;
    cin >> data2.bookNo >> data2.units_sold >> data2.price;
    data1.revenue = data1.units_sold * data1.price;
    data2.revenue = data2.units_sold * data2.price;
    if (data1.bookNo == data2.bookNo){
        double ttl_revenue = data1.revenue + data2.revenue;
        int ttl_units = data1.units_sold + data2.units_sold;
        cout << data1.bookNo << " " << ttl_units << " " << ttl_revenue << " ";
        if (ttl_units == 0){
            cout << "(no sales)" << endl;
        }
        else{
            double avg_price = ttl_revenue / ttl_units;
            cout << avg_price << endl;
        }
        return 0;
    }
    else{
        cout << "Data must refer to a same ISBN." << endl;
        return -1;
    }
}
