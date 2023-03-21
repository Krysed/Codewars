#include <iostream>

int twice_as_old(int dad, int son) {
    return std::abs(son * 2 - dad);
}

bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(twice_as_old(36, 7), 22) << "\n";
    std::cout << equal(twice_as_old(55, 30), 5) << "\n";
    std::cout << equal(twice_as_old(42, 21), 0) << "\n";
    std::cout << equal(twice_as_old(22, 1), 20) << "\n";
    std::cout << equal(twice_as_old(29, 0), 29) << "\n";

    return 0;
}
