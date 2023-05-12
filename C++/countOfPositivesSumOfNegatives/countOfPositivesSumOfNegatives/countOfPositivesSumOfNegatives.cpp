/*
Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].
*/
#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty())return {};
    int sum = 0,count = 0;
    std::for_each(begin(input), end(input), [&sum, &count](int i) {i <= 0 ? sum += i : count++; });
    return { count,sum };
}
template<typename T>
bool equal(T a, T b){
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(countPositivesSumNegatives({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15 }), { 10, -65 }) << "\n";
    std::cout << equal(countPositivesSumNegatives({ 0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14 }), { 8, -50 }) << "\n";
    std::cout << equal(countPositivesSumNegatives({}), {}) << "\n";

    return 0;
}
