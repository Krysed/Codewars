/*
Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.
Write a function which takes a list of strings and returns each line prepended by the correct number.

The numbering starts at 1. The format is n: string. Notice the colon and space in between.
Examples: (Input --> Output)

[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string>& lines)
{
    std::vector<std::string> words;
    for (int i = 1; i < lines.size()+1; ++i) {
        words.push_back(std::to_string(i) + ": " + lines[i - 1]);
    }
    return words;
}

bool equal(std::vector<std::string>a, std::vector<std::string>b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(number({ "a","b","c" }), { "1: a", "2: b", "3: c" }) << "\n";
    std::cout << equal(number({ "a","b","c","d"}), {"1: a", "2: b", "3: c","4: d"}) << "\n";
    std::cout << equal(number({}), {}) << "\n";

    return 0;
}
