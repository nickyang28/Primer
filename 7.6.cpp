//
// Created by NickYang on 2020/7/16.
//
#include <string>
#include <iostream>
using namespace std;

class Account{
public:
    Account() = default;
    explicit Account(double a) : amount(a) {};
    void calculate() {amount += amount * interestRate;}
    static double rate() {return interestRate;}
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

void Account::rate(double newRate)
{
    interestRate = newRate;
}

double Account::initRate() {
    return 0.1;
}

double Account::interestRate = initRate();

int main()
{
    Account acc1(200);
    acc1.rate(.5);
    cout << acc1.rate() << endl;
    return 0;
}