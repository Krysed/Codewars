/*
Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.

Examples
"the-stealth-warrior" gets converted to "theStealthWarrior"
"The_Stealth_Warrior" gets converted to "TheStealthWarrior"
"The_Stealth-Warrior" gets converted to "TheStealthWarrior"
*/
#include <iostream>
#include <string>

std::string to_camel_case(std::string text) {
    std::string result;
    bool capitalize_next = false;

    for (char c : text) {
        if (c == '-' || c == '_') {
            capitalize_next = true;
        }
        else {
            if (capitalize_next) {
                result += std::toupper(c);
                capitalize_next = false;
            }
            else {
                result += c;
            }
        }
    }

    return result;
}
bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(to_camel_case(""), "") << "\n";
    std::cout << equal(to_camel_case("the_stealth_warrior"), "theStealthWarrior") << "\n";
    std::cout << equal(to_camel_case("The-Stealth-Warrior"), "TheStealthWarrior") << "\n";
    std::cout << equal(to_camel_case("A-B-C"), "ABC") << "\n";
    return 0;
}
