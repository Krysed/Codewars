#include <iostream>
#include <vector>
#include <algorithm>

int sum_of_minimums(const std::vector<std::vector<int>>& numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size();++i) {
        int min = numbers[i][0];
        for (int j = 1; j < numbers[i].size(); ++j)
        {
            std::cout << numbers[i][j] << '\n';
            if (numbers[i][j] < min) min = numbers[i][j];
        }
        sum += min;
    }
    return sum;
}

int main()
{
    std::vector<std::vector<int>> test = { {7,9,8,6,2},{6,3,5,4,3},{5,8,7,4,5} };
    std::cout << "Sum: " << sum_of_minimums(test) << '\n';

    test = { {11,12,14,54}, {67,89,90,56}, {7,9,4,3}, {9,8,6,7} };
    std::cout << "Sum: " << sum_of_minimums(test) << '\n';
    return 0;
}
