/*
Introduction and Warm-up (Highly recommended)
Playing With Lists/Arrays Series
Task
Given an array of integers , Find the minimum sum which is obtained from summing each Two integers product .

Notes
Array/list will contain positives only .
Array/list will always have even size
Input >> Output Examples
minSum({5,4,2,3}) ==> return (22)
Explanation:
The minimum sum obtained from summing each two integers product ,  5*2 + 3*4 = 22
minSum({12,6,10,26,3,24}) ==> return (342)
Explanation:
The minimum sum obtained from summing each two integers product ,  26*3 + 24*6 + 12*10 = 342
minSum({9,2,8,7,5,4,0,6}) ==> return (74)
Explanation:
The minimum sum obtained from summing each two integers product ,  9*0 + 8*2 +7*4 +6*5 = 74
*/
#include <algorithm>
#include <iostream>
#include <vector>

int minSum(std::vector<int>passed)
{
    std::vector<int>sorted = passed;
    std::sort(begin(sorted), end(sorted), std::greater<int>());
    std::vector<int>reversed = sorted;
    std::reverse(begin(reversed),end(reversed));
    int sum = 0;
    for (int i = 0; i < passed.size() / 2; ++i) sum += sorted[i] * reversed[i];
    
    return sum;
}
bool equal(int a, int b)
{
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(minSum({ 5, 4, 2, 3 }), 22) << "\n";
    std::cout << equal(minSum({ 12,6,10,26,3,24 }), 342) << "\n";
    std::cout << equal(minSum({ 9,2,8,7,5,4,0,6 }), 74) << "\n";

    return 0;
}