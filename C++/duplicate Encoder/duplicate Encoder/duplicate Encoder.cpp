/*
The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

Examples
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))(("
Notes
Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!
*/
#include <iostream>
#include <string>
#include <map>

std::string duplicate_encoder(const std::string& word) {
    if(word.empty())return "";
    std::string encoded = "";
    std::map<char, int> characters;
    for (char c : word) characters[tolower(c)]++;
    for (char c : word)
    {
        if (characters[tolower(c)] > 1) encoded += ')';
        else encoded += '(';
    }
    std::cout << encoded << " ";
    return encoded;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(duplicate_encoder(""), "") << "\n";
    std::cout << equal(duplicate_encoder("din"), "(((") << "\n";
    std::cout << equal(duplicate_encoder("recede"), "()()()") << "\n";
    std::cout << equal(duplicate_encoder("Success"), ")())())") << "\n";
    std::cout << equal(duplicate_encoder("CodeWarrior"), "()(((())())") << "\n";
    std::cout << equal(duplicate_encoder("Supralapsarian"), ")()))()))))()(") << "\n";
    std::cout << equal(duplicate_encoder("(( @"), "))((") << "\n";
    std::cout << equal(duplicate_encoder(" ( ( )"), ")))))(") << "\n";

    return 0;
}
