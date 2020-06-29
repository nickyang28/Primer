//
// Created by NickYang on 2020/6/25.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <list>
#include <vector>

using namespace std;

int main()
{
    unordered_map<int, string> m;
    m[1] = "one"; m[2] = "two"; m[3] = "three";
    for (auto it = m.begin(); it != m.end(); ++it){
        cout << it->first << ": " << it->second << endl;
    }
    for (auto &p : m){
        cout << p.first << ": " << p.second << endl;
    }
    for (auto &[key, value] : m){
        cout << key << ": " << value << endl;
    }
    set<int> s{1,2,3};
    list<int> li{1,2,3};
    vector<int> v1{1,2,3};
    int a[3] = {1,2,3};
    decltype(begin(a)) p = a;
    cout << *(p + 1) << endl;
    int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    for (auto &row : arr){
        for (auto col : row){
            cout << col << "\t";
        }
        cout << endl;
    }
    return 0;
}