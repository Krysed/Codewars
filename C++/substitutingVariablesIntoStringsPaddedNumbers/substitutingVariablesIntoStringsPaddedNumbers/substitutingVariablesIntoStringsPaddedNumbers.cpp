/*
Complete the solution so that it returns a formatted string. The return value should equal "Value is VALUE" where value is a 5 digit padded number.

Example:

solution(5); // should return "Value is 00005"
*/

#include <iostream>
#include <string>

std::string solution(int n) {
    std::string num = std::to_string(n);
    for (int i = num.length(); i < 5; ++i)num.insert(begin(num), '0');
    return "Value is " + num;
}
bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(solution(0), "Value is 00000") << "\n";
    std::cout << equal(solution(5), "Value is 00005") << "\n";
    std::cout << equal(solution(109), "Value is 00109") << "\n";
    std::cout << equal(solution(1204), "Value is 01204") << "\n";

    return 0;
}
