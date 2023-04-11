/*
Complete the function/method so that it returns the url with anything after the anchor (#) removed.

Examples
"www.codewars.com#about" --> "www.codewars.com"
"www.codewars.com?page=1" -->"www.codewars.com?page=1"
*/
#include <iostream>
#include <string>

std::string replaceAll(std::string str) {
    std::string tmp="";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '#')break;
        tmp += str[i];
    }
    std::cout << tmp;
    return tmp;
}

bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(replaceAll("www.codewars.com#about"), "www.codewars.com") << "\n";
    std::cout << equal(replaceAll("www.codewars.com?page=1"), "www.codewars.com?page=1") << "\n";

    return 0;
}
