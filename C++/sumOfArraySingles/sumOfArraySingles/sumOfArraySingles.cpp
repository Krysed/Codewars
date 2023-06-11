/*
In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.

For example, repeats([4,5,7,5,4,8]) = 15 because only the numbers 7 and 8 occur once, and their sum is 15. Every other number occurs twice.

More examples in the test cases.

Good luck!

If you like this Kata, please try:

Sum of prime-indexed elements

Sum of integer combinations
*/

#include <iostream>
#include <vector>
#include <map>

int repeats(std::vector<int>v) {
    std::map<int, int> tmp;
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) tmp[v[i]]++;
    for (int i = 0; i < tmp.size(); ++i)if (tmp[i] == 1)sum += i;
    return sum;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (repeats({ 4,5,7,5,4,8 }) == 15) <<"\n";
    std::cout << (repeats({ 9, 10, 19, 13, 19, 13 }) == 19) <<"\n";
    std::cout << (repeats({ 16, 0, 11, 4, 8, 16, 0, 11 }) == 12) <<"\n";
    std::cout << (repeats({ 5, 17, 18, 11, 13, 18, 11, 13 }) == 22) << "\n";

    return 0;
}
