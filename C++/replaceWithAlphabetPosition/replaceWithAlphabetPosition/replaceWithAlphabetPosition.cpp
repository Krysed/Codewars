/*
Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.")
Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )
*/
#include <iostream>
#include <string>

std::string alphabet_position(const std::string& text) {
    if (text.empty())return "";
    std::string tmp = "";

    for (int i = 0; i < text.length(); ++i) 
    {
        if (isalpha(text[i])) 
        {
            tmp += std::to_string(static_cast<int>(std::tolower(text[i]) - 96)) + " ";
        }
    }        
    if(!tmp.empty())tmp.erase(end(tmp)-1);

    return tmp;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(alphabet_position("The sunset sets at twelve o' clock."), "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11") << "\n";
    std::cout << equal(alphabet_position("The narwhal bacons at midnight."), "20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20") << "\n";
    std::cout << equal(alphabet_position("0123456789"), "") << "\n";
    std::cout << equal(alphabet_position(",./<>?-_=+ "), "") << "\n";
    std::cout << equal(alphabet_position(""), "") << "\n";

    return 0;
}
