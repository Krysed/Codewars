/*
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr) {
    int num_vowels = 0;
    for (char c : inputStr) if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')++num_vowels;
    return num_vowels;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (getCount("abracadabra") == 5) << "\n";

    return 0;
}
