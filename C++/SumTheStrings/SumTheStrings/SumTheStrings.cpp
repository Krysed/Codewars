/*
Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"
Notes:

If either input is an empty string, consider it as zero.

Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
*/
#include <iostream>
#include <string>

std::string sum_str(const std::string& a, const std::string& b){
    if (a == "") {
        if (b == "")return "0";
        return b;
    }
    if (b == "") return a;
    return std::to_string(std::stoi(a) + std::stoi(b));
}
bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(sum_str("4", "5"), "9") << "\n";
    std::cout << equal(sum_str("34", "5"), "39") << "\n";
    std::cout << equal(sum_str("42", ""), "42") << "\n";
    std::cout << equal(sum_str("", "42"), "42") << "\n";

    return 0;
}
