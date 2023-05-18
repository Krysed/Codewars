/*
Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.
*/
#include <iostream>
# include <string>

std::string disemvowel(const std::string& str) {
    std::string tmp = "";
    for (char c : str)if (tolower(c) != 'e' && tolower(c) != 'o' && tolower(c) != 'a' && tolower(c) != 'i' && tolower(c) != 'u') tmp += c;
    return tmp;
}
bool equal(std::string a, std::string b){
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(disemvowel("This website is for losers LOL!"), "Ths wbst s fr lsrs LL!") << "\n";

    return 0;
}
