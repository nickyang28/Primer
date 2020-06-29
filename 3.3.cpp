//
// Created by Feichi Yang on 2020/6/24.
//
# include <iostream>
# include <vector>
# include <string>
using namespace std;

void print(const vector<unsigned int>& vector1) {
    for (int i : vector1) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // vector<string> svec = {"a", "an", "the"};
    // cout << svec[2] << endl;
    vector<int> v2;
    for (int i = 0; i != 100; ++i){
        v2.push_back(i);
    }
    //cout << v2[2] << endl;
    vector<unsigned> scores(11, 0);
    unsigned score;
    while (cin >> score){
        if (score <= 100){
            ++ scores[score/10];
        }
    }
    //cout << scores[7] << endl;
    ::print(scores);
    cout << scores[95] << endl; // 这里要格外小心， C++没有提供下标溢出地错误提示，可能在运行过程中会出现意想不到的错误。
    //如果数组下标越界了，那么它会自动接着那块内存往后写。
    return 0;
}
