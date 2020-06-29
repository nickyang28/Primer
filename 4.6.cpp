//
// Created by Feichi Yang on 2020/6/26.
//
# include <iostream>
# include <vector>
# include <string>
using namespace std;

int main()
{
    vector<string> v1({"I", "love", "you", "."});
    auto iter = v1.begin();
    cout << *iter++ << endl;
    //cout << (*iter)++ << endl;
    //cout << *iter.empty() << endl;
    cout << iter->empty() << endl;
    //cout << ++*iter << endl;
    cout << iter++->empty() << endl; //最后算的++ 相当于
    return 0;
}
