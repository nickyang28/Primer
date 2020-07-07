//
// Created by NickYang on 2020/7/5.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef string::size_type sz;
sz wd = 80; char def = '*';
void screen(sz para1 = wd, char para2 = def)
{
    cout << para1 << " " << para2 << endl;
}

inline const string &shorterString(const string &s1, const string &s2)
{
    return (s1.size() < s2.size()) ? s1 : s2;
}

constexpr int new_sz() {return 42;}
constexpr int foo = new_sz();
constexpr size_t scale(size_t cnt) {return new_sz() * cnt;}

constexpr inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    screen();
    screen(15, '(');
    wd = 70;
    def = ')';
    screen();
    sz wd = 65;
    char def = '$';
    screen();
    cout << shorterString("Tesangkjrt!", "Tesr") << endl;

    int arr[scale(2)];
    const int i = 2;
    int a2[scale(i)];
    cout << end(arr) - begin(arr) << endl;
    cout << end(a2) - begin(a2) << endl;

    cout << isShorter("Tes5tt", "Testw5tt1") << endl;
    int a3[isShorter("Tes5tt", "Tetw5tw5tst1")];
    //cout << end(a3) - begin(a3) << endl;
    return 0;
}
