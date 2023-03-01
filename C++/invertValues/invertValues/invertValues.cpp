#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> invert(std::vector<int> values)
{ 
    std::for_each(begin(values), end(values), [](int &i) { return i *= (-1); });
    return values;
}
bool equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(invert({ 1, 2, 3, 4, 5 }), { -1, -2, -3, -4, -5 }) << "\n";
    std::cout << equal(invert({ 1, -2, 3, -4, 5 }), { -1, 2, -3, 4, -5 }) << "\n";
    std::cout << equal(invert({}), {}) << "\n";

    return 0;
}
