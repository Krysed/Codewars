/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

#include <iostream>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    unsigned int min1 = UINT_MAX;
    unsigned int min2 = UINT_MAX;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] < min1) {
            min2 = min1;
            min1 = numbers[i];
        }
        else if (numbers[i] < min2) {
            min2 = numbers[i];
        }
    }

    return min1 + min2;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (sumTwoSmallestNumbers({ 5,8,12,19,22 }) == 13) << "\n";

    return 0;
}