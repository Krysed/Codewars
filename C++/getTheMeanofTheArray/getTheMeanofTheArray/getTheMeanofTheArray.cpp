/*
It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.
*/
#include <algorithm>
#include <iostream>
#include <vector>

int get_average(std::vector <int> marks)
{
    int grade = 0;
    std::for_each(begin(marks), end(marks), [&grade](int i) {grade += i; });
    return grade / marks.size();
}
bool equal(int a, int b) {
    return a == b;
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(get_average({ 2,2,2,2 }), 2) << "\n";
    std::cout << equal(get_average({ 1, 5, 87, 45, 8, 8 }), 25) << "\n";
    std::cout << equal(get_average({ 2,5,13,20,16,16,10 }), 11) << "\n";
    std::cout << equal(get_average({ 1,2,15,15,17,11,12,17,17,14,13,15,6,11,8,7 }), 11) << "\n";

    return 0;
}
