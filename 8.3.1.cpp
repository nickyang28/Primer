//
// Created by Feichi Yang on 2020/7/17.
//
#include <fstream>
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
    string line;
    vector<string> lines;
    unordered_map<string, vector<double>> dict;
    getline(click_log, line);
    while (getline(click_log, line)){
        istringstream record(line);
        string key;
        vector<double> weights;
        double weight;
        record >> key;
        while (record >> weight){
            weights.push_back(weight);
        }
        dict[key] = weights;
    }
    t2 = clock();
    cout << "Reading time: "  << double(t2 - t1) / CLOCKS_PER_SEC << "s" << endl;
    //cout << dict["108133"] << endl;
    return 0;
}
