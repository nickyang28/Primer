//
// Created by Feichi Yang on 2020/6/24.
//
# include <iostream>
# include <vector>
# include <string>
# include <cmath>
using namespace std;

int main()
{
    string s("Some string");
    if (s.begin() != s.end()){
        for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
            *it = toupper(*it);
        }
    }
    //cout << s << endl;

    vector<int> v({0,1,2,3,4,5,6,7,8,9});
    for (auto it = v.begin(); it != v.end(); ++it){
        *it = pow(*it, 2);
    }
    for (auto &num : v){
        //cout << num << endl;
    }

    auto beg = v.begin(), end = v.end();
    auto mid = beg + (end - beg) / 2;
    int sought = 81;
    while (mid != end && *mid != sought){
        if (sought < *mid){
            end = mid;
        }
        else{
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    if (mid == v.end() || mid == v.begin() || *mid != sought){
        cout << "Not in list." << endl;
    }
    else{
        cout << *mid << endl;
    }

    return 0;
}
