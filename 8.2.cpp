//
// Created by NickYang on 2020/7/17.
//
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    fstream file("/Users/nick/CLionProjects/Primer/8.txt", ofstream::in);
    string line;
    vector<string> lines;
    while (getline(file, line)){
        lines.push_back(line);
    }
    for (auto &l : lines)
    {
        cout << l << endl;
    }

    return 0;
}
