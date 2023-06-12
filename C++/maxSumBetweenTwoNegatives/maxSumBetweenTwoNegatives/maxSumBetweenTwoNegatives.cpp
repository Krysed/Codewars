/*
Task
You have a list of integers. The task is to return the maximum sum of the elements located between two negative elements. No negative element should be present in the sum. If there is no such sum: -1 for Python, C++, JavaScript, Java, CoffeeScript and COBOL, Nothing for Haskell, None for Rust.

Example 1
[4, -1, 6, -2, 3, 5, -7, 7] -> 8
     ^      ^         ^
Sum between -1 and -2 is 6, between -2 and -7 is 3 + 5 = 8. It's also not 14 (between -1 and -7), because this includes a negative number (-2).

Example 2
[4, -1, -2] -> 0
     ^   ^
There is nothing between -1 and -2, so return 0.
*/

#include <iostream>
#include <vector>

int MaxSumBetweenTwoNegatives(std::vector<int> arr) {
    int sum = 0;
    int maxSum = 0;
    int numberCount = 0;
    bool hasNegative = false;

    for (int num : arr) {
        numberCount += (num < 0);

        if (num < 0) {
            hasNegative = true;
            maxSum = std::max(maxSum, sum);
            sum = 0;
        }
        else if (hasNegative) {
            sum += num;
        }
    }

    return (numberCount > 1) ? maxSum : -1;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (MaxSumBetweenTwoNegatives({ -1,6,-2,3,5,-7 }) == 8) << "\n";
    std::cout << (MaxSumBetweenTwoNegatives({ 5,-1,-2 }) == 0) << "\n";
    std::cout << (MaxSumBetweenTwoNegatives({ 1,-2 }) == -1) << "\n";

    return 0;
}
