//
// Created by NickYang on 2020/7/17.
//
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};


int main()
{
    string line, word;
    vector<PersonInfo> people;
    fstream chapter8("/Users/nick/CLionProjects/Primer/8.txt");

    while (getline(chapter8, line)){
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    cout << people[0].name << endl;
    return 0;
}