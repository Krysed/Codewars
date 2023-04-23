/*
The solution would work like the following:

get_even_numbers({2,4,5,6}) => {2,4,6}
*/
#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
    std::vector<int>tmp{};
    std::for_each(begin(arr), end(arr), [&tmp](int i) {if (i % 2 == 0)tmp.push_back(i); });
    return tmp;
}

bool equal(std::vector<int> a, std::vector<int>b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(get_even_numbers({2,4,5,6}), {2,4,6}) << "\n";
    std::cout << equal(get_even_numbers({}), {}) << "\n";
    std::cout << equal(get_even_numbers({1}), {}) << "\n";
    std::cout << equal(get_even_numbers({1,2}), {2}) << "\n";
    std::cout << equal(get_even_numbers({2,4,6,8}), {2,4,6,8}) << "\n";

    return 0;
}
