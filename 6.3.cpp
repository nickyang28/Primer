//
// Created by NickYang on 2020/7/3.
//
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;;

void swap(int &v1, int &v2)
{
    if (v1 == v2) return;
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

bool subStr(const string &str1, const string &str2)
{
    if (str1.size() == str2.size()) return str1 == str2;
    string l_str = str1, s_str = str2;
    if (str1.size() < str2.size()){
        l_str = str2;
        s_str = str1;
    }
    for (auto i = 0; i != l_str.size() - s_str.size(); ++i){
        bool flag = true;
        for (auto j = 0; j != s_str.size(); ++j){
            if (l_str[i + j] != s_str[j]){
                flag = false;
                break;
            }
        }
        if (flag) return flag;
    }
    return false;
}

bool subStr2(const string &str1, const string &str2)
{
    if (str1.size() == str2.size()) return str1 == str2;
    string l_str = str1, s_str = str2;
    if (str1.size() < str2.size()){
        l_str = str2;
        s_str = str1;
    }
    string::size_type idx = l_str.find(s_str);
    if (idx!=string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool subStr3(const string &str1, const string &str2)
{
    if (str1.size() == str2.size()) return str1 == str2;
    string l_str = str1, s_str = str2;
    if (str1.size() < str2.size()){
        l_str = str2;
        s_str = str1;
    }
    for (auto i = 0; i != l_str.size() - s_str.size(); ++i){
        if (l_str.substr(i, s_str.size()) == s_str){
            return true;
        }
    }
    return false;
}

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}


int main()
{
    int t1 = 1024, t2 = 2048;
    swap(t1, t2);
    cout << t1 << " " << t2 << endl;

    clock_t startTime, endTime;
    int TIME = 10;

    startTime = clock();
    for (int i = 0; i != TIME; ++i){
        subStr("str1", "str12");
    }
    endTime = clock();
    cout << "Running time: "  << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;


    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A';
    cout << s << endl;

    return 0;
}
