/*
Write a function that takes an array of numbers (integers for the tests) and a target number. It should find two different items in the array that, when added together, give the target value. The indices of these items should then be returned in a tuple / list (depending on your language) like so: (index1, index2).

For the purposes of this kata, some tests may have multiple answers; any valid solutions will be accepted.

The input will always be valid (numbers will be an array of length 2 or greater, and all of the items will be numbers; target will always be the sum of two different items from that array).

Based on: http://oj.leetcode.com/problems/two-sum/

two_sum({1, 2, 3}, 4); // returns {0, 2} or {2, 0}
*/
#include <iostream>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); ++i)
    {
        for (int j = i+1; j < numbers.size(); ++j) {
            if (numbers[i] + numbers[j] == target) return { i,j };
        }
    }
}

template<typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(two_sum({ 1, 2, 3 }, 4), { 0,2 }) << "\n";
    std::cout << equal(two_sum({ 1234, 5678, 9012 }, 14690), { 1,2 }) << "\n";
    std::cout << equal(two_sum({ 2, 2, 3 }, 4), { 0,1 }) << "\n";

    return 0;
}
