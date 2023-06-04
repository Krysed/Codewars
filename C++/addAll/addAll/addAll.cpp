/*
Yup!! The problem name reflects your task; just add a set of numbers. But you may feel yourselves condescended, 
to write a program just to add a set of numbers. Such a problem will simply question your erudition. So, let's add some flavor of 
ingenuity to it. Addition operation requires cost now, and the cost is the summation of those two to be added. So, to add 1 and 10, 
you need a cost of 11. If you want to add 1, 2 and 3, there are several ways:

1 + 2 = 3, cost = 3,
3 + 3 = 6, cost = 6,
Total = 9.
1 + 3 = 4, cost = 4,
2 + 4 = 6, cost = 6,
Total = 10.
2 + 3 = 5, cost = 5,
1 + 5 = 6, cost = 6,
Total = 11.
I hope you have understood already your mission: to add a set of integers so that the cost is minimal.

Your Task
Given a vector of integers, return the minimum total cost of addition.
*/
#include <algorithm>

#include <iostream>
#include <vector>


int addAll(const std::vector<int>& numbers) {
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int totalCost = 0;
    while (sortedNumbers.size() > 1) {
        int sum = sortedNumbers[0] + sortedNumbers[1];
        totalCost += sum;

        sortedNumbers.erase(sortedNumbers.begin(), sortedNumbers.begin() + 2);
        sortedNumbers.insert(std::lower_bound(sortedNumbers.begin(), sortedNumbers.end(), sum), sum);
    }

    return totalCost;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (addAll({ 1,2,3 }) == 9) << "\n";
    std::cout << (addAll({ 1,2,3,4 }) == 19) << "\n";
    std::cout << (addAll({ 1,2,3,4,5 }) == 33) << "\n";

    return 0;
}