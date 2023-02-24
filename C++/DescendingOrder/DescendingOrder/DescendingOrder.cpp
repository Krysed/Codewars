/**
 *Your task is to make a function that can take any non-negative integer as an
 *argument and return it with its digits in descending order. Essentially,
 *rearrange the digits to create the highest possible number.
 *Examples:
 *Input: 42145 Output: 54421
 *Input: 145263 Output: 654321
 *Input: 123456789 Output: 987654321
 *
*/
#include <cinttypes>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

uint64_t descendingOrder(uint64_t a)
{
    std::string tmp;
    tmp = std::to_string(a);
    std::vector<char> num;
    for (int i = 0; i < tmp.length(); ++i) {
        num.push_back(tmp[i]);
    }
    std::sort(num.begin(), num.end());
    std::reverse(num.begin(), num.end());
    tmp.clear();
    for (char a : num) {
        tmp += a;
    }
    return std::strtoumax(tmp.c_str(), nullptr, 0);
}

template<typename T>
bool equals(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equals(descendingOrder(0), uint64_t(0)) << '\n';
    std::cout << equals(descendingOrder(1), uint64_t(1)) << '\n';
    std::cout << equals(descendingOrder(15), uint64_t(51)) << '\n';
    std::cout << equals(descendingOrder(1021), uint64_t(2110)) << '\n';
    std::cout << equals(descendingOrder(123456789), uint64_t(987654321)) << '\n';
    return 0;
}
