/*
Write a function that takes a positive integer n, sums all the cubed values from 1 to n (inclusive), and returns that sum.

Assume that the input n will always be a positive integer.

Examples: (Input --> output)

2 --> 9 (sum of the cubes of 1 and 2 is 1 + 8)
3 --> 36 (sum of the cubes of 1, 2, and 3 is 1 + 8 + 27)
*/

#include <iostream>
unsigned int sum_cubes(unsigned int n) {
    unsigned int result = 0;
    for (unsigned int i = 0; i <= n; ++i) {
        result += std::pow(i,3);
    }
    return result;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (sum_cubes(1) == 1) << "\n";
    std::cout << (sum_cubes(2) == 9) << "\n";
    std::cout << (sum_cubes(3) == 36) << "\n";
    std::cout << (sum_cubes(4) == 100) << "\n";
    std::cout << (sum_cubes(10) == 3025) << "\n";
    std::cout << (sum_cubes(123) == 58155876) << "\n";

    return 0;
}
