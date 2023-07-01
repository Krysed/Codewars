/*
Given an array of integers, find the minimum number of elements to remove from the array so that the square root of the largest integer in the array is less or equal to the smallest number in the same array.

x = smallest integer in the array

y = largest integer in the array

Find the minimum number of elements to remove so, √y ≤ x.

Example
A = {3, 6, 5, 9, 16}
min=3 max=16

√16 > 3

remove 16, so largest element becomes 9.

√9 ≤ 3

so

minRemove(A) = 1
since only 16 was removed.

Note
If all integers in the array are equal, then it wouldnt make any sense to reduce the array any further, so return 0.

minRemove({2}) //=> 0
minRemove({6,6,6,6}) //=> 0
minRemove({6,6,6,2}) //=> 1
Constraints
1 <= |A| <= 105
*/
#include <algorithm>
#include <iostream>
#include <vector>

int minRemove(std::vector<int> arr) {
    int result = 0;
    while (arr.size() > 1) {
        std::vector<int>::iterator max = std::max_element(begin(arr), end(arr));
        std::vector<int>::iterator min = std::min_element(begin(arr), end(arr));
        if (*min == *max) return result;
        if (std::sqrt(*max) > *min) {
            arr.erase(max);
            ++result;
        }
        else {
            std::cout << result << " inside \n";
            return result;
        }
    }
    std::cout << result << " outside \n";
    return result;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (minRemove({ 9,13,21,1,3,5,7 }) == 2) << "\n";

    return 0;
}