/*
Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces.

Good luck!

If you like this Kata, please try:

Indexed capitalization
Even-odd disparity
*/
#include <iostream>
#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string& s)
{
    std::pair<std::string, std::string> a;
    for (int i = 0; i < s.length(); ++i)
    {
        if (i % 2 == 0) {
            a.first += toupper(s[i]);
            a.second += s[i];
        }
        else{
            a.first += s[i];
            a.second += toupper(s[i]);
        }
    }
    return a;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(capitalize("codewars"), { "CoDeWaRs", "cOdEwArS" }) << "\n";
    std::cout << equal(capitalize("abracadabra"), { "AbRaCaDaBrA", "aBrAcAdAbRa" }) << "\n";
    std::cout << equal(capitalize("codewarriors"), { "CoDeWaRrIoRs", "cOdEwArRiOrS" }) << "\n";

    return 0;
}