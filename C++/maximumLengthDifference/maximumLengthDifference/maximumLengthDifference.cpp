/*
You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the first array and y be any string in the second array.

Find max(abs(length(x) − length(y)))

If a1 and/or a2 are empty return -1 in each language except in Haskell (F#) where you will return Nothing (None).

Example:
a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
mxdiflg(a1, a2) --> 13
Bash note:
input : 2 strings with substrings separated by ,
output: number as a string
*/
#include <algorithm>
#include <iostream>
#include <vector>
class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string>& a1, std::vector<std::string>& a2)
    {
        if (a1.empty() || a2.empty()) return -1;
        int max1=0, max2=0,min1=a1[0].length(), min2 = a2[0].length();
        std::for_each(begin(a1), end(a1), [&max1, &min1](std::string tmp) {if (tmp.length() > max1)max1 = tmp.length(); if (tmp.length() < min1)min1 = tmp.length(); });
        std::for_each(begin(a2), end(a2), [&max2, &min2](std::string tmp) {if (tmp.length() > max2)max2 = tmp.length(); if (tmp.length() < min2)min2 = tmp.length(); });
        return max1 - min2 > max2 - min1 ? max1 - min2 : max2 - min1;
    }
};

bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;
    std::vector<std::string>vec1{ "hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz" };
    std::vector<std::string>vec2{ "cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww" };
    std::cout << equal(MaxDiffLength::mxdiflg(vec1, vec2),13) << "\n";

    return 0;
}
