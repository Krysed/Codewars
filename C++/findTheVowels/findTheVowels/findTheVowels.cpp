/*
We want to know the index of the vowels in a given word, for example, there are two vowels in the word super (the second and fourth letters).

So given a string "super", we should return a list of [2, 4].

Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,4,6]
NOTES
Vowels in this context refers to: a e i o u y (including upper case)
This is indexed from [1..n] (not zero indexed!)
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int> res;
    for (int i = 0; i < word.length(); ++i) {
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'u' || std::tolower(word[i]) == 'e' || std::tolower(word[i]) == 'o' || std::tolower(word[i]) == 'y')res.push_back(i + 1);
    }
    return res;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (vowelIndices("super") == std::vector<int>{2, 4}) << "\n";

    return 0;
}
