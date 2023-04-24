/*
Write a function that checks if a given string (case insensitive) is a palindrome. A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar, the date and time 12/21/33 12:21, and the sentence: "A man, a plan, a canal – Panama".
*/

#include <iostream>
#include <string>

bool isPalindrom(const std::string& str)
{
    std::string tmp = str;
    reverse(begin(tmp), end(tmp));
    for (int i = 0; i < tmp.length(); ++i) if (tolower(tmp[i]) != tolower(str[i]))return false;
    return true;
}

template<typename T>
bool equal(T a, T b){
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(isPalindrom("a"), true) << "\n";
    std::cout << equal(isPalindrom("aba"), true) << "\n";
    std::cout << equal(isPalindrom("Abba"), true) << "\n";
    std::cout << equal(isPalindrom("hello"), false) << "\n";

    return 0;
}
