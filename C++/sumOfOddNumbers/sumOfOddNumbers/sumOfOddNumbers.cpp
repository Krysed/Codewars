/*
Given the triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...
Calculate the sum of the numbers in the nth row of this triangle (starting at index 1) e.g.: (Input --> Output)

1 -->  1
2 --> 3 + 5 = 8
*/
#include <iostream>
#include <cmath>

long long rowSumOddNumbers(unsigned n) {
    return std::pow(n, 3);
}
bool equal(long long a, long long b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(rowSumOddNumbers(1), 1) << "\n";
    std::cout << equal(rowSumOddNumbers(42), 74088) << "\n";

    return 0;
}
