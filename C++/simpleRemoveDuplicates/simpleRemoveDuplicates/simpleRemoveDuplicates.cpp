/*
Remove the duplicates from a list of integers, keeping the last ( rightmost ) occurrence of each element.

Example:
For input: [3, 4, 4, 3, 6, 3]

remove the 3 at index 0
remove the 4 at index 1
remove the 3 at index 3
Expected output: [4, 6, 3]

More examples can be found in the test cases.

Good luck!
*/
#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> solve(std::vector<int> vec) {
    std::vector<int> result;
    std::reverse(vec.begin(), vec.end());
    std::vector<int> seen;
    for (auto i : vec) {
        if (std::find(seen.begin(), seen.end(), i) == seen.end()) {
            result.push_back(i);
            seen.push_back(i);
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(solve({ 3,4,4,3,6,3 }), {4,6,3}) << "\n";
    std::cout << equal(solve({ 1,2,1,2,1,2,3 }), { 1,2,3 }) << "\n";
    std::cout << equal(solve({ 1,2,3,4 }), { 1,2,3,4 }) << "\n";
    std::cout << equal(solve({ 1,1,4,5,1,2,1 }), { 4,5,2,1 }) << "\n";

    return 0;
}
