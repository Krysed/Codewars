/*
You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

Examples
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <memory>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> oddNumbers;
        for (int i = 0; i < array.size(); ++i) {
            if (array[i] % 2 != 0) {
                oddNumbers.push_back(array[i]);
            }
        }

        std::sort(oddNumbers.begin(), oddNumbers.end());

        int j = 0;
        for (int i = 0; i < array.size(); ++i) {
            if (array[i] % 2 != 0) {
                array[i] = oddNumbers[j];
                ++j;
            }
        }
        return array;
    }
};

bool equal(std::vector<int>a, std::vector<int>b) {
    return a == b;
}

int main()
{
    std::unique_ptr<Kata> k = std::make_unique<Kata>();
    
    std::cout << std::boolalpha;
    
    std::cout << equal(k->sortArray({ 5, 3, 2, 8, 1, 4 }), { 1, 3, 2, 8, 5, 4 }) << "\n";
    std::cout << equal(k->sortArray({ 5, 3, 1, 8, 0 }), { 1, 3, 5, 8, 0 }) << "\n";
    std::cout << equal(k->sortArray({}), {}) << "\n";

    return 0;
}
