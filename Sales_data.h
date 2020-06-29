//
// Created by Feichi Yang on 2020/6/23.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H
struct Sales_data {
    std::string bookNo;
    int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};
#endif
