/*
Define a method/function that removes from a given array of integers all the values contained in a second array.

Examples (input -> output):
* [1, 1, 2, 3, 1, 2, 3, 4], [1, 3] -> [2, 2, 4]
* [1, 1, 2, 3, 1, 2, 3, 4, 4, 3, 5, 6, 7, 2, 8], [1, 3, 4, 2] -> [5, 6, 7, 8]
* [8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2, 3], [2, 4, 3] -> [8, 7, 6, 5, 1]
Enjoy it!!
*/

#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
    std::vector<int>result;
    for (int i : integers) {
        if (std::find(begin(values), end(values), i) == end(values)) {
            result.push_back(i);
        }
    }
    return result;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(remove_values({ 1, 1, 2 ,3 ,1 ,2 ,3 ,4 }, { 1, 3 }), { 2, 2, 4 }) << "\n";
    std::cout << equal(remove_values({ 1, 1, 2 ,3 ,1 ,2 ,3 ,4, 4, 3 ,5, 6, 7, 2, 8 }, { 1, 3, 4, 2 }), { 5, 6, 7, 8 }) << "\n";
    std::cout << equal(remove_values({ 8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2 , 3 }, { 2, 4, 3 }), { 8, 7, 6, 5, 1 }) << "\n";

    return 0;
}
