//
// Created by Feichi Yang on 2020/7/17.
//
#include <iostream>
#include <vector>
#include <ctime>
#include "rapidcsv.h"
using namespace std;

int main()
{
    clock_t t1, t2;
    t1 = clock();
    rapidcsv::Document doc(R"(D:\PyProjects\TencentAdv\data\click_log.csv)");
    t2 = clock();
    cout << "Reading time: "  << double(t2 - t1) / CLOCKS_PER_SEC << "s" << endl;

    std::vector<float> col = doc.GetColumn<float>("user_id");
    std::cout << "Read " << col.size() << " values." << std::endl;
}
