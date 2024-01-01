/*
Write a function that takes a string and an an integer n as parameters and returns a list of all words that are longer than n.

Example:

* With input "The quick brown fox jumps over the lazy dog", 4
* Return ['quick', 'brown', 'jumps']
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
    std::vector<std::string> vec{};
    std::string word{};
    for (char c : sentence) {
        if (c == ' ') {
            if (word.size() > n) {
                vec.push_back(word);
            }
            word.clear();
        }
        else {
            word += c;
        }
    }
    if (word.size() > n) {
        vec.push_back(word);
    }
    return vec;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (filter_long_words("The quick brown fox jumps over the lazy dog", 4) == std::vector<std::string>{"quick", "brown", "jumps"}) << "\n";
    std::cout << (filter_long_words("The quick brown fox jumps over the lazy dog", 5) == std::vector<std::string>{}) << "\n";
    std::cout << (filter_long_words("The quick brown fox jumps over the lazy dog", 1) == std::vector<std::string>{"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"}) << "\n";

    return 0;
}
