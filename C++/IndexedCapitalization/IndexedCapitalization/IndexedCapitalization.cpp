/*
Given a string and an array of integers representing indices, capitalize all letters at the given indices.

For example:

capitalize("abcdef",[1,2,5]) = "aBCdeF"
capitalize("abcdef",[1,2,5,100]) = "aBCdeF". There is no index 100.
The input will be a lowercase string with no spaces and an array of digits.

Good luck!

Be sure to also try:

Alternate capitalization

String array revisal
*/

#include <iostream>
#include <vector>
#include <string>

std::string capitalize(std::string s, std::vector<int> idxs)
{
    std::string result = s;
    for (int i = 0; i < idxs.size(); ++i) {
        if (idxs[i] > s.length())continue;
        result[idxs[i]] = toupper(result[idxs[i]]);
    }
    return result;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (capitalize("abcdef", std::vector<int> {1, 2, 5}) == "aBCdeF") << "\n";
    std::cout << (capitalize("abcdef", std::vector<int> {1, 2, 100, 5}) == "aBCdeF") << "\n";
    std::cout << (capitalize("codewars", std::vector<int> {1, 3, 5, 50}) == "cOdEwArs") << "\n";
    std::cout << (capitalize("abracadabra", std::vector<int> {2, 6, 9, 10}) == "abRacaDabRA") << "\n";
    std::cout << (capitalize("codewarriors", std::vector<int> {5}) == "codewArriors") << "\n";
    std::cout << (capitalize("indexinglessons", std::vector<int> {0}) == "Indexinglessons") << "\n";

    return 0;
}