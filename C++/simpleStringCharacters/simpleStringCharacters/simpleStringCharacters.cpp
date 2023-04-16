/*
In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters, as follows.

Solve("*'&ABCDabcde12345") = [4,5,5,3].
--the order is: uppercase letters, lowercase, numbers and special characters.
More examples in the test cases.

Good luck!
*/
#include <iostream>
#include <vector>
std::vector<int> solve(std::string s) {
    std::vector<int>tmp{0,0,0,0};
    for (char c : s)
    {
        if (isdigit(c))++tmp[2];
        else if (isupper(c))++tmp[0];
        else if (islower(c))++tmp[1];
        else ++tmp[3];
    }
    return tmp;
}

bool equal(std::vector<int> a, std::vector<int>b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(solve("Codewars@codewars123.com"), { 1,18,3,2 }) << "\n";
    std::cout << equal(solve("bgA5<1d-tOwUZTS8yQ"), { 7,6,3,2 }) << "\n";
    std::cout << equal(solve("P*K4%>mQUDaG$h=cx2?.Czt7!Zn16p@5H"), { 9,9,6,9 }) << "\n";
    std::cout << equal(solve("RYT'>s&gO-.CM9AKeH?,5317tWGpS<*x2ukXZD"), { 15,8,6,9 }) << "\n";

    return 0;
}
