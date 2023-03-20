/*
Convert number to reversed array of digits
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example(Input => Output):
35231 => [1,3,2,5,3]
0 => [0]
*/

#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n) {
    if (n == 0) return { 0 };
    std::vector<int> nums;
    while (n) {
        nums.push_back(n % 10);
        n /= 10;
    }
    return nums;
}

bool equal(std::vector<int>a, std::vector<int>b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(digitize(348597), { 7,9,5,8,4,3 }) << "\n";
    std::cout << equal(digitize(35231), { 1,3,2,5,3 }) << "\n";
    std::cout << equal(digitize(0), { 0 }) << "\n";
}
