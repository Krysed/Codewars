/*
An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

Examples
"foefet" is an anagram of "toffee"

"Buckethead" is an anagram of "DeathCubeK"
*/
#include <iostream>
#include <string>
#include <map>
bool isAnagram(std::string test, std::string original) {
    if (test.length() != original.length()) return false;
    std::map<char, int> testTmp;
    std::map<char, int>origTmp;
    for (int i = 0; i < original.length(); i++){
        testTmp[tolower(test[i])]++;
        origTmp[tolower(original[i])]++;
    }
    return testTmp == origTmp ? true : false;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(isAnagram("foefet", "toffee"), true) << "\n";
    std::cout << equal(isAnagram("Buckethead", "DeathCubeK"), true) << "\n";
    std::cout << equal(isAnagram("Twoo", "WooT"), true) << "\n";
    std::cout << equal(isAnagram("dumble", "bumble"), false) << "\n";
    std::cout << equal(isAnagram("around", "round"), false) << "\n";
    std::cout << equal(isAnagram("ound", "round"), false) << "\n";
    std::cout << equal(isAnagram("apple", "pale"), false) << "\n";
    std::cout << equal(isAnagram("apple", "appeal"), false) << "\n";
    std::cout << equal(isAnagram("apple", "appeal"), false) << "\n";
    std::cout << equal(isAnagram("", ""), true) << "\n";

    return 0;
}
