/*
Determine the total number of digits in the integer (n>=0) given as input to the function. For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits. Be careful to avoid overflows/underflows.

All inputs will be valid.
*/
#include <iostream>
#include <stdint.h>

int digits(uint64_t n) {
    if (n == 0)return 1;
    int counter = 0;
    while (n != 0) {
        n /= 10;
        counter++;
    }
    return counter;
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(digits(5ull), 1) << "\n";
    std::cout << equal(digits(12345ull), 5) << "\n";
    std::cout << equal(digits(9876543210ull), 10) << "\n";


    return 0;
}
