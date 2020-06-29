//
// Created by Feichi Yang on 2020/6/24.
//
# include <iostream>
# include <string>
# include <cctype>
using namespace std;

int main()
{
    string str("Hello World!");
    //for (decltype(str.size()) idx = 0; idx != str.size() && !isspace(str[idx]); ++ idx){
        //str[idx] = toupper(str[idx]);
    //}
    for (char &c : str){
        c = 'x';
    }
    cout << str << endl;
    return 0;
}
