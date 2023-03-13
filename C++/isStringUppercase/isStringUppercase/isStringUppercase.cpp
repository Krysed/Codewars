/*
Create a method to see whether the string is ALL CAPS.

Examples (input -> output)
"c" -> False
"C" -> True
"hello I AM DONALD" -> False
"HELLO I AM DONALD" -> True
"ACSKLDFJSgSKLDFJSKLDFJ" -> False
"ACSKLDFJSGSKLDFJSKLDFJ" -> True
In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.
*/
#include <iostream>
#include <string>

bool is_uppercase(const std::string& s) {
    for (char c : s) if (isalpha(c) && (c != toupper(c))) return false;
    return true;
}
bool equal(bool a, bool b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << equal(is_uppercase("c"), false) << "\n";
    std::cout << equal(is_uppercase("C"), true) << "\n";
    std::cout << equal(is_uppercase("hello I AM DONALD"), false) << "\n";
    std::cout << equal(is_uppercase("HELLO I AM DONALD"), true) << "\n";
    std::cout << equal(is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ"), false) << "\n";
    std::cout << equal(is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ"), true) << "\n";
    return 0;
}
