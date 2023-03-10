/*
Complete the solution so that it reverses the string passed into it.
'world'  =>  'dlrow'
'word'   =>  'drow'
*/
#include <iostream>

std::string reverseString(std::string str)
{
    std::reverse(begin(str), end(str));
    return str;
}
bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(reverseString("hello"), "olleh") << "\n";
    std::cout << equal(reverseString("rat"), "tar") << "\n";
    std::cout << equal(reverseString("alpha"), "ahpla") << "\n";

    std::cout << equal(reverseString("codewars"), "srawedoc") << "\n";
    std::cout << equal(reverseString("football"), "llabtoof") << "\n";
    std::cout << equal(reverseString("translation"), "noitalsnart") << "\n";

    return 0;
}