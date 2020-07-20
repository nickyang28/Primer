//
// Created by NickYang on 2020/7/20.
//
#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>
#include <regex>
#include <tuple>
using namespace std;

class Date{
public:
    explicit Date(const string &s);
    void show() const;
private:
    unsigned int year{}, month{}, day{};
    unordered_map<string, int> e2n = {{"January",1}, {"February",2}, {"March",3}, {"April",4}, {"May",5}, {"June",6},{"July",7},{"August",8},{"September",9},{"October",10},{"November",11},{"December",12},
                                      {"Jan",1}, {"Feb",2}, {"Mar",3}, {"Apr",4}, {"May",5}, {"Jun",6},{"Jul",7},{"Aug",8},{"Sep",9},{"Oct",10},{"Nov",11},{"Dec",12}};
    string get_year(const string&);
    void get_month_day(const string&);
};

void Date::show() const {
    printf("Year: %d, Month: %d, Day: %d\n", year, month, day);
}

Date::Date(const string &s) {
    string mon_day = get_year(s);
    get_month_day(mon_day);
}

string Date::get_year(const string &s)
{
    string month_day;
    if (s.find(", ") != string::npos){
        year = stoul(s.substr(s.rfind(", ") + 2));
        month_day = s.substr(0, s.size() - 6);
    }
    else if (s.rfind('/') != string::npos){
        year = stoul(s.substr(s.rfind('/') + 1));
        month_day = s.substr(0, s.size() - 5);
    }
    else {
        year = stoul(s.substr(s.rfind(' ') + 1));
        month_day = s.substr(0, s.size() - 5);
    }
    return month_day;
}

void Date::get_month_day(const string &s) {
    if (s.find(", ") != string::npos){
        string month_token = s.substr(0,s.find(", "));
        if (e2n.find(month_token) != e2n.end()){
            month = e2n[month_token];
        }
        else{
            month = stoul(month_token);
        }
        day = stoul(s.substr(s.find(", ") + 2));
    }
    else if (s.find('/') != string::npos){
        string month_token = s.substr(0,s.find('/'));
        if (e2n.find(month_token) != e2n.end()){
            month = e2n[month_token];
        }
        else{
            month = stoul(month_token);
        }
        day = stoul(s.substr(s.find('/') + 1));
    }
    else if (s.find(' ') != string::npos){
        string month_token = s.substr(0,s.find(' '));
        if (e2n.find(month_token) != e2n.end()){
            month = e2n[month_token];
        }
        else{
            month = stoul(month_token);
        }
        day = stoul(s.substr(s.find(' ') + 1));
    }
}

int main()
{
    Date d1("December 25, 1900");
    d1.show();
    Date d2("12/25/1900");
    d2.show();
    Date d3("Dec 25 1990");
    d3.show();
    Date d4("Dec, 25, 1990");
    d4.show();
    Date d5("Dec/25, 1990");
    d5.show();
    Date d6("Dec/25 1990");
    d6.show();
    return 0;
}
