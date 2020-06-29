//
// Created by Feichi Yang on 2020/6/23.
//
# include <iostream>
# include <string>
using namespace std;

int main()
{
    string str("123\n456\n789\n");
    string s;
    getline(cin, s);
    cout << s[4] << endl;
    return 0;
}
