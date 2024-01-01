/*
Given an array, return the difference between the count of even numbers and the count of odd numbers. 0 will be considered an even number.

For example:
solve([0,1,2,3]) = 0 because there are two even numbers and two odd numbers. Even - Odd = 2 - 2 = 0.
Let's now add two letters to the last example:

solve([0,1,2,3,'a','b']) = 0. Again, Even - Odd = 2 - 2 = 0. Ignore letters.
The input will be an array of lowercase letters and numbers only.

In some languages (Haskell, C++, and others), input will be an array of strings:

solve ["0","1","2","3","a","b"] = 0
*/

#include <iostream>
#include <string>
#include <vector>

int solve(std::vector<std::string> v) {
    int evenCount = 0, oddCount = 0;

    for (std::string i : v) {
        if (isalpha(static_cast<unsigned char>(i[0]))) continue;

        int num = std::stoi(i);
        num % 2 == 0 ? evenCount++ : oddCount++;
    }
    return evenCount - oddCount;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << (solve({ "0","1","2","3" }) == 0) << "\n";
    std::cout << (solve({ "0","1","2","3","a","b"}) == 0) << "\n";
    std::cout << (solve({ "0","15","z","16","m","13", "14","c", "9", "10", "13","u", "4", "3" }) == 0) << "\n";
    std::cout << (solve({ "5", "15", "16", "10", "6", "4", "16", "t", "13", "n", "14", "k", "n", "0", "q", "d", "7", "9" }) == 2) << "\n";

    return 0;
}
