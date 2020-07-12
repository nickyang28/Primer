//
// Created by Feichi Yang on 2020/6/23.
//

#ifndef SALES_DATA_H
#define SALES_DATA_H
struct Sales_data {
    std::string isbn() const {return this->bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::string bookNo;
    int units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const
{

}

#endif
