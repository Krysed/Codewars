/*
Given a string s. You have to return another string such that even-indexed and odd-indexed characters of s are grouped and groups are space-separated (see sample below)

Note:
0 is considered to be an even index.
All input strings are valid with no spaces
input: 'CodeWars'
output 'CdWr oeas'

S[0] = 'C'
S[1] = 'o'
S[2] = 'd'
S[3] = 'e'
S[4] = 'W'
S[5] = 'a'
S[6] = 'r'
S[7] = 's'
Even indices 0, 2, 4, 6, so we have 'CdWr' as the first group
odd ones are 1, 3, 5, 7, so the second group is 'oeas'
And the final string to return is 'Cdwr oeas'
*/

#include <iostream>

std::string sortMyString(const std::string& s)
{
    std::string odd = "", even = "";
    for (size_t i = 0; i < s.size(); ++i){
        i % 2 ? odd += s[i] : even += s[i];
    }
    return even + " " + odd;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (sortMyString("CodeWars") == "CdWr oeas") << "\n";
    std::cout << (sortMyString("YCOLUE'VREER") == "YOU'RE CLEVER") << "\n";

    return 0;
}
