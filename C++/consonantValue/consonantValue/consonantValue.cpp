/*
Given a lowercase string that has alphabetic characters only and no spaces, return the highest value of consonant substrings. Consonants are any letters of the alphabet except "aeiou".

We shall assign the following values: a = 1, b = 2, c = 3, .... z = 26.

For example, for the word "zodiacs", let's cross out the vowels. We get: "z o d ia cs"

-- The consonant substrings are: "z", "d" and "cs" and the values are z = 26, d = 4 and cs = 3 + 19 = 22. The highest is 26.
solve("zodiacs") = 26

For the word "strength", solve("strength") = 57
-- The consonant substrings are: "str" and "ngth" with values "str" = 19 + 20 + 18 = 57 and "ngth" = 14 + 7 + 20 + 8 = 49. The highest is 57.
For C: do not mutate input.

More examples in test cases. Good luck!

If you like this Kata, please try:

Word values

Vowel-consonant lexicon
*/

#include <iostream>
#include <string>

int solve(const std::string& s)
{
    int maxValue = 0, currentValue = 0;
    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            currentValue += c-96;
        }
        else {
            if (maxValue < currentValue) maxValue = currentValue;
            currentValue = 0;
        }
    }
    return std::max(maxValue,currentValue);
}
bool equal(int a, int b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(solve("zodiac"), 26) << "\n";
    std::cout << equal(solve("chruschtschov"), 80) << "\n";
    std::cout << equal(solve("khrushchev"), 38) << "\n";
    std::cout << equal(solve("strength"), 57) << "\n";
    std::cout << equal(solve("catchphrase"), 73) << "\n";
    std::cout << equal(solve("twelfthstreet"), 103) << "\n";
    std::cout << equal(solve("mischtschenkoana"), 80) << "\n";

    return 0;
}