#include <iostream>
#include <string>
#include <vector>

template <typename T> std::vector<T>
uniqueInOrder(const std::vector<T>& iterable) {
    std::vector<T> vec;
    if (iterable.size() == 0)return vec;
    else vec.push_back(iterable[0]);
    for (int i = 1; i < iterable.size(); i++)
    {
        if (iterable[i] != iterable[i - 1])vec.push_back(iterable[i]);

    }
    return vec;
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> vec;
    if (iterable.size() == 0)return vec;
    else vec.push_back(iterable[0]);
    for (int i = 1; i < iterable.size(); i++)
    {
        if (iterable[i] != iterable[i - 1])vec.push_back(iterable[i]);

    }
    return vec;
}

template<typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(uniqueInOrder(""), {}) << "\n";
    std::cout << equal(uniqueInOrder("AA"), {'A'}) << "\n";
    std::cout << equal(uniqueInOrder("A"), { 'A' }) << "\n";
    std::cout << equal(uniqueInOrder("AAAABBBCCDAABBB"), { 'A', 'B', 'C', 'D', 'A', 'B' }) << "\n";
    std::cout << equal(uniqueInOrder("AADD"), { 'A', 'D' }) << "\n";
    std::cout << equal(uniqueInOrder("AAD"), { 'A', 'D' }) << "\n";
    std::cout << equal(uniqueInOrder("ADD"), { 'A', 'D' }) << "\n";
    std::cout << equal(uniqueInOrder("ABBCcAD"), { 'A', 'B', 'C', 'c', 'A', 'D' }) << "\n";
    std::cout << equal(uniqueInOrder({ 1,2,3,3 }), { {1,2,3} }) << "\n";
    std::cout << equal(uniqueInOrder({ 'a','b','b' }), { 'a','b' }) << "\n";

}
