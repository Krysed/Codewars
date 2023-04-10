/*
Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

Example:

'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'
*/

#include <algorithm>
#include <iostream>
#include <string>

std::string switcheroo(const std::string& s) {
    std::string tmp = "";
    std::for_each(begin(s), end(s), [&tmp](auto c) {
        if (c == 'a')tmp += 'b';
        else if (c == 'b') tmp += 'a';
        else tmp += 'c';
    });
    return tmp;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(switcheroo("abc"), "bac") << "\n";
    std::cout << equal(switcheroo("aaabcccbaaa"), "bbbacccabbb") << "\n";
    std::cout << equal(switcheroo("cccccc"), "cccccc") << "\n";
    std::cout << equal(switcheroo("abababababababab"), "babababababababa") << "\n";
    std::cout << equal(switcheroo("aaaa"), "bbbb") << "\n";
    std::cout << equal(switcheroo("bbbb"), "aaaa") << "\n";

    return 0;
}
