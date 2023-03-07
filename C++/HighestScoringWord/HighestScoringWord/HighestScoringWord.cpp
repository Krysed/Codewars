/*
Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

For example, the score of abad is 8 (1 + 2 + 1 + 4).

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid.
*/
#include <iostream>
#include <string>
#include <vector>

std::string highestScoringWord(const std::string& str)
{
    std::string word = "";
    int maxScore = 0;
    std::string maxWord = "";
    std::string letters = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ') {
            word += str[i];
        }
        if (str[i] == ' ' || i == str.length() - 1) {
            int score = 0;
            for (int j = 0; j < word.length(); j++) {
                int index = letters.find(word[j]);
                score += (index + 1);
            }
            if (score > maxScore || (score == maxScore && word < maxWord)) {
                maxScore = score;
                maxWord = word;
            }
            word.clear();
        }
    }
    return maxWord;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(highestScoringWord("man i need a taxi up to ubud"), "taxi") << "\n";
    std::cout << equal(highestScoringWord("what time are we climbing up the volcano"), "volcano") << "\n";
    std::cout << equal(highestScoringWord("take me to semynak"), "semynak") << "\n";
    std::cout << equal(highestScoringWord("massage yes massage yes massage"), "massage") << "\n";
    std::cout << equal(highestScoringWord("take two bintang and a dance please"), "bintang") << "\n";
    std::cout << equal(highestScoringWord("aa b"), "aa") << "\n";
}
