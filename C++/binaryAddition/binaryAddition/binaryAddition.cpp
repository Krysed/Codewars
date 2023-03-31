/*
Implement a function that adds two numbers together and returns their sum in binary. The conversion can be done before, or after the addition.

The binary number returned should be a string.

Examples:(Input1, Input2 --> Output (explanation)))

1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)
*/

#include <iostream>
#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
    std::string tmp;
    uint64_t sum = a + b;
    if (sum == 0)return "0";
    while (sum) {
        if (sum % 2 == 0) tmp.insert(0, "0");
        else tmp.insert(0, "1");
        sum /= 2;
    }
    return tmp;
}
template<typename T,typename T1>
bool equal(T a, T1 b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    
    std::cout << equal(add_binary(1, 1), "10") << "\n";
    std::cout << equal(add_binary(0, 1), "1") << "\n";
    std::cout << equal(add_binary(1, 0), "1") << "\n";
    std::cout << equal(add_binary(2, 2), "100") << "\n";
    std::cout << equal(add_binary(51, 12), "111111") << "\n";
    std::cout << equal(add_binary(874523845298, 3123861), "1100101110011101110111101000110101000111") << "\n";

    return 0;
}
