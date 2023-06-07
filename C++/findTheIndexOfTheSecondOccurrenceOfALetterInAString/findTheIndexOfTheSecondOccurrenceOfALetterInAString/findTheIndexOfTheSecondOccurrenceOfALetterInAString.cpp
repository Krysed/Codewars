/*
second occurrence of that letter in the string. If there is no such letter in the string, then the function should return -1. If the letter occurs only once in the string, then -1 should also be returned.

Examples:

secondSymbol('Hello world!!!','l') --> 3
secondSymbol('Hello world!!!', 'A') --> -1
Good luck ;) And don't forget to rate this Kata if you liked it.
*/

#include <iostream>
#include <string>

int secondSymbol(const std::string& str, char symbol) {
    int counter = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (symbol == str[i]) { 
            counter++; 
            if (counter == 2)return i; 
        } 
    }
    return -1;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (secondSymbol("Hello world!!!", 'l') == 3) << "\n";
    std::cout << (secondSymbol("Hello world!!!", 'o') == 7) << "\n";
    std::cout << (secondSymbol("Hello world!!!", 'A') == -1) << "\n";
    std::cout << (secondSymbol("", 'q') == -1) << "\n";

    return 0;
}
