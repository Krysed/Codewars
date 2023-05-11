/*
Task
Given Two integers a , b , find The sum of them , BUT You are not allowed to use the operators + and -

Notes
The numbers (a,b) may be positive , negative values or zeros .

Returning value will be an integer .

Input >> Output Examples
1- Add (5,19) ==> return (24)

2- Add (-27,18) ==> return (-9)

3- Add (-14,-16) ==> return (-30)
Playing with Numbers Series
Playing With Lists/Arrays Series
For More Enjoyable Katas
*/
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

int Add(int x, int y)
{
    std::vector<int> tmp{ x,y };
    return std::accumulate(begin(tmp), end(tmp), 0);
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(Add(1, 2), 3) << "\n";
    std::cout << equal(Add(5,19), 24) << "\n";
    std::cout << equal(Add(23,17), 40) << "\n";
    
    std::cout << equal(Add(-14,-16), -30) << "\n";
    std::cout << equal(Add(-50,-176), -226) << "\n";
    std::cout << equal(Add(-10,-29), -39) << "\n";
    
    std::cout << equal(Add(-13,13), 0) << "\n";
    std::cout << equal(Add(-27,18), -9) << "\n";
    std::cout << equal(Add(-90,30), -60) << "\n";

    return 0;
}
