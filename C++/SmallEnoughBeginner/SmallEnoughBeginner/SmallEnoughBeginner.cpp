/*
You will be given an array and a limit value. You must check that all values in the array are below or equal to the limit value. If they are, return true. Else, return false.

You can assume all values in the array are numbers.
*/

#include <iostream>
#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
    for (int i : arr)
        if (i > limit) return false;
    return true;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (small_enough({ 66, 101 }, 200) == true) << "\n";
    std::cout << (small_enough({ 78, 117, 110, 99, 104, 117, 107, 115 }, 100) == false) << "\n";
    std::cout << (small_enough({ 101, 45, 75, 105, 99, 107 }, 107) == true) << "\n";
    std::cout << (small_enough({ 80, 117, 115, 104, 45, 85, 112, 115 }, 120) == true) << "\n";
    std::cout << (small_enough({ 1, 1, 1, 1, 1, 2 }, 1) == false) << "\n";

    return 0;
}
