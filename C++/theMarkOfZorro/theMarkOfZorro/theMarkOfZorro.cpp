/*
The Mark of Zorro
In this kata, you will need to develop an algorithm that returns all items from a matrix, just like when Zorro prints his "Z" mark. In this case, the function must be a template (for c++), which works regardless of the type of data contained in the array. All matrices will be square, and the empty ones should return an empty array. The output should use the same container type as either of the input types (std::vector for c++).

Example 1
std::vector<std::vector<char>> matrix {

{'a', 'b', 'c', 'e'},

{'f', 'g', 'h', 'i'},

{'j', 'k', 'l', 'm'},

{'n', 'o', 'p', 'q'}

};
Should return {'a', 'b', 'c', 'e', 'h', 'k', 'n', 'o', 'p', 'q'}.

Example 2
std::vector<std::vector<float>> matrix {

{1.5, 17.7, 9.345},

{0.1, 91.0, 14.81},

{9.9, -1.7, -9.13}

};
Should return {1.5, 17.7, 9.345, 91.0, 9.9, -1.7, -9.13}.

Example 3
std::vector<std::vector<std::string>> matrix {};
Should return {}.
*/

#include <iostream>
#include <vector> 

template <typename T> 
std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
    if(matrix.empty()) return {};
    std::vector<T> tmp{};
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (i == 0 || i == matrix.size() - 1)tmp.push_back(matrix[i][j]);
            else { tmp.push_back(matrix[i][matrix.size()-i-1]); break; }
        }
    }
    return tmp;
}

template <typename T>
bool equal(std::vector<T> a, std::vector<T> b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;
    std::vector<std::vector<int>>tmp{ { 1, 3, 4 }, { 9,9,3 }, { 6,7,8 } };
    std::cout << equal(zorro(tmp), { 1,3,4,9,6,7,8 }) << "\n";

    std::vector<std::vector<char>>tmp2{ {'a', 'b', 'c'},{'d', 'e', 'f'},{'g', 'h', 'i'} };
    std::cout << equal(zorro(tmp2), { 'a', 'b', 'c', 'e', 'g', 'h', 'i' }) << "\n";

    std::vector<std::vector<std::string>>tmp3{{":)", ">:(", "o.O"},{".-.", "*^*", ":("},{"|:O", ">B)", "x_x"}};
    std::cout << equal(zorro(tmp3), { ":)", ">:(", "o.O", "*^*", "|:O", ">B)", "x_x" }) << "\n";

    return 0;
}
