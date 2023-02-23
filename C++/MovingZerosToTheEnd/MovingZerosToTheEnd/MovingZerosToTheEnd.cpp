#include <iostream>
#include <vector>

/**
 * @Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.
 *move_zeros({1, 0, 1, 2, 0, 1, 3}) 
 *returns {1, 1, 2, 1, 3, 0, 0}
*/

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int>result{};
    int zeros = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 0)zeros++;
        else result.push_back(input[i]);
    }
    for (int i = 0; i < zeros; ++i)    {
        result.push_back(0);
    }
    return result;
}

bool equal(std::vector<int>a, std::vector<int>b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(move_zeroes({ 1, 2, 0, 1, 0, 1, 0, 3, 0, 1 }), { 1, 2, 1, 1, 3, 1, 0, 0, 0, 0 }) << '\n';
    std::cout << equal(move_zeroes({ 0, 0, 0, 0, 0, 0 }), { 0, 0, 0, 0, 0, 0 }) << '\n';
    std::cout << equal(move_zeroes({ 1, 2, 5, 1, 5, 1, 5, 3, 2, 1 }), { 1, 2, 5, 1, 5, 1, 5, 3, 2, 1 }) << '\n';
    return 0;
}
