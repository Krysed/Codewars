/*
i is the imaginary unit, it is defined by
i²=−1, therefore it is a solution to
x²+1=0.
Your Task
Complete the function pofi that returns
i to the power of a given non-negative integer in its simplest form, as a string (answer may contain i).
*/

#include <iostream>
#include <string>

std::string pofi(unsigned n) {
    return n % 4 == 0 ? "1" : n % 4 == 1 ? "i" : n % 4 == 2 ? "-1" : "-i";
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (pofi(0) == "1") << "\n";
    std::cout << (pofi(1) == "i") << "\n";
    std::cout << (pofi(2) == "-1") << "\n";
    std::cout << (pofi(3) == "-i") << "\n";
    std::cout << (pofi(4) == "1") << "\n";
    std::cout << (pofi(5) == "i") << "\n";
    std::cout << (pofi(6) == "-1") << "\n";
    std::cout << (pofi(7) == "-i") << "\n";
    std::cout << (pofi(8) == "1") << "\n";
    std::cout << (pofi(9) == "i") << "\n";
    std::cout << (pofi(10) == "-1") << "\n";

    return 0;
}