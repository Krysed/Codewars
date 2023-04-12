/*
Given an array of numbers, return a new array of length number containing the last even numbers from the original array (in the same order). The original array will be not empty and will contain at least "number" even numbers.

For example:

([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) => [4, 6, 8]
([-22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26], 2) => [-8, 26]
([6, -25, 3, 7, 5, 5, 7, -3, 23], 1) => [6]
*/

#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    std::vector<int> tmp;
    std::for_each(begin(arr), end(arr), [&tmp](int a) { if(a % 2 == 0) tmp.push_back(a); });
    while (tmp.size() > n)tmp.erase(begin(tmp));
    for (auto i : tmp)std::cout << i << " ";
    return tmp;
}

template <typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(evenNumbers({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 3), { 4,6,8 }) << "\n";
    std::cout << equal(evenNumbers({ -22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26 }, 2), { -8,26 }) << "\n";
    std::cout << equal(evenNumbers({ 6, -25, 3, 7, 5, 5, 7, -3, 23 }, 1), { 6 }) << "\n";
    std::cout << equal(evenNumbers({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 4), { 2, 4, 6, 8 }) << "\n";
    std::cout << equal(evenNumbers({ 1, 3, 5, 7, 9 }, 0), {}) << "\n";

    return 0;
}