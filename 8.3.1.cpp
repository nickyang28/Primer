//
// Created by Feichi Yang on 2020/7/17.
//
#include <fstream>
#include <array>
#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include <unordered_map>
#include <sstream>
#include "My_Print.h"

using namespace std;

int main()
{
    clock_t t1, t2;
    t1 = clock();

    ifstream click_log(R"(D:\PyProjects\TencentAdv\data\w2v_click_creative_200d.txt)", ifstream::in);
    if(!click_log)
        return -1;

    string line;
    string key;
    double weight;
    unsigned long rows, dim;
    getline(click_log, line);
    istringstream info(line);
    info >> rows >> dim;

    unordered_map<string, array<double, 200>> dict;
    dict.reserve(rows);
    int count = 0;
    while (getline(click_log, line)){
        istringstream record(line);
        int i = 0;
        record >> key;
        while (record >> weight){
            dict[key].at(i++) = weight;
        }
        ++count;
    }
    t2 = clock();
    cout << "Reading time: "  << double(t2 - t1) / CLOCKS_PER_SEC << "s" << endl;
    cout << dict["108133"].at(0) << endl;
    return 0;
}
