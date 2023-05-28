/*
ASC Week 1 Challenge 4 (Medium #1)

Write a function that converts any sentence into a V A P O R W A V E sentence. a V A P O R W A V E sentence converts all the letters into uppercase, and adds 2 spaces between each letter (or special character) to create this V A P O R W A V E effect.

Note that spaces should be ignored in this case.

Examples
"Lets go to the movies"       -->  "L  E  T  S  G  O  T  O  T  H  E  M  O  V  I  E  S"
"Why isn't my code working?"  -->  "W  H  Y  I  S  N  '  T  M  Y  C  O  D  E  W  O  R  K  I  N  G  ?"
*/
#include <iostream>
#include<string>

std::string vaporcode(const std::string& str) {
    std::string tmp = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ')continue;
        tmp += toupper(str[i]);
        tmp += "  ";
    }
    tmp.replace(end(tmp) - 1, end(tmp), "");
    return tmp;
}
bool equal(std::string a, std::string b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(vaporcode("Let's go to the movies"), "L  E  T  '  S  G  O  T  O  T  H  E  M  O  V  I  E  S") << "\n";
    std::cout << equal(vaporcode("Why isn't my code working?"), "W  H  Y  I  S  N  '  T  M  Y  C  O  D  E  W  O  R  K  I  N  G  ?") << "\n";

    return 0;
}
