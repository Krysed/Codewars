/*
In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:

make as few changes as possible.
if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
For example:

solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
solve("coDE") = "code". Upper == lowercase. Change all to lowercase.
More examples in test cases. Good luck!
*/

#include <iostream>
#include <string>

std::string solve(const std::string& str) {
    int upper = 0, lower = 0;
    for (char c : str) {
        if (isupper(c))upper++;
        else if (islower(c))lower++;
    }
    std::string tmp = "";
    if (lower >= upper) 
    {
        for (char c : str) tmp += tolower(c);
    }
    else
    {
        for (char c : str) tmp += toupper(c);
    }
    return tmp;
}
bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(solve("code"), "code") << "\n";
    std::cout << equal(solve("CODe"), "CODE") << "\n";
    std::cout << equal(solve("COde"), "code") << "\n";
    std::cout << equal(solve("Code"), "code") << "\n";
    std::cout << equal(solve(""), "") << "\n";

    return 0;
}
