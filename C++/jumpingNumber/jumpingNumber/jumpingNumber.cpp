/*
Definition
Jumping number is the number that All adjacent digits in it differ by 1.

Task
Given a number, Find if it is Jumping or not .

Warm-up (Highly recommended)
Playing With Numbers Series
Notes
Number passed is always Positive .

Return the result as String .

The difference between ‘9’ and ‘0’ is not considered as 1 .

All single digit numbers are considered as Jumping numbers.

Input >> Output Examples
jumpingNumber(9) ==> return "Jumping!!"
*/
#include <iostream>
#include <string>

std::string jumpingNumber(int number)
{
    std::string num = std::to_string(number);
    for (int i = 0; i < num.length()-1; ++i)
    {
        if (num[i] + 1 == num[i + 1] || num[i] - 1 == num[i+1])continue;
        return "Not!!";
    }
    return "Jumping!!";
}

bool equal(std::string a, std::string b) {
    return a == b;
}
int main()
{

    std::cout << std::boolalpha;

    std::cout << equal(jumpingNumber(9), "Jumping!!") << "\n";
    std::cout << equal(jumpingNumber(1), "Jumping!!") << "\n";
    std::cout << equal(jumpingNumber(7), "Jumping!!") << "\n";

    std::cout << equal(jumpingNumber(23), "Jumping!!") << "\n";
    std::cout << equal(jumpingNumber(32), "Jumping!!") << "\n";
    std::cout << equal(jumpingNumber(79), "Not!!") << "\n";
    std::cout << equal(jumpingNumber(98), "Jumping!!") << "\n";

    return 0;
}
