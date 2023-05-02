/*
To find the volume (centimeters cubed) of a cuboid you use the formula:

volume = Length * Width * Height

But someone forgot to use proper record keeping, so we only have the volume, and the length of a single side!

It's up to you to find out whether the cuboid has equal sides (= is a cube).

Return true if the cuboid could have equal sides, return false otherwise.

Return false for invalid numbers too (e.g volume or side is less than or equal to 0).

Note: side will be an integer
*/

#include <iostream>
#include <cmath>

bool is_cube(int volume, int side)
{
    if (volume <= 0 || side <= 0)return false;
    return volume == pow(side,3);
}
template <typename T>
bool equal(T a, T b) {
    return a == b;
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << equal(is_cube(1, 1), true) << "\n";
    std::cout << equal(is_cube(8, 2), true) << "\n";
    std::cout << equal(is_cube(2, 1), false) << "\n";
    std::cout << equal(is_cube(-8, -2), false) << "\n";
    std::cout << equal(is_cube(0, 0), false) << "\n";
    std::cout << equal(is_cube(200, 4), false) << "\n";

    return 0;
}
