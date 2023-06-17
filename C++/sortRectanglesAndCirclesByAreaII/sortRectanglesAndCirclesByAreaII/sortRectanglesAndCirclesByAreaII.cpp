/*
In this kata you will be given a sequence of the dimensions of rectangles ( sequence with width and length ) and circles ( radius - just a number ).
Your task is to return a new sequence of dimensions, sorted ascending by area.

For example,

seq = { {4.23, 6.43}, {1.23, 0}, {3.444, 0}, {1.342, 3.212} } // { rectangle, circle, circle, rectangle }
sort_by_area(seq) => { {1.342, 3.212}, {1.23, 0}, {4.23, 6.43}, {3.444, 0} }
This kata inspired by Sort rectangles and circles by area.
*/

#include <iostream>
#include <utility>
#include <vector>

using vec_rect_circle = std::vector<std::pair<double, double>>;

vec_rect_circle sort_by_area(vec_rect_circle v) {
    std::vector<double> areas;
    for (auto elem : v) {
        if (elem.second == 0) {
            areas.push_back(3.14 * std::pow(elem.first, 2));
        }
        else {
            areas.push_back(elem.first * elem.second);
        }
    }
    for (int i = 0; i < areas.size(); ++i)
    {
        for (int j = 0; j < areas.size() - i - 1; ++j) {
            if (areas[j] > areas[j + 1]) {
                std::swap(areas[j], areas[j + 1]);
                std::swap(v[j], v[j + 1]);
            }
        }
    }
    return v;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << (sort_by_area({ {4.23, 6.43}, {1.23, 0}, {3.444, 0}, {1.342, 3.212} }) == vec_rect_circle{ {1.342, 3.212}, { 1.23, 0 }, { 4.23, 6.43 }, { 3.444, 0 }}) << "\n";

    return 0;
}
