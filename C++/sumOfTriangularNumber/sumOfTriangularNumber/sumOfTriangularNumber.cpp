/*
Your task is to return the sum of Triangular Numbers up-to-and-including the nth Triangular Number.

Triangular Number: "any of the series of numbers (1, 3, 6, 10, 15, etc.) obtained by continued summation of the natural numbers 1, 2, 3, 4, 5, etc."

[01]
02 [03]
04 05 [06]
07 08 09 [10]
11 12 13 14 [15]
16 17 18 19 20 [21]
e.g. If 4 is given: 1 + 3 + 6 + 10 = 20.

Triangular Numbers cannot be negative so return 0 if a negative number is given.
*/
#include <iostream>

int sumTriangularNumbers(int n) {
    if(n < 1) return 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i) sum += (i*(i + 1))/2; 
    return sum;
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(sumTriangularNumbers(6), 56) << "\n";
    std::cout << equal(sumTriangularNumbers(34), 7140) << "\n";
    std::cout << equal(sumTriangularNumbers(-291), 0) << "\n";
    std::cout << equal(sumTriangularNumbers(943), 140205240) << "\n";
    std::cout << equal(sumTriangularNumbers(-971), 0) << "\n";

    return 0;
}
