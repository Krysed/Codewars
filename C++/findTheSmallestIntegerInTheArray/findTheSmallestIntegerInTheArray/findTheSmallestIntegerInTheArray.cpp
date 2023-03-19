/*
Given an array of integers your solution should find the smallest integer.
For example:

Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, that the supplied array will not be empty.
*/
#include <algorithm>
#include <iostream>
#include <vector>


int findSmallest(std::vector <int> list) {
    return *min_element(begin(list), end(list));
}

bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(findSmallest({ 3,5,2 }), 2) << "\n";
    std::cout << equal(findSmallest({ 7,4,6,8 }), 4) << "\n";
    std::cout << equal(findSmallest({ 17,21,15,36,96 }), 15) << "\n";
    std::cout << equal(findSmallest({ 3,9,13,10,5,3,9,5 }), 3) << "\n";
    
    std::cout << equal(findSmallest({ -12,-52,-27 }), -52) << "\n";
    std::cout << equal(findSmallest({ -3,-27,-4,-2,-27,-2 }), -27) << "\n";
    std::cout << equal(findSmallest({ -16,-37,-8,-46,-29 }), -46) << "\n";
    std::cout << equal(findSmallest({ -14,-102,-96,-36,-46,-15,-44 }), -102) << "\n";
    
    std::cout << equal(findSmallest({ 12,0,-27 }), -27) << "\n";
    std::cout << equal(findSmallest({ -13,-50,57,13,67,-13,57,108,67 }), -50) << "\n";
    std::cout << equal(findSmallest({ -23,12,0,-47,-3,24 }), -47) << "\n";
    return 0;
}
