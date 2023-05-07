/*
Your task is to sum the differences between consecutive pairs in the array in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).
*/
#include <algorithm>
#include <iostream>
#include <vector>

int sumOfDifferences(const std::vector<int>& arr) {
    if (arr.size() < 2)return 0;
    int difference=0;
    std::vector<int>copy = arr;
    std::sort(begin(copy), end(copy));
    std::reverse(begin(copy), end(copy));
    for (auto it = begin(copy); it != end(copy)-1; ++it) {
        difference += *it - *(it + 1);
    }

    return difference;
}

bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(sumOfDifferences({ 1,2,10 }), 9) << "\n";
    std::cout << equal(sumOfDifferences({ -3,-2,-1 }), 2) << "\n";
    std::cout << equal(sumOfDifferences({ 1,1,1,1 }), 0) << "\n";
    std::cout << equal(sumOfDifferences({ -17,17 }), 34) << "\n";
    std::cout << equal(sumOfDifferences({}), 0) << "\n";
    std::cout << equal(sumOfDifferences({-1}), 0) << "\n";
    std::cout << equal(sumOfDifferences({1}), 0) << "\n";

    return 0;
}
