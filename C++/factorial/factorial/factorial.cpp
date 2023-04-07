/*
Your task is to write function factorial.
https://en.wikipedia.org/wiki/Factorial
*/
#include <iostream>
long long factorial(int n) {
    long long sum = 1;
    for (int i = 1; i <= n; ++i)sum *= i;
    return sum;
}
bool equal(long long a, long long b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(factorial(0), 1) << "\n";
    std::cout << equal(factorial(1), 1) << "\n";
    std::cout << equal(factorial(2), 2) << "\n";
    std::cout << equal(factorial(3), 6) << "\n";
    std::cout << equal(factorial(4), 24) << "\n";
    std::cout << equal(factorial(5), 120) << "\n";
    std::cout << equal(factorial(6), 720) << "\n";
    std::cout << equal(factorial(7), 5040) << "\n";
    
    return 0;
}
