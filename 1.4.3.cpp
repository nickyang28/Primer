//
// Created by Feichi Yang on 2020/6/21.
//
# include <iostream>
int main()
{
    int sum = 0, val = 0;
    std::cout << "Please input several numbers: " << std::endl;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
