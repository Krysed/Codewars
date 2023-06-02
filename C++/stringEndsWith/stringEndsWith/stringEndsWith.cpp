/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

#include <iostream>
#include <string>
bool solution(std::string const& str, std::string const& ending) {
    for (int i = 0; i < ending.length(); ++i) {
        if (ending[ending.length() - i - 1] != str[str.length() - i - 1]) return false;
    }
    return true;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (solution("abcde", "cde") == true) << "\n";
    std::cout << (solution("abcde", "abc") == false) << "\n";
    std::cout << (solution("abc", "") == true) << "\n";

    return 0;
}
