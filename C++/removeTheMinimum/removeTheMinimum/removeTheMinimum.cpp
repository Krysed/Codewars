/*
The museum of incredible dull things
The museum of incredible dull things wants to get rid of some exhibitions. Miriam, the interior architect, comes up with a plan to remove the most boring exhibitions. She gives them a rating, and then removes the one with the lowest rating.

However, just as she finished rating all exhibitions, she's off to an important fair, so she asks you to write a program that tells her the ratings of the items after one removed the lowest one. Fair enough.

Task
Given an array of integers, remove the smallest value. Do not mutate the original array/list. If there are multiple elements with the same value, remove the one with a lower index. If you get an empty array/list, return an empty array/list.

Don't change the order of the elements that are left.

Examples
* Input: [1,2,3,4,5], output = [2,3,4,5]
* Input: [5,3,2,1,4], output = [5,3,2,4]
* Input: [2,2,1,2,1], output = [2,2,2,1]
*/
#include <iostream>
#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    if (numbers.empty())return {};
    std::vector<unsigned int> tmp = numbers;
    int index = 0, min=numbers[0];
    for (int i = 0; i < numbers.size();++i) {
        if (numbers[i] < min) {
            min = numbers[i];
            index = i;
        }
    }
    tmp.erase(tmp.begin()+index);
    return tmp;
}
template <typename T>
bool equal(T a, T b){
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(removeSmallest({ 1, 2, 3, 4, 5 }), { 2, 3, 4, 5 }) << "\n";
    std::cout << equal(removeSmallest({ 5, 3, 2, 1, 4 }), { 5, 3, 2, 4 }) << "\n";
    std::cout << equal(removeSmallest({ 2, 2, 1, 2, 1 }), { 2, 2, 2, 1 }) << "\n";
    std::cout << equal(removeSmallest({ 2 }), {}) << "\n";
    std::cout << equal(removeSmallest({}), {}) << "\n";

    return 0;
}
