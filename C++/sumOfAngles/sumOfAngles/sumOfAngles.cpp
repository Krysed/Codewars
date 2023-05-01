/*
Find the total sum of internal angles (in degrees) in an n-sided simple polygon. N will be greater than 2.
*/
#include <iostream>
int angle(int n) {
    return (n - 2) * 180;
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(angle(3), 180) << "\n";
    std::cout << equal(angle(4), 360) << "\n";
    std::cout << equal(angle(8), 1080) << "\n";
    std::cout << equal(angle(4), 360) << "\n";

    return 0;
}
