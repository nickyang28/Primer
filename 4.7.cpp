//
// Created by Feichi Yang on 2020/6/26.
//
# include <iostream>
# include <vector>
# include <string>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    string finalGrade = (grade > 90) ? "High Pass" : (grade < 60) ? "Fail" : "Pass";
    cout << finalGrade << endl;
    return 0;
}
