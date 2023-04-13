/*
The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:

maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
//should be 6: {4, -1, 2, 1}
Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.

Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.
*/
#include <algorithm>
#include <iostream>
#include <vector>

int maxSequence(const std::vector<int>& arr) {
    int maxSoFar = 0;
    int maxEndingHere = 0;
    for (int i = 0; i < arr.size(); i++) {
        maxEndingHere += arr[i];
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }
    return maxSoFar;
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(maxSequence({}), 0) << "\n";
    std::cout << equal(maxSequence({ -2, 1, -3, 4, -1, 2, 1, -5, 4 }), 6) << "\n";

    return 0;
}
