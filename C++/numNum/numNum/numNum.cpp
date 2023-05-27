/*
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)

Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)

Note: The function accepts an integer and returns an integer.

Happy Coding!
*/
#include <algorithm>
#include <iostream>
#include <string>

int square_digits(int num) {
    std::string tmp = std::to_string(num);
    std::string result = "";
    std::for_each(begin(tmp), end(tmp), [&result](char c) { int num = pow(std::stoi(std::string("") + c), 2); result += std::to_string(num); });
    return std::stoi(result);
}
bool equal(int a, int b) {
    return  a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(square_digits(0), 0) << "\n";
    std::cout << equal(square_digits(3212), 9414) << "\n";
    std::cout << equal(square_digits(2112), 4114) << "\n";
    std::cout << equal(square_digits(13579), 19254981) << "\n";
    std::cout << equal(square_digits(24680), 41636640) << "\n";

    return 0;
}
