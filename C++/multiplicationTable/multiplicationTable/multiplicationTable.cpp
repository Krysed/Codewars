/*
Your task, is to create N×N multiplication table, of size provided in parameter.

For example, when given size is 3:

1 2 3
2 4 6
3 6 9
For the given example, the return value should be:

[[1,2,3],[2,4,6],[3,6,9]]
*/
#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplication_table(int n) {
    std::vector<std::vector<int>> tmp;
    for (int i = 0; i < n; ++i) {
        std::vector<int>tmp2{};
        tmp.push_back(tmp2);
        for (int j = 0; j < n; ++j) {
            tmp[i].push_back((i + 1) * (j + 1));
        }
    }
    return tmp;
}
template<typename T>
bool equal(T a, T b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(multiplication_table(3), { {1,2,3},{2,4,6},{3,6,9} }) << "\n";

    return 0;
}
