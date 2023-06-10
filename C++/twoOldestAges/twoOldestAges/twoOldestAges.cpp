/*
The two oldest ages function/method needs to be completed. It should take an array of numbers as its argument and return the two highest numbers within the array. The returned value should be an array in the format [second oldest age,  oldest age].

The order of the numbers passed in could be any order. The array will always include at least 2 items. If there are two or more oldest age, then return both of them in array format.

For example (Input --> Output):

[1, 2, 10, 8] --> [8, 10]
[1, 5, 87, 45, 8, 8] --> [45, 87]
[1, 3, 10, 0]) --> [3, 10]
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <array>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    std::sort(begin(ages),end(ages));
    return std::array<int, 2>{ages[ages.size() - 2], ages[ages.size() - 1]};;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (two_oldest_ages({ 1,5,87,45,8,8 }) == std::array<int, 2>{ 45, 87 }) << "\n";
    std::cout << (two_oldest_ages({ 6,5,83,5,3,18 }) == std::array<int, 2>{18, 83}) << "\n";

    return 0;
}