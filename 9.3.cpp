//
// Created by NickYang on 2020/7/19.
//
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <string>
#include <iostream>
#include "My_Print.h"
#include "Sales_data.h"

using namespace std;

int main()
{
    list<int> ilist;
    for (auto ix = 0; ix != 4; ++ix){
        ilist.push_front(ix);
    }
    vector<int> v1{1,2,3,4,5,6};
    vector<int> v2{7,8,9,10};
    //v1.insert(v1.cbegin() + 6, {1, 2, 3, 4, 5});
    v1.insert(v1.cend(), v2.cbegin(), v2.cend());
    print(v1);

    vector<Sales_data> c;
    c.emplace_back("XR", 25, 15.99);
    cout << c[0].isbn() <<endl;

    if (!v1.empty()){
        auto val = *v1.begin(), val2 = v1.front();
        cout << val << " " << val2 << endl;
        auto last = v1.end();
        cout << *last << endl;
        auto val3 = *(--last);
        cout << val3 << " " << endl;
        auto val4 = v1.back();
        cout << val4 << endl;
    }
    vector<int> empty{19820};
    cout << empty[0] << endl;
    cout << empty.at(0) << endl;
    cout << empty.front() << endl;
    cout << *empty.cbegin() << endl;

    auto it = v1.begin();
    while (it != v1.end()){
        if (*it % 2){
            it = v1.erase(it);
        }
        else{
            ++it;
        }
    }
    return 0;
}
