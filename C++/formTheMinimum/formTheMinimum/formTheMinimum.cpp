/*
Task
Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates).

Notes:
Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
Input >> Output Examples
minValue ({1, 3, 1})  ==> return (13)
Explanation:
(13) is the minimum number could be formed from {1, 3, 1} , Without duplications

minValue({5, 7, 5, 9, 7})  ==> return (579)
Explanation:
(579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without duplications

minValue({1, 9, 3, 1, 7, 4, 6, 6, 7}) return  ==> (134679)
Explanation:
(134679) is the minimum number could be formed from {1, 9, 3, 1, 7, 4, 6, 6, 7} , Without duplications

Playing with Numbers Series
Playing With Lists/Arrays Series
Bizarre Sorting-katas
For More Enjoyable Katas

*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned long long minValue(vector<int> values)
{
    std::sort(begin(values), end(values));
    values.erase(std::unique(begin(values), end(values)), end(values));
    std::string val = "";
    std::for_each(begin(values), end(values), [&val](auto i) { val += char(i + '0'); });
    return std::strtoull(val.c_str(),nullptr,10);
}
template<typename T1,typename T2>
bool equal(T1 a, T2 b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(minValue({ 1,3,1 }), 13) << "\n";
    std::cout << equal(minValue({ 4,7,5,7 }), 457) << "\n";
    std::cout << equal(minValue({ 4,8,1,4 }), 148) << "\n";
    std::cout << equal(minValue({ 5,7,9,5,7 }), 579) << "\n";
    std::cout << equal(minValue({ 6,7,8,7,6,6 }), 678) << "\n";
    std::cout << equal(minValue({ 5,6,9,9,7,6,4 }), 45679) << "\n";
    std::cout << equal(minValue({ 1,9,1,3,7,4,6,6,7 }), 134679) << "\n";
    std::cout << equal(minValue({ 3,6,5,5,9,8,7,6,3,5,9 }), 356789) << "\n";

    return 0;
}
