/*
Given an array of numbers (in string format), you must return a string. The numbers correspond to the letters of the alphabet in reverse order: a=26, z=1 etc. You should also account for '!', '?' and ' ' that are represented by '27', '28' and '29' respectively.

All inputs will be valid.
*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
    std::string result = "";
    std::for_each(begin(arr), end(arr), [&result](std::string val) { 
        if (val == "27")result += '!';
        else if (val == "28")result += '?';
        else if (val == "29")result += ' ';
        else result +=(static_cast<char>(abs(std::stoi(val)-'a' - 26))); 
        });
    return result;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (switcher({ "24", "12", "23", "22", "4", "26", "9", "8" }) == "codewars") << "\n";
    std::cout << (switcher({ "25", "7", "8", "4", "14", "23", "8", "25", "23", "29", "16", "16", "4" }) == "btswmdsbd kkw") << "\n";
    std::cout << (switcher({ "4", "24" }) == "wc") << "\n";
    std::cout << (switcher({ "12" }) == "o") << "\n";
    std::cout << (switcher({ "12", "28", "25", "21", "25", "7", "11", "22", "15" }) == "o?bfbtpel") << "\n";

    return 0;
}
