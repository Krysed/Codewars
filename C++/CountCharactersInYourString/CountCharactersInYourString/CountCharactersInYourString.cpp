/*
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.
What if the string is empty? Then the result should be empty object literal, {}.
*/

#include <iostream>
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> map;
    for (const char c : string) {
        map[c]++;
    }
    return map;
}

bool equal(std::map<char, unsigned>a, std::map<char, unsigned>b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(count("aba"), { { 'a', 2 }, { 'b', 1 } }) << "\n";
    std::cout << equal(count(""), {}) << "\n";

    return 0;
}
