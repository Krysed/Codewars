/*
Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string
*/
#include <algorithm>
#include <iostream>
#include <string>
std::string reverse_letter(const std::string& str)
{
    std::string tmp="";
    std::for_each(rbegin(str), rend(str), [&tmp](auto c) { return (isalpha(c)) ? tmp += c : tmp; });
    return tmp; 
}

template<typename T,typename T1>
bool equal(T a, T1 b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(reverse_letter("krishan"), "nahsirk") << "\n";
    std::cout << equal(reverse_letter("ultr53o?n"), "nortlu") << "\n";
    std::cout << equal(reverse_letter("ab23c"), "cba") << "\n";
    std::cout << equal(reverse_letter("krish21an"), "nahsirk") << "\n";

    return 0;
}